#include <stdio.h>  
int main()  
{  
    int i, j,rows; 
    printf (" Enter a number to define the rows: \n");  
    scanf ("%d", &rows);   
    printf("\n");    
    for ( i = 1; i<=5; i++)  
    {     
        for ( j = 1; j <= i; j++)  
        {  
            printf ("* "); // print the space  
        }  
        printf ("\n");  
    }  
    return 0;  
}  
