/// Program to print all prime factors

# include <stdio.h>
# include <math.h>
void primeFactors(int n);

int main()
{
    int n;
    while(scanf("%d",&n)==1){
    primeFactors(n);
    }
    return 0;
}
void primeFactors(int n)
{
    while (n%2 == 0){
        printf("%d ", 2);
        n = n/2;
    }
      int i;
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for ( i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            printf("%d ", i);
            n = n/i;
        }
    }
    if (n > 2)
        printf ("%d ", n);
}


