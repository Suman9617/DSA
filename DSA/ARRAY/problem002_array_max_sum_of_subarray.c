#include <stdio.h>
int maxsum(int *, int);
int main()
{
    int a[] = {-2,-1,4,-1,-2,1,5,-3};
    int b = 8;
    int c = maxsum(a, b);
    printf("%d", c);
}
int maxsum(int a[], int b)
{
    int max = -100000, sum;
    for (int i = 0; i < b; i++)
    {
        sum = sum + a[i];
        if (max < sum)
            max = sum;
        if (sum < 0)
            sum = 0;
    }
    return max;
}
