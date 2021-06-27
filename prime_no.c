#include <stdio.h>
int primex(int, int);
int main() {
  int n, prime;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

 if(n==0 || n==1)
 printf("%d is neither prime nor composite",n);

 else
 {  
 prime = primex(n, n/2);
 if(prime == 1)
  printf("%d is a prime number",n);

  else
    printf("%d is not a prime number",n);
  
 }

}

int primex(int n, int i)
{
  if(i == 1)
  {
  return 1;
  }

  else
  {
    if (n%i == 0)
    return 0;

    else
    primex(n, i-1);
    
  }
}
