#include <stdio.h>
#include <math.h>


int isPrime(int n) {
    if(n < 2) return 0;
for(int i = 2; i*i <= n; i++) {
if(n % i == 0) return 0;
    }
 return 1;
}

int main() {
int R, C;
scanf("%d %d", &R, &C);

int matrix[R][C];
for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
    scanf("%d", &matrix[i][j]);
    }
   }

int count = 0;
for(int i = 0; i < R; i++) {
    int allPrime = 1; 
for(int j = 0; j < C; j++) {
if(!isPrime(matrix[i][j])) {
 allPrime = 0;
break;
}
}
    if(allPrime) count++;
}

  printf("%d\n", count);
  return 0;
}