#include<stdio.h>

int long long bigmod(int long long  a ,int p,int m);

int main()
{
      int long long a;
      int p,m;

      printf("%lld ",bigmod(5,55,231));

      return 0;
}

int long long  bigmod(int long long  a ,int p,int m)
{
            if(p==0)
            return 1;

            if(p%2==0){                  // p is even then split it up and mod
            int c=bigmod(a,p/2,m);
            return ( (c%m) * (c%m) )%m;
            }
            else  // p is odd then make it even
            return ( (a%m)* bigmod(a,p-1,m) ) %m;

}
