#include <stdio.h>
int func(int,int);

int func(int x,int y)
{
    return (x+y);
}


int main()
{
    int a=5,b=10,c;
    c=func(a,b);
    printf("c value is %d",c);
    c=1,2,3;
    printf("\nc value is:%d",c);
    c=(1,2,3);
    printf("\nc value is:%d",c);
    
    
    return 0;
}
