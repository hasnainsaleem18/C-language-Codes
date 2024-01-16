#include<stdio.h>

float fact(float a);
float power(float a, float b);
float complete( float n, float x, float sum );

int main()
{
    float sum = 0;
    float n;
    float x;
    float ans;

    printf("Enter the value of n: ");scanf("%f", &n);
    printf("Enter the value of x: ");scanf("%f", &x);
   
    ans = complete(n, x, sum);
    printf("%.2f \n", ans);
    
    return 0;
}
float complete(float n, float x, float sum)
{    
    
    for (float k = 0; k <= n; k++)
    {
      sum = sum + ( (1.0 * power(x, k)) / fact(k) );
    }

    return sum;
}
float fact (float a)
{
    
    float solution = 1;

    for (float i = 1; i <= a; i++)
    {
      solution = solution * i;
    }
    return solution;

}
float power(float a,float b)
{

    float  power_function = 1;

    for(float i = 1; i <= b; i++)
    {
      power_function = power_function * a;
    }

 return power_function;

}
