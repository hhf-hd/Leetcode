class Solution {
public:
    int maxArea(vector<int>& height) {
        int len=height.size();
        if(len<2)
        return 0;
        int p,q,max=0,wid;
        p=0;
        q=len-1;
        while(p<=q)
        {
            wid=(height[p]>height[q])?height[q]:height[p];
            max=(max>wid*(q-p))?max:wid*(q-p);
            if(height[q]>height[p])
            {
                p++;
            }
            else
            {
                q--;
            }
        }
        return max;
    }
};
