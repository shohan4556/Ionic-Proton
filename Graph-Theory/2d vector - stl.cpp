#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#define MAX 100000
using namespace std;

int main()
{

    vector <int> ara[5];  /// twoD vector declared

    ara[0].push_back(10);   /// I am inserting 10 at the position zero I dont need to define vector
    ara[0].push_back(20);   /// column I just need to set position of row and give value, vector will automatically
    ara[0].push_back(30);  /// grow column if there are more value in same row

ara[1].push_back(40);
ara[1].push_back(50);
ara[1].push_back(60);

/// printing vector
    cout<<ara[0][0]<<endl;
    cout<<ara[0][1]<<endl;
    cout<<ara[0][2]<<endl;

 cout<<ara[1][0]<<endl;
 cout<<ara[1][1]<<endl;
 cout<<ara[1][2]<<endl;


    return 0;
}
