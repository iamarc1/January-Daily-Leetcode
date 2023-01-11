class Solution {
public:
    vector<vector<int>> graph;
    bool dfs(int node,int parent,int &ans,vector<bool>& hasApple){
        bool apple=false;
        for(auto &i: graph[node]){
            if(i!=parent){
                if(dfs(i,node,ans,hasApple)){
                    ans+=2;
                    apple=true;
                }
            }
        }
        return apple || hasApple[node];
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        graph.resize(n,vector<int>{});
        for(int i=0; i<edges.size(); i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        int ans=0;
        dfs(0,-1,ans,hasApple);
        return ans;
    }
};
