#include<iostream>
#include<cstdio>
using namespace std;

#define MAX 5000
int par[MAX];

void create_set(int i)
{
    par[i]=i; // same parent or representative
}

int find_par(int r)  // return the representative of the node
{
    if(par[r] == r){
        return r;
    }
    else{
        par[r]=find_par(par[r]);  // path compression
        return par[r];
    }
}

void union_set(int x,int y)
{

    int u=find_par(x);  // path compression
    int v=find_par(y);  // path compression

    if(u!=v){  //  link both representative
        par[u]=v;
    }

}

int main()
{
        int n;
        cin>>n;  // how many nodes u want to create (8)

            for(int i=0;i<n;i++){
                create_set(i);
            }

        cout<<"after initializing set"<<endl;
            for(int i=0;i<n;i++){
                cout<<par[i]<<" ";
            }

            union_set(1,5);
            union_set(3,5);
            union_set(4,2);
            union_set(6,7);
            union_set(7,3);

        cout<<endl<<"after marge set"<<endl;
            for(int i=0;i<n;i++){
                cout<<par[i]<<" ";
            }

        cout<<endl<<"find nodes Representative"<<endl;
        for(int i=0;i<n;i++){
            cout<<find_par(i)<<" ";
        }
cout<<endl;
    return 0;
}





