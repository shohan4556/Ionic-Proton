#include<bits/stdc++.h>
using namespace std;

vector<int>graph[100],cost[100];
int parent[100];
const int infinity = 10000000;

struct data{
int city,dist;
bool operator<(const data&p)const{
     return dist>p.dist;
    }
};
void find_path(int start,int end,int par[]){
    if(start==end || end==-1){
        cout<<start<<endl;
    }
    else{
        find_path(start,par[end],par);
        cout<<"->"<<end;
    }
}

int dijsktra(int src,int destination)
{
    int d[100];

    // at first all the vertex have infinity distance
    for(int i=0;i<100;i++)
        d[i] = infinity;

        priority_queue<data>Q;
        data u,v;
        u.city = src;
        v.dist = 0;
        Q.push(u);
        d[src]=0;


        while(!Q.empty()){
            u = Q.top();
            Q.pop();
            int ucost = d[u.city];

            for(int i=0;i<graph[u.city].size();i++){
                v.city = graph[u.city][i];
                v.dist = cost[u.city][i]+ucost;
                // relaxing
                if(d[v.city]>v.dist){
                    d[v.city] = v.dist;
                    // parent
                    parent[v.city]=u.city;
                    Q.push(v);
                }
            }

        } // end while
        return d[destination];

}

int main()
{
    int u,v,c;
    int nodes,edges,source,dest;
    cout<<"Enter Number of Nodes, Edges : "<<endl;
    cin>>nodes>>edges;

    cout<<"Enter Adjacent Edges : "<<endl;
    for(int i=1;i<=edges;i++){
        cin>>u>>v>>c;
        graph[u].push_back(v);
       // graph[v].push_back(u); // requires when undirected graph
        cost[u].push_back(c);
       // cost[v].push_back(c);
    }

    cout<<"Enter source and destination"<<endl;
    cin>>source>>dest;
    int dist = dijsktra(source,dest);
    cout<<"Distance : "<<dist<<endl;

    cout<<"Printing Path"<<endl;
    find_path(source,dest,parent);


    return 0;
}







