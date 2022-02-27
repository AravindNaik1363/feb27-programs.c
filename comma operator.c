#include <stdio.h>
int func(int,int);//function prototype

int func(int x,int y)//function definition
{
    return (x+y);
}


int main()
{
    int a=5,b=10,c;
    c=func(a,b);//function calling
    printf("c value is %d",c);
    c=1,2,3;
    printf("\nc value is:%d",c);
    c=(1,2,3);
    printf("\nc value is:%d",c);
    printf("\nfunc(2,4)+(1,4) output is %d",func(2,4)+(1,4));
    return 0;
}
