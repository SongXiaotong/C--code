class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int totallength = nums1.size() + nums2.size();
        int i = 0, j = 0, curr = 0, before = 0, next = 0;
        while(curr < totallength/2+1){
            before = next;
            if(i == nums1.size()){
                next = nums2[j];
                j++;
            }
            else if (j == nums2.size()){
                next = nums1[i];
                i++;
            }
            else if(nums1[i] < nums2[j] ){
                next = nums1[i];
                i++;
            }
            else{
                next = nums2[j];
                j++;
            }
            curr++;
        }
        if(totallength % 2 == 1){
            return next;
        }
        else{
            return double(before+next)/2;
        }
    }
};