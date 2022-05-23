// Brute force solution
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       for(int i=0;i<matrix.size();i++)
       {
           for(int j=0;j<matrix[0].size();j++)
           {
               if(matrix[i][j]==0)
               {
                   for(int k=0;k<matrix.size();k++)
                   {
                       
                       if(matrix[k][j]!=0){ 
                       matrix[k][j]='a';
                       }
                   }
                   for(int k=0;k<matrix[0].size();k++)
                   {
                       if(matrix[i][k]!=0){ 
                       matrix[i][k]='a';}
                   }
               }
           }
       }
         for(int i=0;i<matrix.size();i++)
       {
           for(int j=0;j<matrix[0].size();j++)
           {
               if(matrix[i][j]=='a')
               {
                   matrix[i][j]=0;
               }
           }
         }
        // return matrix;
    }
};

// More optimal using the two dummy array 
// time complexity:O(N*M + N*M)
// space complexity:O(N)+O(M)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int>rowwise(row,-1);
        vector<int>colwise(col,-1);
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==0)
                {
                    rowwise[i]=0;
                    colwise[j]=0;
                }
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(rowwise[i]==0 || colwise[j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
};
3->Most optimal
// time complexity:O(N*M + N*M)
// space complexity:O(1)
class Solution {
	public:
		void setZeroes(vector<vector<int>>& matrix) {
			int row=matrix.size();
			int col=matrix[0].size();
			bool column=true;
			for(int i=0; i<row; i++) {
				if(matrix[i][0]==0)
					column=false;
				for(int j=1; j<col; j++) {
					if(matrix[i][j]==0) {
						matrix[0][j]=0;
						matrix[i][0]=0;
					}
				}
			}
			// traverse from the back side
			for(int i=row-1; i>=0; i--) {
				for(int j=col-1; j>=1; j--) {
					if(matrix[i][0]==0 || matrix[0][j]==0) {
						matrix[i][j]=0;

					}

				}
				if(column==false)
					matrix[i][0]=0;
			}
		}
};
