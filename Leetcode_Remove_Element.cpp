class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i,j,k;
        k=nums.size();
        for(i=0;i<k;i++)
        {
            if(nums[i]==val)
            {
                cout<<"i is "<<i;
                for(j=i+1;j<nums.size();j++)
                {
                    nums[j-1]=nums[j];
                }
                k=k-1;
                i--;
            }
        }
        cout<<" k is "<<k;
        return k;
    }
};
