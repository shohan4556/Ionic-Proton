#include<bits/stdc++.h>
using namespace std;

vector <int> graph[100];
int parent[100];

void find_path(int start,int end,int par[]){
    if(start==end || end==-1){
        cout<<start<<endl;
    }
    else{
        find_path(start,par[end],par);
        cout<<"->"<<end;
    }
}

void BFS(int n,int src)  // nodes,source-vertex
{
    queue <int> Q;
    Q.push(src);
    int visited[100] = {0}, level[100];


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

  		cout<<"input the numbers of nodes and edges of the Graph"<<endl;
  
        cin>>nodes;
        cin>>edges;
		
  cout<<"input the vertices like : X to Y"<<endl;
  			
        for(int i=0;i<edges;i++){
                cin>>x>>y;
                graph[x].push_back(y);
        }

        cout<<"Enter source vertex : ";
        cin>>src;

            BFS(nodes,src);

            cout<<"Enter starting vertex and Ending vertex"<<endl;
            cin>>x>>y;

            find_path(x,y,parent);

    return 0;
}
