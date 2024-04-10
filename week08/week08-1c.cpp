/// week08-1a.cpp 99乘法表 & 畫星星相同之處
#include <stdio.h>
int main()
{
    printf("請輸入大小");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=9;i++){///左手
        int space=i,star=n;///第i行,有i個空格
        for(int k=1;k<=space;k++)printf(" ");
        for(int k=1;k<=star;k++)printf("*");

        ///for(int j=1;j<=9; j++){
        ///    printf("*");
        ///}
        printf("i:%d\n",i);
    }
}
