#include <stdio.h>
int main()
{
    FILE * fin =fopen("file.txt", "r");

    char line[200];

    fscanf(fin, "%s", line);
    printf("現在執行次路的檔案裡讀入 %s\n", line);

    fscanf(fin, "%s", line);
    printf("現在執行次路的檔案裡讀入 %s\n", line);
}
