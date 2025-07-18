bool check(int* nums, int numsSize) {
    int count=0;
    for(int i=0;i<numsSize;i++) {
        int next=(i+1) % numsSize;
        if (nums[i] > nums[next]) {
            count++;
            if(count>1) return false;
        }
    }
    return true;
}