class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int a=1,b=1,c=1,d=nums[0];
        for(a=0;a<nums.size()-1;a++)
        {
            if(nums[a+1]>=d)
            {
                if(nums[a]==nums[a+1])
                    b++;
                else if(nums[a+1]>d)
                {
                    c=1;
                    b=1;
                    d=nums[a+1];
                }
                else
                {
                    c=max(b,c);
                    b=1;
                }
            }
            
        }
        return max(c,b);
    }
};
