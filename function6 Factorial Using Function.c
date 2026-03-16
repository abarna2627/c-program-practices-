#include <stdio.h>
unsigned long long factorial(int n) {
    unsigned long long fact = 1;  
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}
int main() {
    int N;
    scanf("%d", &N);

    printf("%llu", factorial(N));

    return 0;
}