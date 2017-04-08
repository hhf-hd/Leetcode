class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i,k;
        k=nums.size();
        if(nums[k-1]<target)
        {
            return k;
        }
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==target||nums[i]>target)
            {
                return i;
            }
            
        }
        return 0;
    }
};
