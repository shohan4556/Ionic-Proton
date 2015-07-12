#include <bits/stdc++.h>
using namespace std;

int rec_fib(int n)
{
    if(n==0)
        return 0;
    else if( n == 1)
        return 1;

    else
    return rec_fib(n-1) + rec_fib(n-2);
}

int main()
{
    int n;
    n = rec_fib(6);
    cout<<n<<endl;

    return 0;
}
