#include <stdio.h>
int maxsum(int *, int);
int main()
{
    int a[] = {10,12,13,14,15,16,17,19};
    int b = 8;
    int c = maxsum(a, b);
    printf("%d", c);
}
int maxsum(int a[], int b)
{
    int count=1, sum=0;
    for (int i = 0; i < b; i++)
    {    if((a[i+1]-a[i])%2==1)
           count++;
          else
           {if(sum<count)
               sum=count;
             count=1; }
        
    }
    return sum;
}
