#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#define N 100
using namespace std;

int parent[N];

struct edge{
    int u,v,weight; // pre, post,cost

        bool operator <(edge p)const{  // operator overloading used to sort the weight
            return weight<p.weight;
        }
};

        vector <edge>e; // create a vector e

int find_par(int r) //  return the parent of the node
{
    if(parent[r]==r)
        return r;

    else{
        parent[r]=find_par(parent[r]);
        return parent[r];
    }
}

int mst(int n)
{
    sort(e.begin(),e.end()); // sort as increasing order

    for(int i=1;i<=n;i++)
        parent[i]=i;  // initialize  same nodes as parent

    int count =0,s=0;

        for(int i=0;i<=(int)e.size();i++){
            int u=find_par(e[i].u);
            int v=find_par(e[i].v);

// union
            if(u!=v){   // parent are not same
                parent[u]=v; // link both parent
                count++; // counting how many edges are connected
                s+=e[i].weight; // sum weight
                if(count==n-1)  // n-1 edges connected
                    break;
            }
        }
            return s; // return  sum
}

int main()
{

    int n,m; // nodes and edge

    cin>>n>>m;

    for(int i=1;i<=m;i++){

        int u,v,w;
        cin>>u>>v>>w;
        edge get;

        get.u=u;
        get.v=v;
        get.weight=w;
        e.push_back(get); // add data into vector
    }

    cout<<mst(n)<<endl;  // pass nodes and connected edge should be n-1 and no cycle
    return 0;
}





