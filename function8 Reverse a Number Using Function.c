#include <stdio.h>
int reverseNumber(int n)
{
int reversed = 0;
while(n != 0)
    {
int digit = n % 10;
reversed = reversed * 10 + digit;
n = n / 10;
}
return reversed;
}
int main()
{
int N, result;
scanf("%d", &N);
result = reverseNumber(N);
    printf("%d", result);
return 0;
}