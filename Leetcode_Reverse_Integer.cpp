#include<iostream>
#include<math.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int Flag=0;
        int i,k;
	int temp=x;
	int len=0;
        int res=0;
        if(x<0)
        {
            Flag=1;
            x=0-x;
        }
	for(len=0;temp!=0;len++)
		temp=temp/10;
        while(x!=0)
        {
            k=x%10;
            res=res+k*pow(10,len-1);
            len--;
            x=x/10;
        }
        if(Flag==1)
        {
            res=0-res;
        }
        return res;
    }
};

int main()
{

	Solution S;
 	cout<<S.reverse(1000);
	return 0;
}


