#include<stdio.h>

int gcd(int a, int b) {
  if(b == 0)
    return a;
  else
    return gcd(b, a % b);
}

int main()
{
    int g=gcd(12,2);
    printf("Gcd : %d\n",g);

    return 0;
}
