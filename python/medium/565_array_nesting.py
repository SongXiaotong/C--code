# 见java cpp
# len([])返回长度
class Solution(object):
    def arrayNesting(self, nums):
        max1 = 0
        leng = len(nums)
        for i in range(leng):
            count = 0
            start = i
            while (nums[start] != leng):
                temp = start
                start = nums[start]
                nums[temp] = leng
                count += 1
            if max1 < count:
                max1 = count
        return max1
        