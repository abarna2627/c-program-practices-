#include <stdio.h>
int palindrome(int n)
{
int original = n;
int reverse = 0;
int remainder;
while(n != 0)
{
remainder = n % 10;
reverse = reverse * 10 + remainder;
n = n / 10;
}
if(original == reverse)
return 1;
else
return 0;
}
int main()
{
int num;
scanf("%d", &num);
if(palindrome(num))
printf("Palindrome");
else
    printf("Not Palindrome");

    return 0;
}