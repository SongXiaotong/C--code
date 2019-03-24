/**
 * java查找字符串的方法
 * 1. str1.indexOf(str2):返回str1中第一个匹配到str2的位置
 * 2. str1.lastIndexOf(str2):返回str1中最后一个匹配到str2的位置
 * 3. str1.contains(str2):判断str1中是否含有str2，其中str2类型为charSequence，返回boolean
 * 4. 正则表达式：Pattern p = Pattern.compile(str2) Matcher m = p.matcher(str1) m.find();find方法扫描当前结果，返回剩下的子序列，和while一起使用
 * 5. str1.split(str2)：用str2对dtr1进行分割，得到段数-1就是找到的个数
 */


class Solution {
    public int numJewelsInStones(String J, String S) {
        int num = 0;
        for(int i=0; i < S.length(); ++i){
            if(J.indexOf(S.charAt(i)) >= 0)
                num++;
        }
        return num;
    }
}