class Solution {
    void dfs(vector<vector<int>>& rooms,vector<int>&vis,int node)
         {
             vis[node]=true;
             for(auto it:rooms[node])
             {
                 if(!vis[it])
                     dfs(rooms,vis,it);
             }
         }
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int>vis(n,false);
        dfs(rooms,vis,0);
        for(int i=0;i<vis.size();i++)
        {
            if(vis[i]==false)return false;
        }
        return true;
    }
};
