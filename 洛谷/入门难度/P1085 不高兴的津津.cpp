#include <iostream>
using namespace std;
int main(){
	int max=0, day = 0;
	int a, b;
	for(int i = 0; i < 7; ++i){
		cin >> a >> b;
		day = a+b > 8 && a+b > max ? i+1 : day;
		max = a+b > max ? a+b : max;
	}
	cout << day << endl;
}
