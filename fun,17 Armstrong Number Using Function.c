#include <stdio.h>
#include <math.h>
int isArmstrong(int n) {
int original = n, sum = 0, digits = 0, temp;
temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
if (sum == original)
        return 1; 
    else
        return 0; }
int main() {
    int N;
 scanf("%d", &N);
 if (isArmstrong(N))
printf("Armstrong\n");
else
     printf("Not Armstrong\n");
return 0;
}