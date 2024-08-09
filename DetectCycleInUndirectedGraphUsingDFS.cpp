//Simple Approach
class Solution {
  public: 
    bool isCyclicDFS(int src,int parent,unordered_map<int,bool> &visited,vector<int> adj[])
    {
        
        visited[src] = true;
        
        for(auto neig : adj[src])
        {
            if(!visited[neig])
            {
                if(isCyclicDFS(neig,src,visited,adj))
                return true;
            }
            else if(neig != parent)
            {
               return true; 
            }
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        unordered_map<int,bool> visited;
        
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                if(isCyclicDFS(i,-1,visited,adj))
                return 1;
            }
        } 
        return 0;
    }
};