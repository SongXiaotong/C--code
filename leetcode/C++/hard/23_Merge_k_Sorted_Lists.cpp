/**
 * solution1
 */
struct cmp{
    bool operator()(ListNode* l, ListNode* r){
        return l->val > r->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       priority_queue<ListNode*, vector<ListNode*>, cmp> res;
        for(int i = 0; i < lists.size(); ++i){
            if(lists[i] != NULL){
                res.push(lists[i]);
            }
        }
        ListNode* start = new ListNode(0);
        ListNode *curr = start;
        ListNode *t = NULL;
        while(!res.empty()){
            t = res.top();
            res.pop();
            curr->next = t;
            if(t->next != NULL){
                res.push(t->next);
            }
            curr = curr->next;
        }
        return start->next;
    }
};

/**
 * solution2
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return NULL;
        return distribute(lists, 0, lists.size()-1);        
    }
    ListNode* distribute(vector<ListNode*> lists, int left, int right){
        if(left < right){
            int mid = (left+right) / 2;
            return mergeTwo(distribute(lists, left, mid), distribute(lists, mid+1, right));
        }
        return lists[left];
    }
    ListNode* mergeTwo(ListNode* left, ListNode* right){
        ListNode* res = new ListNode(0);
        ListNode* curr = res;
        while(left != NULL && right != NULL){
            bool nextIsLeft = left->val < right->val;
            curr->next = nextIsLeft ? left : right;
            left = nextIsLeft ? left->next : left;
            right = nextIsLeft ? right : right->next;
            curr = curr->next;
        }
        curr->next = left == NULL ? right : left;
        return res->next;
    }
};