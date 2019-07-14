#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int watt;
	cin >> watt;
	cout << setiosflags(ios::fixed)<<setprecision(1);
	if(watt < 150){
		cout << double(0.4463*watt) <<endl;
	}
	else if(watt < 400){
		cout << double(0.4463*150) + double(0.4663*(watt-150)) <<endl;
	}
	else{
		cout << double(0.4463*150) + double(0.4663*250) + double(0.5663*(watt-400)) <<endl;
	}
}
