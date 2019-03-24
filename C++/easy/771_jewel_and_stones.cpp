/** 使用cstring库中的find函数 
* C++中字符串匹配方法：
* 1. str1.find(str2):返回字符串str2在str1中第一次出现时的位置，如果没有找到就返回-1（string::npos）
* 2. str1.rfind(str2):从后向前返回字符串str2在str1中第一次出现时的位置，如果没有找到就返回-1（string::npos）
* 3. str1.find_first_of(str2)：返回匹配到的第一个字符串的位置
* 4. str1.find_last_of(str2)：返回匹配到的最后一个字符串的位置
* 5. str1.find_first_not_of(str2)：返回str1中第一个与str2中任何字符都不符合的元素位置，否则npos
* 6. str1.find_last_not_of(str2)：返回str1中最后一个与str2中任何字符都不符合的元素位置，否则npos
**/

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int num = 0;
        for(int i = 0; i < S.length(); ++i){
            if(J.find(S[i]) != -1)
                num++;
        }
        return num;
    }
};