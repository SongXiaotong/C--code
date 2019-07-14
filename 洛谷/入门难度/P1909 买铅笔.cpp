#include <iostream>
using namespace std;
int main(){
	int need = 0;
	int min = 0;
	cin >> need;
	for (int i = 0; i < 3; ++i){
		int num, price;
		cin >> num >> price;
		int number = need % num == 0 ? need/num : need/num+1;
		if(i == 0){
			min = number*price;
		}
		else{
			min = min > number*price ? number*price : min;
		}
		
	}
	cout << min << endl;
}
