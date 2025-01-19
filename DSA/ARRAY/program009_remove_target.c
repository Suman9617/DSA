void swap(int *x,int *y){
    int team;
    team=*x;
    *x=*y;
    *y=team;
}
int removeElement(int* nums, int numsSize, int val) {
   int count=0;
    for(int i=0,j=numsSize-1;i<j;){
       if(nums[i]!=val){
        i++;
        continue;
       } 
        if(nums[j]==val){
        j--;
       }   
      if(nums[i]==val&&nums[j]!=val)
          {
            swap(&nums[i],&nums[j]);
            j--;
            i++;
          }
      
      
        
   }
   for(int i=0;i<numsSize;i++){
        if(nums[i]!=val){
            count++;
        }
   } 
  
   return count;
}
