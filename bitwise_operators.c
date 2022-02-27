#include <stdio.h>

int main()
{
    int a,b;
    printf("enter a and b values:");
    scanf("%d %d",&a,&b);
    printf("\nResult of bitwise AND=%d",a&b);
    
    printf("\nResult of bitwise OR=%d",a|b);
    
    printf("\nResult of bitwise XOR=%d",a^b);
    
    printf("\nResult of bitwise NOT=%d",~a);//output=-(a+1)
    
    printf("\nResult of bitwise LEFT SHIFT=%d",a<<b);//output=a*(2^b);
    
    printf("\nResult of bitwise RIGHT SHIFT=%d",a>>b);//output=a/(2^b);
    return 0;
}

