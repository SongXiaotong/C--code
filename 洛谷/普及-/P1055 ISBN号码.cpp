#include <iostream>
using namespace std;

int main(){
    string a;
    int curr = 1, res = 0;
    cin >> a;
    for(int i = 0; i < 12; ++i){
    	if(a[i] == '-'){
    		continue;
    	}
    	else{
    		res += curr*(a[i]-'0');
    		curr++;
    	}
    }
    res = res % 11;
    if((a[12] == 'X' && res == 10) || a[12]-'0' == res){
    	cout << "Right" << endl;
    }
    else{
    	a[12] = res == 10? 'X' : res+'0';
		cout << a << endl;
    }
}
