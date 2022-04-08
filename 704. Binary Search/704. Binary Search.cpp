int search(int* nums, int numsSize, int target)
{
    int x=1;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==target)
        {
            return i;
            x=0;
        }
    }
    if(x==1)
    {
        return -1;
    }
    return 0;
}
