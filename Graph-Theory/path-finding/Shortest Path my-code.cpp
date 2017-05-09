#include<bits/stdc++.h>
using namespace std;
#define MAX 100
#define infinity 10000000

vector<int> edge[MAX];
vector<int> cost[MAX];
int parent[100];

/*
input
4 6

0 3 1
3 0 3
3 1 2
1 0 5
2 3 8
1 2 3

1 3

*/

// return the total distance from source to destination
int BFS(int source, int destination)
{
    int distance[100];
    for(int i;i<100;i++){
        distance[i] = infinity;
    }

    for(int i=0;i<100;i++){
        parent[i] = -1;
    }

   // priority_queue<int>myQueue;
    priority_queue<int, vector<int>, greater<int> > myQueue;
    myQueue.push((source));
    distance[source] = 0;  // the source distance is zero

    while(!myQueue.empty())
    {
        int u = myQueue.top();
        myQueue.pop();
        int ucost = distance[u];
       //cout<<"prcessing : "<<u<<endl;

        for(int i=0;i<edge[u].size();i++){

            int v = edge[u][i];
            //cout<<"adjacent nodes :"<<v<<endl;
            int vcost = cost[u][i] + ucost;
            //updating
            if(distance[v]>vcost){
                distance[v] = vcost;
                myQueue.push(v);
                // parent
                parent[v]=u;
            }

        }

    }

    return distance[destination];
}

// find the shortest path from source to distance
void find_path(int start,int end,int par[]){
    if(start==end || end==-1){
        cout<<start<<endl;
    }
    else{
        find_path(start,par[end],par);
        cout<<"->"<<end;
    }
}

int main()
{
    // input the graph
    // edge[i][j] = jth node connected with i
   cout<<"Enter the Nodes and Edges"<<endl;
   int nodes, edges, u,v,w;

   cin>>nodes>>edges;

   cout<<"Enter u>>v>>w>>"<<endl;

   for(int i=0;i<edges;i++){
    cin>>u>>v>>w;
    edge[u].push_back(v);
    cost[u].push_back(w);
   }

   // print the graph with cost
/*
   for(int i=0;i<nodes;i++){
    cout<<i<<" --> ";
        for(int j=0;j<edge[i].size();j++){
          //  cout<<" "<<edge[i][j]<<" cost : "<<cost[i][j]<<endl;

        }
        cout<<endl;
   }
*/
   int src,des;
   cout<<"Enter source and destination : "<<endl;
   cin>>src>>des;

   int d = BFS(src,des);
   cout<<"distance : "<<d<<endl;

   find_path(src,des, parent);

   //for(int i=0;i<10;i++){
   // cout<<i<<" --> "<<parent[i]<<endl;
   //}

    return 0;
}
