#include<stdio.h>
#include<math.h>

int isprime(int n);

int main()
{
      int n;
     while(scanf("%d",&n)==1){

      if(isprime(n)==1)
      printf("%d is prime.\n",n);
            else
            printf("%d is not prime\n",n);

     }
      return 0;
}

int isprime(int n)
{
      int i,j,ck=0;
            if(n<2)
            return ck;

            for(i=2;i<=n;i++){
                  for(j=2;i*j<=n;j++){
                        if(n%i*j==0){
                        return ck;
                        }
                  }
            }
            ck=1;
            return ck;
}
