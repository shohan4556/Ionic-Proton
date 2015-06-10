#include<stdio.h>
#define MAX 500 // used to store value
#define LIMIT 100 // 100!
int main()
{
      int fact[MAX]={0},i,n=2,tmp=0,carry=0,m;
            fact[0]=1;

            while(n<=LIMIT){
                  for(i=0;i<MAX;i++){
                        tmp=fact[i]*n+carry;
                        carry=0; // assume that
                        if(tmp>10){
                        m=tmp%10;
                        carry=tmp/10;
                        }
                        else
                        m=tmp;
                        fact[i]=m;
                  }
                  n++;
            }

            for(i=MAX-1;i>=0;i--)
            printf("%d",fact[i]);

            return 0;
}

