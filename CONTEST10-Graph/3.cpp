#include <bits/stdc++.h> 
  
using namespace std; 
  
 int V; 
  
bool isBipartiteUtil(vector<int> G[], int src, int colorArr[]) 
{ 
    colorArr[src] = 1; 
  
    queue <int> q; 
    q.push(src); 
  
    while (!q.empty()) 
    { 
        int u = q.front(); 
        q.pop(); 
  
        if (G[u][u] == 1) 
        return false;  
  
        for (int v = 0; v < V; ++v) 
        { 
            //color 1 và 0
            if (G[u][v] && colorArr[v] == -1) 
            { 
                colorArr[v] = 1 - colorArr[u]; 
                q.push(v); 
            } 
  
            else if (G[u][v] && colorArr[v] == colorArr[u]) 
                return false; 
        } 
    } 
  
    return true; 
} 
  
bool isBipartite(vector<int> G[]) 
{ 
    int colorArr[V]; 
    for (int i = 0; i < V; ++i) 
        colorArr[i] = -1; 
  
    for (int i = 0; i < V; i++) 
    if (colorArr[i] == -1) 
        if (isBipartiteUtil(G, i, colorArr) == false) 
        return false; 
  
    return true; 
}
int main() 
{ 
    int t;cin>>t;
    while(t--){
        int canh; cin>>V>>canh;
        vector<int> G[V]; for(int i=0;i<V;i++){
            G[i].resize(V);
        }
        for(int i=0;i<canh;i++){
            int temp1, temp2; cin>>temp1>>temp2;
            G[temp1-1][temp2-1]=1;
            G[temp2-1][temp1-1]=1;
        }
        isBipartite(G) ? cout << "YES" : cout << "NO"; 
        cout<<endl;
    }
  
    return 0; 
} 