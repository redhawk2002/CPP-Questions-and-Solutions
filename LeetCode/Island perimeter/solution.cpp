//https://leetcode.com/problems/island-perimeter/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int result=0;
        int row = grid.size(), col = grid[0].size(); // row and column
        if(row==0 || col==0)
            return 0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==1)
                {
                /*  if we go out of the box or there is water,  then only we can found perimeter */
                    result+=4;
                    if(j>0 && grid[i][j-1]==1)   // chek if has left block
                    {
                        result=result-2;
                    }
                        
                    if(i>0 && grid[i-1][j]==1)  // check if it has up block
                    {
                        result=result-2;
                    }
                        
                }
            }
        }
        return result;
    }
};

