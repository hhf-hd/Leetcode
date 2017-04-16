#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
	int i,j,k;
        for(size_t n=1;n<nums.size();n++)
	{
		for(i=0;i<n;i++)
		{
			if(nums[i]==nums[n])
			{
				cout<<" n is  i is "<<n<<"  "<<i<<endl;
					
				for(k=n+1;k<nums.size()-1;k++)
				{
					nums[k-1]=nums[k];
				}
				for(size_t n=0;n<nums.size();n++)
				{
					cout<<"  "<<nums[n];
				}
            		}
		}
	}
	for(size_t n=0;n<nums.size();n++)
	{
		cout<<"  "<<nums[n];
	}
        return nums.size();
    }
};

int main()

{

	Solution S;
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(3);
	nums.push_back(3);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(2);
	cout<<S.removeDuplicates(nums)<<endl;
	return 0;
}
	
