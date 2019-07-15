class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        int number = words.size();
        if(number == 0 || s.length() == 0){
            return res;
        }
        int length = words[0].length();
        if(length > s.length()){
            return res;
        }
        map<string, int>wordlist;
        for(vector<string>::iterator i = words.begin(); i != words.end(); ++i){
            if(wordlist.find(*i) == wordlist.end()){
                wordlist[*i] = 1;
            }
            else{
                wordlist[*i] += 1;
            }
        }
        for(int i = 0; i < length; ++i){
            map<string, int>wordlist2;
            int count = 0;
            int start = i;
            for(int j = i; j < s.length()-length+1; j += length){
                string check = s.substr(j, length);
                if(wordlist.find(check) != wordlist.end()){
                    count++;
                    if(wordlist2.find(check) != wordlist2.end()){
                        wordlist2[check] += 1;
                        // cout << "curr: " << check << " " << wordlist2[check] << " " << count << endl;
                        while(wordlist[check] < wordlist2[check]){
                            wordlist2[s.substr(start, length)]--;
                            cout << check << " " << wordlist2[check] << endl;
                            start += length;
                            count--;
                        }
                    }
                    else{
                         // cout << "curr: " << check << " " << wordlist2[check] << " " << count << endl;
                        wordlist2[check] = 1;   
                    }
                    if(count == number){
                        res.push_back(start);
                        wordlist2[s.substr(start, length)]--;
                        start += length;
                        count--;
                    }
                }
                else{
                    count = 0;
                    wordlist2.clear();
                    start = j+length;
                }
            }
        }
        return res;
    }
};