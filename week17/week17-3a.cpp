//week17-3a.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a,b;
	cin >> a;
	cin >> b;
	int N1 = a.length(), N2 = b.length();
	if(N1>N2) cout << 1;
	else if(N1<N2) cout << -1;
	else{
		//C: strcmp() c++: string .compare
		cout << a.compare(b);
	}


}
