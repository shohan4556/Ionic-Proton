/// Author : Md. shohanur Rahaman

#include<stdio.h>
#include<string.h>
#define N 2500
#define B 10

int main()
{
      int fact[N],i,j,n,t,size=0,carry=0,tmp=0,a;
      scanf("%d",&t);
      while(t--){

      scanf("%d",&n);
      memset(fact,0,N);
      fact[0]=1;
      size=1;
      carry=0;

                        for(j=1;j<=n;j++){
                                    for(i=0;i<size;i++){
                                          tmp=fact[i]*j+carry;
                                          fact[i]=tmp%B;
                                          carry=tmp/B;
                                    }
                                    while(carry>0){
                                          fact[size++]=carry%B;
                                          carry=carry/B;
                                    }
                        }
                        // printing factorial
                        for(a=size-1;a>=0;a--){
                              printf("%d",fact[a]);
                        }
                        printf("\n");
      }

return 0;
}
