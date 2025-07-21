void reverse(int* start, int* end)
{
    end--;
    while(start<end)
    {
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}

void rotate(int* nums, int numsSize, int k) {

    if(numsSize == 0 || k == 0) return;

    k= k % numsSize;

    reverse(nums, nums+numsSize);
    reverse(nums,nums+k);
    reverse(nums+k, nums+numsSize);
}