class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty())
        return "";
        if(s.size()==1)
        return s;
        int Len=s.length();
        int i,j,k,Flag=0;
        for(Len;Len>1;Len--)
        {
            for(i=0;i+Len<=s.length();i++)
            {
                j=i+Len-1;
                k=i;
                for(;k<=j;k++,j--)
                {
                    if(s[j]!=s[k])
                    {
                        Flag=0;
                        break;
                    }
                    else
                    {
                        Flag=1;
                    }
                }
                if(Flag==1)
                {
                    return s.substr(i,Len);
                }
                
            }
        }
        return s.substr(0,1);
    }
};
