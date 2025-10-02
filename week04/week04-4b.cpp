#include <iostream>
using namespace std;
int main()
{
	int a, b;
	while( cin >> a >>b ){
		int ans = 0;
		int now=1;
		while(n != 1) {
			if(n%2==1) n = 3*n+1;
			now++;
		}
		if(now>ans) ans = now;
		printf( "%d %d %d\n", a, b, ans);
	}
}
