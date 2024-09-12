#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	cout << n%16 /8;
	cout << n%8 /4;
	cout << n%4 /2;
	cout << n%2;
	return 0;
}
