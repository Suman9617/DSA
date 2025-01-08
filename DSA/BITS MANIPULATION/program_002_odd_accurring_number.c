//single odd accurring number in array
#include <stdio.h>
int main()
{
    int arr[20];
    int xor = 0;
    printf("enter array element\n");
    for (int i; i < 9; i++)
    {
        scanf("%d", &arr[i]);
        xor = xor^arr[i];
    }
    printf(" the num is:%d\n", xor);

    return 0;
}