#include<iostream>
#include<string>

using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
	int Len = s.length();
	int Const_Len=Len;
	int Flag=0;
	int i,j,k;
	while(Len>0)
	{
		for(i=0;i<Const_Len-Len+1;i++)
		{
			for(j=i;j<Len+i;j++)
			{
				
				for(k=j+1;k<Len+i;k++)
				{
					if(s[j]==s[k])		
					{	
						Flag=1;
						break;
					}
					else
					{	
						Flag=0;
					}
				}
				if(Flag==1)
				{
					break;
				}
				
			}
			if(Flag==0)
			{
				break;
			}
		}
		if(Flag==1)
		{
			Len--;
		}	
		else
		{
			break;
		}	

	}
	cout<<Len;
	return 0;
    }
};

int main()

{
	Solution S;
	std::string string("thhisabb");
	S.lengthOfLongestSubstring(string);
	return 0;
}
