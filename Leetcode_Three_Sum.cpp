class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> Res;
        std::sort(nums.begin(),nums.end());
        int front,back,sum,i;
        for(i=0;i<nums.size();i++)
        {
            front = i+1;
            back = nums.size()-1;
            while(front<back)
            {
            sum = nums[front]+nums[i]+nums[back];
            if(sum>0)
            {
                back--;
            }
            else if(sum<0)
            {
                front++;
            }
            else
            {
                vector<int> triple(3,0);
                triple[0] = nums[i];
                triple[1] = nums[front];
                triple[2] = nums[back];
                Res.push_back(triple);
                while(front<back && nums[front]==triple[1])
                    front++;
                while(front<back && nums[back]==triple[2])
                    back--;
            }
        }
        while(i+1<nums.size() && nums[i+1]==nums[i])
            i++;
    }
    return Res;
    }
};
