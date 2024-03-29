class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,mid=0,high=nums.size()-1;
        while(low <= high){
            mid = (low+high)/2;
            if(target>nums[mid]) low = mid+1;
            else high=mid-1;
        }
        return low;
    }
};