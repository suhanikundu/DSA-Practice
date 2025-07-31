int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int maxi=0;
    int cnt=0;
    for(int i=0; i<numsSize; i++)
    {
        if(nums[i] == 1)
        {
            cnt++;
            if(maxi<cnt){
            maxi = cnt;
            }
        } else {
            cnt=0;
        }
    }
    return maxi;
}