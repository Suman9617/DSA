//bit manipulation check bit are set or not in k^th place
#include <stdio.h>
    int bitset(int x, int y)
  {

       return x & (1 << (y - 1));
  }
int main()
    {
    int n, k, p;
    printf("enter a number\n");
    scanf("%d", &n);
    printf("enter bit position :\n");
    scanf("%d", &k);
    p = bitset(n, k);
    if (p != 0)
        printf("set");
    else
        printf("not set");

    return 0;
}