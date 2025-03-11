#include<stdio.h>
int xor1(int n){
    int a;
    a=a%4;
    if(a==0)
    return n;
    else if(a==1)
    return 1;
    else if(a==2)
    return n+1;
    else if(a==3)
    return 0; 
  return -1;      
}
int findxor(int x,int y){
    return xor1(x-1)^xor1(y);
}

int main(){
    int x,y,res;
    printf("enter the number\n");
    scanf("%d%d",&x,&y);
   res=findxor(x,y);
   printf("%d",res);
    

    return 0;
}// 4 to  8