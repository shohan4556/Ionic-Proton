#include<stdio.h>
#include<math.h>

int main()
{

int i,n,limit,div=0;
printf("Enter the number : ");
scanf("%d",&n);

limit=sqrt(n);

            for(i=1;i<=limit;i++)
                  if(n%i==0){
                  if(i!=n/i)
                  div=div+2;
                  else
                  div++;
            }

printf("%d\n",div);
return 0;
}
