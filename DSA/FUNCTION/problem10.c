#include <stdio.h>
int main()
{
    int a, b, c=1 , i;
    scanf("%d", &a);
    scanf("%d", &b);
    for (i = 2; i<= b;i++ )
    {
        if (a % i == 0)
        {
           
        for (b = 2; b < a; b++)
        {
            if (a % b == 0)
            {
                c = 0;
            }
        }
        if (c)
            printf("prime");
        else
            printf(" not prime");
    }
        }
    
        
        printf("%d\n", a);
    }
