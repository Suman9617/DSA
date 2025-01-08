// find missing number from nth term;
#include <stdio.h>
int main()
{
     int n, res = 0, xor = 0;
     printf("Enter a number:\n");
     scanf("%d", &n);
     int arr[n];
 for (int i = 0; i < n; i++)
     {
         scanf("%d", &arr[i]);
     }
  for (int i = 1; i <= n - 1; i++)
       {
          res = res ^ i;
          xor = xor^arr[i - 1];
      }
  res = res ^ n;
  printf("missing number is:%d\n", res ^ xor);

  return 0;
}