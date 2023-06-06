#include <stdio.h>
#include <string.h>
int main()
{
    char line[30];
    int total=0;
    while(scanf("%s",line)==1){
        int N = strlen(line);
        int ans=0;//迴圈前面ans=0
        for(int i=0;i<N;i++){
            if(line[i]=='2')ans++;
        }//迴圈中間ans++
        printf("%d\n",ans);
        //迴圈後面把ans印出來
        total += ans;
    }
    printf("Total: %d\n",total);
}


