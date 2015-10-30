#include<bits/stdc++.h>
using namespace std;

vector <int> graph[100];

void BFS(int n,int src)
{
    queue <int> Q;
    Q.push(src);
    int visited[100] = {0}, level[100];
    int parent[100];

    visited[src] = 0;
    level[src] = 0;

    while(!Q.empty()){
        int u = Q.front();
            for(int i=0;i<graph[u].size();i++){
                int v = graph[u][i];
                if(!visited[v]){
                    level[v] = level[u]+1;
                    parent[v] = u;
                    visited[v] = 1;
                    Q.push(v);
                }
            }

            Q.pop();
    }

        for(int i=1;i<=n;i++){
            printf("%d to %d distance %d\n",src,i,level[i]);
        }
}

int main()
{
        int nodes,edges,x,y,src;

        cin>>nodes;
        cin>>edges;

        for(int i=1;i<=edges;i++){
                cin>>x>>y;
                graph[x].push_back(y);
        }

        cout<<"Enter source vertex : ";
        cin>>src;

            BFS(nodes,src);


    return 0;
}
