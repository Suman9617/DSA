// check the number is exact power of 2 yes of no;
#include<stdio.h>
int check(int n){
    return n&(n-1);
}
int main(){
    int n;
    printf("enter a number;\n");
    scanf("%d",&n);
    int a;
    a=check(n);
    if(a==0)
     printf("yes");
    else 
     printf("no");
}