int trap(int* height, int heightSize) 
{  
    int left[heightSize];
  int right[heightSize];
  int i=0,j=heightSize-1;
  int rightmax=height[j];
  int leftmax=height[i];
  int res=0;
  while(i<heightSize)
    {  if(height[i]>leftmax)
            {
            leftmax=height[i];
            }
        left[i]=leftmax;
        i++;}
   while(j>=0)
    {    if(height[j]>rightmax)
            {
               rightmax=height[j];
            }
        right[j]=rightmax;
        j--;
    }
    for(i=0;i<heightSize;i++)
        {
          if(left[i]>=right[i])
            {
                res=res+(right[i]-height[i]);
            }
          if(left[i]<right[i])
            {
                res=res+(left[i]-height[i]);
            }
        }return res;
    
}