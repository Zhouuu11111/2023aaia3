// week13-1.cpp
#include <iostream>
using namespace std;
int helper(int a, int b) {//step03 function
	return 3;
}
int main()
{
	int a,b;
	while(cin >> a >> b ) {//step01 Input
		if(a==0 && b==0) break;

		int ans = helper(a, b);
		if(ans == 0) cout << "No carry operation.\n";
		else if(ans ==1 ) cout << "1 carry operation.\n";
		else cout << ans << " carry operations.\n";
	}//step02 output
}
