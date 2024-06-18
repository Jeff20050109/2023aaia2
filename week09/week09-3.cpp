#include <stdio.h>
int main()
{
    printf("請輸入10個字母,不能有空格在裡面:\n");
    char line [11];
    scanf("%s", line);
    printf("這個字是:3裡面的字,分別是:\n");
    for(int i=0;i<11;i++)
日
    {
        printf("%d個字母: &c對應的數案是: %d\n", i, line[i],line[i]);
    }
}
