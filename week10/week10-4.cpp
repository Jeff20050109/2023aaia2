#include <stdio.h>
int z = 100;
void myFunc()
{
    int x = 20;
    printf("myFunc() 裡的x: %d z: %d\n", x,z);
    printf("在離開時,順手把x和 都設成0\n");
    x = 0;
    Z = 0;
}
int main()
{
    int x = 10;
    printf("main() 裡的x: %d z: %d\n", x,z);
    myFunc();
    printf("main() 裡的x: %d z: %d\n",x,z);
}
