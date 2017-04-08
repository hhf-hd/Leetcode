class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()==0)
        {
            return 0;
        }
        int Flag=2;
        int i,j,k;
        for(i=0;i<haystack.length();i++)
        {
            if(haystack[i]==needle[0])
            {
                if(i+needle.length()>haystack.length())
                {
                    Flag=0;
                    break;
                }
                else
                {
                    for(j=0;j<needle.length();j++)
                    {
                        if(haystack[i+j]!=needle[j])
                        {
                            Flag=0;
                            break;
                        }
                        else
                        {
                            Flag=1;
                        }
                        cout<<"Flag is "<<Flag;
                    }
                }
            }
            if(Flag==1)
            {
                return i;
            }
        }
        return -1;
    }
};
