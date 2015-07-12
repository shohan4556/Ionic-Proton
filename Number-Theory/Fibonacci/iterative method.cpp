#include<bits/stdc++.h>
using namespace std;

int ite_fib(int n)
{
    int a=0,b=1,c,i;

        if(n == 0)
            return a;
        if( n == 1)
            return b;
        else{
            for(int i=2;i<=n;i++){
                    c = a+b;
                    a =b;
                    b = c;
            }
        }
            return b;
}

int main()
{
    int n;
    n = ite_fib(9);
    cout<<n<<endl;

    return 0;
}
