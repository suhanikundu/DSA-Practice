#include <vector>
using namespace std;
class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        //your code goes here
        int n;
        for(int i=0; i<n; i++)
        {
            if(nums[i] == target)
            {
                return i;
            }
        }
        return -1;
    }
};