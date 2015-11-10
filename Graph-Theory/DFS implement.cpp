#include<bits/stdc++.h>
using namespace std;
#define MAX 10

vector <int> graph[MAX];
int visited[MAX] = {0};

// n -  number of vertices
// src - starting vertex
void DFS(int src){
        stack<int> S;
        S.push(src);
        visited[src] = 1;

        while(!S.empty()){
            int u = S.top();
            S.pop();

            for(int i=0;i<graph[u].size();i++){
                int v = graph[u][i];
                if(!visited[v]){
                    S.push(v);
                    visited[v] = 1;
                    cout<<v<<endl;
                }
            }

        }

}

int main()
{
    int nodes,edges,x,y;

    cin>>nodes>>edges; // num of nodes & edges

    for(int i=0;i<edges;i++){
        cin>>x>>y;
        graph[x].push_back(y);
    }

        int src;
        cin>>src;
        DFS(src);

    return 0;
}
