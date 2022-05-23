There are basically three type of problems are there:-
  1. Print the Pascal's Triangle simply (it's a implementation question)
  2. Print any number from the Pascal's Triangle like what will be row 5 column 2 number is  So here we use nCr formula to calculate it
  3. print any row of it
  
  Sol 1:->  Pascal's Triangle
class Solution {
	public:
		vector<vector<int>> generate(int numRows) {
			vector<vector<int>> ans;

			for(int i=0; i<numRows; i++) {
				vector<int>row(i+1,1);
				for(int j=1; j<i; j++) {
					row[j]=ans[i-1][j]+ans[i-1][j-1];
				}
				ans.push_back(row);
			}

			return ans;
		}
};

Sol 2:->

    
