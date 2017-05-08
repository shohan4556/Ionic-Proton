#include<iostream>
#include<vector>
#define MAX 100
using namespace std;
/*
graph :
     0
    / \
   1   2
      / \
     3   4
    /
   5
input
6 5
0 1
0 2
2 3
2 4
3 5
output
0 ->>  1 2
1 ->>
2 ->>  3 4
3 ->>  5
4 ->>
5 ->>
*/
vector<int>graph[MAX];

int main()
{
    int nodes,edges,pre,post;

    cin>>nodes>>edges;

    for(int i=0;i<edges;i++){
        cin>>pre>>post;
        graph[pre].push_back(post);
    }

    // print graph
    for(int i=0;i<nodes;i++){
        cout<<i<<" ->> ";
        for(int j=0;j<graph[i].size();j++){
            cout<<" "<<graph[i][j];
        }
        cout<<endl;
    }

    //cout<<nodes<<edges<<endl;

    return 0;
}
