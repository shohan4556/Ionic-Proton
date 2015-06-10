#include <stdio.h>

int josephus(int n, int k)
{

  if (n == 1)
    return 1;
  else
    /* The position returned by josephus(n - 1, k) is adjusted because the
       recursive call josephus(n - 1, k) considers the original position
      k%n + 1 as position 1 */
      //int pos;
    return (josephus(n - 1, k) + k-1) % n + 1;
}
int main()
{
  int n = 5;
  int k = 2;
  printf("The chosen place is %d", josephus(n, k));
  return 0;
}
