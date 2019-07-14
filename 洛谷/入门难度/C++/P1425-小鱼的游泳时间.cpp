#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int min = d-b < 0 ? d+60-b : d-b;
    int hour = d-b < 0 ? c-a-1 : c-a;
    cout << hour << " " << min << endl;
}
