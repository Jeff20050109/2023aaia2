#include <stdio.h>
void myPrint(int a)
{
    for(int i=1;i<a;i++) printf("");
    printf("\n");
}
int main()
{
    myPrint (5);
    myPrint (4);
    myPrint (3);
    myPrint (2);
    myPrint (1);
}
