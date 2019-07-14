#include <iostream>
using namespace std;
int main(){
	int curr = 0;
	int res = 0;
	int save = 0;
	bool out = false;
	for(int i = 0; i < 12; ++i){
		cin >> curr;
		if(res + 300 < curr){
			cout << "-" << i+1 << endl;
			out = true;
			break;
		}
		else{
			save += (res+300-curr) / 100;
			res = (res+300-curr) % 100;
		}
	}
	if(!out){
		cout << res + save*120 << endl;
	}
} 
