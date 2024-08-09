//Simple Reccursive Approach

class Solution {
  public:
    void solve(int v, unordered_map<int,bool> &visited, vector<int> &ans, vector<int> adj[]) {
    visited[v] = true;
    ans.push_back(v);
    
    for(auto neig : adj[v]) 
    {
        if (!visited[neig])
        solve(neig, visited, ans, adj);
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    unordered_map<int,bool> visited;
    vector<int> ans;
    
    for (int i = 0; i < V; ++i)
        visited[i] = false;
    
    for(int i=0;i<V;i++)
    {
        if(!visited[i])
        solve(i, visited, ans, adj);
    }
    
    return ans;
}

};