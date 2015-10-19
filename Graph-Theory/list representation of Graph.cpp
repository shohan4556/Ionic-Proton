#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

#define MAX 100000
using namespace std;

vector<int>node[MAX];  // 2d vector declared

int main()
{
    int i,j,item,n,edge,pre,post;

    cout<<"Enter Nodes and Number Of Edges"<<endl;

    scanf("%d %d",&n,&edge);

    for(i=0;i<edge;i++){
        scanf("%d %d",&pre,&post);
        node[pre].push_back(post);
    }

    cout << "nodes are joined among:" << endl;

        for(i=1;i<=n;i++){
                cout<<i << " : ";
            for(j=0;j< node[i].size();j++){
                    cout<<" "<<node[i][j];
            }
            cout<<endl;
        }
       // cout<<endl;
    return 0;
}
