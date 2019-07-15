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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *res = new ListNode(0);
        ListNode *start = res, *subStart = res, *end = res, *subEnd = res;
        ListNode *curr = head;
        while(curr){
            ListNode *curr1 = curr;
            for(int i = 0; i < k; ++i){
                if(curr1 == NULL){
                    end->next = curr;
                    return res->next;
                }
                curr1 = curr1->next;
            }
            subEnd = curr;
            subStart = curr;
            ListNode *nextLoad = curr->next;
            for(int i = 0; i < k-1; ++i){
                ListNode *temp = nextLoad->next;
                // cout << "temp0" << " " << nextLoad->val << endl;
                subStart = nextLoad;
                // cout << i << " " << nextLoad->val << endl;
                nextLoad->next = curr;
                curr = nextLoad;
                nextLoad = temp;
                // cout << "temp" << " " << nextLoad->val << endl;
            }
            end->next = subStart;
            end = subEnd;
            curr = nextLoad;
        }
        end->next = NULL;
        return res->next;
    }
};