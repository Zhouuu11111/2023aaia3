//week15-1.cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string hello;
	int t=1; //step03
	while(cin >> hello ) {//step01
		if(hello == "#") break;


		cout << "Case " << t << ": ENGLISH\n";
		t++;
	}//step02: Output
}
