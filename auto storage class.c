#include<stdio.h>

int main()
{
    for(int i=0;i<2;i++)
    {
        int a=10;//auto variable is block scope
        printf("a =%d",a);
    }
    printf("a =%d",a);// a declared has scope within that block only here not declared
    return 0;//prints error
}
