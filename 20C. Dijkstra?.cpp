#include<bits/stdc++.h>
#define nax 1000001
#define ll long long int 
using namespace std;
typedef pair<int,int> p;
const long long int INF = 100000000000;

vector<vector<ll> >graph(nax,vector<ll>());
vector<vector<ll> >cost(nax,vector<ll>());
vector<ll>dis(nax);
vector<ll>parent(nax);
bool visit[nax] = {};

void g_clear()
{
    for(ll i=0; i<nax; i++){
        graph[i].clear();
        cost[i].clear();
    }
}

void dijkstra(ll n,ll src)
{
    for(ll i=0; i<nax; i++) dis[i] = INF; 
    
    dis[src] = 0;
    parent[src] = -1;
    
    priority_queue<p> q;
    q.push({src,0});
    
    while(!q.empty()){
        ll s = q.top().first;
        ll d = q.top().second;
        
        q.pop();
        
        for(ll i=0; i<graph[s].size(); i++){
            ll node = graph[s][i];
            
            if(dis[s] + cost[s][i] < dis[node]){
                dis[node] = dis[s] + cost[s][i];
                parent[node] = s;
                q.push({node,dis[node]});
            }
        }
    }
}

int main()
{
        g_clear();
       
        ll n,m;
        cin>>n>>m;
        
        for(ll i=0; i<m; i++){
            ll u,v,c;
            cin>>u>>v>>c;
            
            graph[u].push_back(v);
            graph[v].push_back(u);
            
            cost[u].push_back(c);
            cost[v].push_back(c);
        }
        vector<ll>path;
        
        dijkstra(n,1);

        if(dis[n]==INF){
             cout<<"-1"<<endl;
        }
        else{
            for(ll i = n; i != -1; i = parent[i]) path.push_back(i);
            
            for(ll i = path.size()-1; i >=0; i--) cout<<path[i]<<" ";
            cout<<endl;
        }
     
    return 0;
}
