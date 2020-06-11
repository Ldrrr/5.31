int maxProduct(int* nums, int numsSize)
{
    int max1=0,max2=0,i;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]>max1)
        {
            max2=max1;
            max1=nums[i];
        }
        else if(nums[i]>max2)
        {
            max2=nums[i];
        }
    }
    return (max1-1)*(max2-1);
}
