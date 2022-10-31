class Solution {
public:
    vector<int> goodIndices(vector<int>& nums, int k) {
        vector<int> v,v2;
        set<int> v1;
        int a,b,c,d=1,e=1;
        if(k==1)
        {
            for(a=1;a<nums.size()-1;a++)
                v.push_back(a);
            return v;
        }
        for(a=0;a<nums.size()-1;a++)
        {
            if(nums[a]>=nums[a+1])
            {
                e++;
            }
            else
            {
                e=1;
            }
            if(e>=k)
                v.push_back(a+2);
            if(nums[nums.size()-1-a]>=nums[nums.size()-2-a])
            {
                d++;
            }
            else
            {
                d=1;
            }
            if(d>=k)
                v1.insert(nums.size()-3-a);
        }
        for(a=0;a<v.size();a++)
        {
            b=v1.size();
            v1.insert(v[a]);
            if(b==v1.size())
                v2.push_back(v[a]);
        }
        return v2;
    }
};
