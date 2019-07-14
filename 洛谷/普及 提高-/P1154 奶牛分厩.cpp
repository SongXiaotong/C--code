#include <iostream>
#include <cmath>
using namespace std;
const int N=1000000;
int main(){
	int number;
	cin >> number;
	int numbers[number];
	for(int i = 0; i < number; ++i){
		cin >> numbers[i];
	}
	int house_num[1000000] = {0};
	for(int i = 0; i < numbers[number-1]; ++i){
		house_num[i] = 0;
	}
	for(int i = 0; i < number; ++i){
		for(int j = i+1; j < number; ++j){
			house_num[abs(numbers[j]-numbers[i])] = 1;
		}
	}
	
	for(int i = number; i < N; ++i){
		bool end = false;
		if(!house_num[i] ){
//			cout << i << endl;
			end = true;
			for(int j = i+i; j<numbers[number-1]; j+=i){
				if(house_num[j] == 1){
					end = false;
				}
			}
		}
		if(end){
			cout << i <<endl;
			break;
		}
	}
}
