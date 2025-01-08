//find the double odd occurring int the given array
#include<stdio.h>
int main(){
    int n,xor=0,res1=0,res2=0;
    printf("enter the length\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        xor^=arr[i];
    }
    xor=xor&(~(xor-1));
    for(int i=0;i<n;i++)
    {  int x;
       x=xor&arr[i];
       if(x==0){
        res1=res1^arr[i];
       }
        if(x==1){
        res2=res2^arr[i];
       }

    }
    printf("%d\t%d\t",res1,res2);
    return 0;
}