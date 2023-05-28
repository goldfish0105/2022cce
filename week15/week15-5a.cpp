#include <stdio.h>
int main()
{
	int x1,y1,x2,y2,ans;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	ans=(x2-x1)*(y2-y1);
	if(ans<0)ans=-ans;
	printf("%d",ans);
}
