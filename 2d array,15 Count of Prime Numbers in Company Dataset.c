#include <stdio.h>
#include <math.h>
int isPrime(int n) {
    if (n <= 1) return 0; 
    if (n == 2) return 1; 
    if (n % 2 == 0) return 0;
for (int i = 3; i <= sqrt(n); i += 2) {
if (n % i == 0) return 0;
}
    return 1;
}

int main() {
    int R, C;
    scanf("%d %d", &R, &C); 
    int matrix[R][C];
    for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
    scanf("%d", &matrix[i][j]);
    }
    }
    
    int primeCount = 0;
    
    for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
    if (isPrime(matrix[i][j])) {
    primeCount++;
    }
    }
    }
    printf("%d\n", primeCount); 
    return 0;
}