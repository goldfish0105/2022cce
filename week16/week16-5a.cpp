#include <stdio.h>
int main()
{
	char c;
	while(scanf("%c",&c)==1){
		if(c>='0'&&c<='9'){
			printf("%c\n",c);
			break;
		}
	}
}
/*int main()
{
	int n;
	scanf("%d",&n);
	if(n<0)n=-n;
	while(n>10){
		n=n/10;
	}
	printf("%d\n",n);
}*/
