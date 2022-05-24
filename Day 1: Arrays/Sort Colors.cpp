sol 1. sort the array O(nlogn)
sol 2. counting sort (simply count the zero ,one,two) and run a loop Time O(n) Space O(n)
sol 3. 
  class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,mid=0,high=nums.size()-1;
         while(mid<high){
             if(nums[mid]==0)
             {
                 swap(nums[mid],nums[low]);
                  mid++;
                  low++;
             }
             else if(nums[mid]==1)
             {
                 mid++;
             }
             else if(nums[mid]==2){
                 swap(nums[mid],nums[high]);
                 // mid++;
                 high--;
             }
         }
    }
};
