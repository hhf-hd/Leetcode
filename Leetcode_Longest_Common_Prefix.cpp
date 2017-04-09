class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix;
        int len=0;
        int i=0,j;
        if(strs.size()==0)
        {
            return "";
        }
        prefix=strs[0];
        for(i=0;i<strs.size();i++)
        {
            if(prefix.size()==0||strs[i].size()==0)
            {
                return "";
            }
            int len=(prefix.size()<strs[i].size())?prefix.size():strs[i].size();
            for(j=0;j<len;j++)
            {
                if(strs[i][j]!=prefix[j])
                break;
            }
            prefix=strs[i].substr(0,j);
        }
        return prefix;
    }
};
