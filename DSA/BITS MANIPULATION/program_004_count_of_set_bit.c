//count number of set bit
#include<stdio.h>
int setbit(int n){
    int count=0;
   while(n>0){
    n=n&(n-1);
   count++; 
   }
   return count;
}
int main(){
    int n;
    printf("enter a number;\n");
    scanf("%d",&n);
    int a;
    a=setbit(n);
    printf("%d",a);
   
}