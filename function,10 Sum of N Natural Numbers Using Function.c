#include <stdio.h>
int sumOfNumbers(int n)
{
int i, sum = 0;
for(i = 1; i <= n; i++)
{
sum = sum + i;
}
return sum;
}
int main()
{
int n, result;
scanf("%d", &n);
result = sumOfNumbers(n);
printf("%d", result);
return 0;
}