//Simple Approach
class Solution {
  public:
    bool isCyclic(int src,unordered_map<int,bool> &visited,vector<int> adj[])
    {
        unordered_map<int,int> parent;
        
        parent[src] = -1;
        visited[src] = 1;
        
        queue<int> q;
        q.push(src);
        
        while(!q.empty())
        {
            int front = q.front();
            q.pop();
            
            for(auto neig : adj[front])
            {
                if(visited[neig] && parent[front] != neig)
                {
                    return true;
                }
                else if(!visited[neig])
                {
                    visited[neig] = 1;
                    parent[neig] = front;
                    q.push(neig);
                }
            }
        }
        return false;
    }
    bool isCycle(int v, vector<int> adj[]) 
    {
        unordered_map<int,bool> visited;
        
        for(int i=0;i<v;i++)
        {
            if(!visited[i])
            {
                if(isCyclic(i,visited,adj))
                return 1;
            }
        }
        return 0;
    }
};