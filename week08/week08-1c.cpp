/// week08-1a.cpp 99���k�� & �e�P�P�ۦP���B
#include <stdio.h>
int main()
{
    printf("�п�J�j�p");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=9;i++){///����
        int space=i,star=n;///��i��,��i�ӪŮ�
        for(int k=1;k<=space;k++)printf(" ");
        for(int k=1;k<=star;k++)printf("*");

        ///for(int j=1;j<=9; j++){
        ///    printf("*");
        ///}
        printf("i:%d\n",i);
    }
}
