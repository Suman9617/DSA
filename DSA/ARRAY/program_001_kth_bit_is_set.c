#include<stdio.h>
int main(){
    int n,k,x;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("enter the bit\n");
    scanf("%d",&k);
     x=1<<(k-1);
     if(n&x){
        printf("set");
     }
     else{
        printf("not set");
     }

    return 0;
}