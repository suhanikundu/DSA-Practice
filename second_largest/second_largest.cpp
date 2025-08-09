class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int large=nums[0];
        int slarge=-1;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]>large)
            {
                slarge=large;
                large=nums[i];
            }
            else if(nums[i]<large && nums[i]>slarge)
            {
                slarge=nums[i];
            }
        }
        return slarge;
    }
};