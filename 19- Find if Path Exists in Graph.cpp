class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>> connections;
        for(auto x: edges) {
            connections[x[0]].push_back(x[1]);            
            connections[x[1]].push_back(x[0]);
        }
        unordered_map<int, bool> visited;
        queue<int> nextvertex;
        nextvertex.push(source);
        while(nextvertex.size()){
            int current = nextvertex.front();
            if(!visited[current]){
                if(current==destination) return true;
                visited[current] = true;
                for(int x: connections[current]) nextvertex.push(x);
            }
            nextvertex.pop();
        }
        return false;
    }
};
