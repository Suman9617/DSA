#include <stdio.h>
int maxsum(int *, int);
int main()
{
    int a[] = {10,20,30,40,10,10,10,10};
    int b = 8;
    int c = maxsum(a, b);
    if(c!=-1) 
     printf("%d", c);
     else 
     printf("no majority");
}
int maxsum(int a[], int b)
{
    int count=1, sum=0;
    for (int i = 0; i < b; i++)
    {   for(int j=0;j<b;j++)
           count++;
           if(count>b/2)
             return a[i];
        
    }
    return 1;
}
