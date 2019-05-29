/*
* 1. 产生的循环一定是环状的
* 2. 用vector.size()取vector大小
* 3. 可以使用三元运算符
* 4. 算法改进：能产生的所有的环里面的元素都不会重复
*/

class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int max = 0;
        int length = nums.size();
        for(int i = 0; i < length; ++i){
            int j = nums[i], count = 0;
            do{
                j = nums[j];
                count++;
            }
            while(nums[i] != j);
            if(max < count){
                max = count;
            }
        }
        return max;
    }
};

class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int max = 0, length = 0;
        length = nums.size();
        for (int i = 0; i < length; ++i){
            if(nums[i] != length){
                int count = 0;
                int j = i;
                while(nums[j] != length){
                    int a = nums[j];
                    nums[j] = length;
                    count+=1;
                    j = a;
                }
                if(max < count)
                    max = count;
                if(max > length/2)
                    return max;
            }
            
        }
        return max;
    }
};