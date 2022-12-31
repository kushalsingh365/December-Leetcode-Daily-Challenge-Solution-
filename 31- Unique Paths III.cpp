class Solution {
public:
    bool isSafe(vector<vector<int>> &grid, vector<vector<int>> &varr, int i, int j) {
        if(i<0||j<0)return false;
        if(i>=grid.size()) {
            return false;
        }
        if(j>=grid[0].size()) {
            return false;
        }
        if(grid[i][j]==-1) {
            return false;
        }
        if(varr[i][j]==1) {
            return false;
        }
        return true;
    }
    
    
    
    void start(int &i, int &j,vector<vector<int>>&grid) 

    {

         for(i=0;i<grid.size();i++)

         {

             for(j=0;j<grid[0].size();j++)

             {

                 if(grid[i][j]==1)return;

             }

         }

    }
    
    
    int helper(vector<vector<int>>& grid,vector<vector<int>> &varr,int i,int j,int count,int &tcount){
        int sum=0;
        if(grid[i][j]==2){
            if(count-1==tcount){
                return 1;
            }
            else{
                return 0;
            }
        }
        varr[i][j]=1;
       if(isSafe(grid, varr,i,j+1)) {
            sum+=helper(grid, varr, i, j+1,count+1,tcount);
        }
        if(isSafe(grid, varr, i,j-1)) {
            sum+= helper(grid, varr, i, j-1,count+1,tcount);
        }
        if(isSafe(grid, varr, i+1,j)) {
            sum+= helper(grid, varr, i+1, j,count+1,tcount);
        }
        if(isSafe(grid, varr, i-1, j)) {
            sum+= helper(grid, varr,i-1, j,count+1,tcount);
        }
        varr[i][j]=0;
        return sum;
        
    }
     
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> varr(m, vector<int>(n,0));
        int i(0);int j(0);
        int sum(0);
        int count(0);
        int tcount(0);
        for(int k=0;k<varr.size();k++){
            for(int l=0;l<varr[0].size();l++){
                if(grid[k][l]==0){
                    tcount++;
                }
            }
        }
        start(i,j,grid);
       return  helper(grid,varr,i,j,count,tcount);
        
        
    }
};
