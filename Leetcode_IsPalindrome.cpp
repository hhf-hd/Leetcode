#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long long res=0;
	int q=x;
        while(x)
        {
            res=res*10+x%10;
            x=x/10;
        }
        cout<<res<<endl;
        if(res==q)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()

{
	Solution S;
	cout<<S.isPalindrome(1);
	return 0;

}
