
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int max=n,min=n;
	while(n!=0){
		scanf("%d",&n);
		if(n>max)max=n;
		if(n<min)min=n;
	}
	printf("[%d,%d]",min,max);
}
