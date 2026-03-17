#include <stdio.h>
int isPerfect(int n) {
    int sum = 0;
for(int i = 1; i < n; i++) {
if(n % i == 0) {
sum += i;
}
}    
if(sum == n)
return 1;
else
return 0;
}
int main() {
    int N;
scanf("%d", &N);
if(isPerfect(N))
        printf("Perfect Number");
    else
        printf("Not Perfect Number");

    return 0;
}