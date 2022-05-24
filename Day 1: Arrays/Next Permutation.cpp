1.Brute force approach
In this approach i simply use the C++ inbuit function next_permutation

Time Complexity:O(n)
  
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       next_permutation(nums.begin(),nums.end());
    }
};


2. Optimal Aprroach
Algorithm:
1.  Find the index arr[i] < arr[i+1]  and strore in index1
2.  then find such a index2 which is greater than index1 arr[index1]<arr[index2]
3.  swap them swap (arr[index1],arr[index2])
4.  and then we have to make the rest element as small as we can so we reverse it reverse(index1+1 ->last of arr)
  
 Intitution Behind the algo:-
   Just See the dictionary structure and we can see the break points are there as 
   Example: 1 3 5 4 2
      
          5  
       3      4
     1           2 
    
    As We can See in the above fig ,So we have to find the breaking point 
    
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(),i,j;
        
        for(i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            { 
                break;
            }
        }
       if(i<0)
       {
           reverse(nums.begin(),nums.end());
       }
    else{
        for( j=n-1;j>i;j--)
        {
            if(nums[j]>nums[i])
            {
                break;
            }
        }
        swap(nums[i],nums[j]);
        reverse(nums.begin()+i+1,nums.end());
    }
        
    }
};
     
