int missingNumber(int* nums, int numsSize) {
    int hash[numsSize+1];

    for (int i = 0; i <= numsSize; i++) 
    {
    hash[i] = 0;
    }
    for(int i=0; i<numsSize; i++)
    {
        hash[nums[i]]=1;
    }
    for(int i=0; i<=numsSize; i++)
    {
        if(hash[i]==0)
        return i;
    }
    return 1;
}