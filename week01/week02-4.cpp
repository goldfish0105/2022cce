#include <iostream>///#include <stdio.h>
using namespace std;
int main()
{
	long long int a,b;
	while(cin >> a >> b){
		long long int ans = a - b;
		if(ans < 0) ans = b - a;
		cout << ans << endl;
		//printf("%lld\n",ans);
	}
}
