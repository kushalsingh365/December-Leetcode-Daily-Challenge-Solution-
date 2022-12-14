class Solution {
public:
    vector<int> tmp;
    vector<vector<int>> ans;
    int target;
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        target = graph.size()-1;
        dfs(graph);
        return ans;
    }
    
    void dfs(vector<vector<int>> &graph, int curNode = 0){
        tmp.push_back(curNode);
        
        if(curNode == target) ans.push_back(tmp);
        else 
            for(auto node: graph[curNode])
                dfs(graph, node);
        
        tmp.pop_back();
    }
};
