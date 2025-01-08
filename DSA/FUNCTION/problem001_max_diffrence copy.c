#include<stdio.h>
int maxdiffrence(int*,int );
int main(){
    int a[]={2,3,10,6,4,8,1};
    int b=7;
    int c=maxdiffrence(a,b);
    printf("%d",c);
}
int maxdiffrence(int a[],int b){
    int res=a[1]-a[0];
    int min=a[0];
    for(int i=1;i<b;i++){
        if((a[i]-min)>res)
          res=a[i]-min;
        if(a[i]<min)
          min=a[i]  ;
    }
      
return res;
}