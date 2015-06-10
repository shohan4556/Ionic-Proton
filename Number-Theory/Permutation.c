#include<stdio.h>
/// formula :
/// p =n!/(n-k)!

int fact(int);

int main()
{
    int p,k,n;

    printf(" Enter permutation number for the patern P(n,k)\n");
    printf("Enter n value : ");
    scanf("%d",&n);
    printf("\nEnter k value : ");
    scanf("%d",&k);
    p=(fact(n)/fact(n-k));       //as the formula of permutation p(n,r)=n!/(n-r)!
    printf("\nFactorial of P(%d,%d) = %d",n,k,p);

}
int fact(int c)
{
    int f=1;
    while(c>0)
    {
         f=f*c;
         c--;
    }
    return f;
}
