#include<stdio.h>
#include<stdlib.h>
void setZeroes(int **matrix, int matrixSize, int* matrixColSize) {
   int row[matrixSize],col[*matrixColSize];
   for(int i=0;i<matrixSize;i++){
       row[i]=0;
   }
    for(int i=0;i<*matrixColSize;i++){
       col[i]=0;
   }
   for(int i=0;i<matrixSize;i++)
   {
     for(int j=0;j<*matrixColSize;j++)
     {   if(matrix[i][j]==0) 
         {
            row[i]=1;
            col[j]=1;
         }

     }
   }
   for(int i=0;i<matrixSize;i++)
   {
     for(int j=0;j<*matrixColSize;j++)
     {   if(row[i]==1||col[j]==1) 
         {
          matrix[i][j]=0;
         }

     }
   }
  
}
int main(){
   int n,m,res;
   scanf("%d%d",&n,&m);
   int **arr = (int **)malloc(n * sizeof(int *));
   for (int i = 0; i < n; i++) {
       arr[i] = (int *)malloc(m * sizeof(int));
   }
   for(int i=0;i<n;i++){
     for(int j=0;j<m;j++) 
      {
        scanf("%d",&arr[i][j]);
      }
   } 
  setZeroes(arr,n,&m);
 for(int i=0;i<n;i++){
     for(int j=0;j<m;j++) 
      {
        printf("%d\t",arr[i][j]);
      }
      printf("\n");
   } 
   free(arr);
  return 0;
}