#include <stdio.h>

int gcd(int x, int y)
{
    if (x == 0)
        return y;
    return gcd(y % x, x);
}
 
/* Function to return LCM of two numbers
   a x b = LCM(a, b) * GCD (a, b)

   LCM(a, b) = (a x b) / GCD(a, b)*/
int lcm(int x, int y)
{
    return (x / gcd(x, y)) * y;
}

int main()
{
  int x,y;
    printf("Input the first number: ");
    scanf("%d", &x);

     printf("\nInput the second number: ");
    scanf("%d", &y);

    printf("\nLCM of %d and %d is %d ", x, y, lcm(x, y));
    return 0;
}

