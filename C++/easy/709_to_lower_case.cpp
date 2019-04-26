/*C++ 大小写转换的四种方法
* 1. <algorithm> transform(str.begin(), str.end(), str.begin(), ::tolower) 
* 2. char = toupper(char)
* 3. char += 32 / char -= 32
* 4. if else直接转换
*/

class Solution {
public:
    string toLowerCase(string str) {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        return str;
    }
};