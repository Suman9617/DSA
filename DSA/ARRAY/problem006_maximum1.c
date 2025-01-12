#include <stdio.h>
void maximun1(int *, int);
int main()
{   int a[10]={1,1,0,1,1,1,1,0,1,1};
    ;
    int b = 10;
    maximun1(a, b);
}
void maximun1(int a[], int c)
{
    int i, b = 0, count = 0;
    for (i = 0; i <c; i++)
    {
        if (a[i]==0)
        {
            if (b < count)
                b = count;
                count = -1;
        }
        count++;
    }
    if (b < count)
        b = count;
    printf("%d\t", b);
}
