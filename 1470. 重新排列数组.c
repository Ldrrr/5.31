int* shuffle(int* nums, int numsSize, int n, int* returnSize)
{
    int *s=(int *)malloc(sizeof(int)*2*n);
    int i,k=0;
    for(i=0;i<n;i++)
    {
        s[k++]=nums[i];
        s[k++]=nums[n+i];
    }
    * returnSize=2*n;
    return s;
}
