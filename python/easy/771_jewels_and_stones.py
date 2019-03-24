# str1.find(str2) 返回匹配位置
class Solution(object):
    def numJewelsInStones(self, J, S):
        num = 0
        for s in S:
            if J.find(s) >= 0:
                num += 1
        return num