/*
* 1. 产生的循环一定是环状的
* 2. 用[].length取数组大小
* 3. 可以使用三元运算符
* 4. 算法改进见cpp代码
*/
class Solution {
    public int arrayNesting(int[] nums) {
        int max = 0;
        for(int i = 0; i < nums.length; ++i){
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
}