class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        std::sort(nums.begin(),nums.end());
        int Len = nums.size();
        if(Len==1)
            return nums[0];
        if(Len==2)
            return nums[0]+nums[1];
        if(Len==3)
            return nums[0]+nums[1]+nums[2];
        int front,back,i,Res,sum;
        Res = nums[0]+nums[1]+nums[2];
        for(i=0;i<Len-2;i++)
        {
            front=i+1;
            back=Len-1;
            while(front<back)
            { 
            sum=nums[i]+nums[front]+nums[back];
            if(sum ==target)
                return target;
            if(abs(Res-target)>abs(sum-target))
            {
                Res=sum;
            }
            else
            {
                sum>target?back--:front++;
            }
            }
        }
        return Res;
    }
};
