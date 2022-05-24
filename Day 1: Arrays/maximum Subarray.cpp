1.Brute force O(n^2)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
          int mx=0,sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                mx=max(mx,sum);
            }
        }
        return mx;
    }
};

2.Optimal using Kardane Algo.
  class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            
            sum=max(nums[i],sum+nums[i]);
            maxi=max(maxi,sum);
            
                
        }
        return maxi;
    }
};
