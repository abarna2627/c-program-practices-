#include <stdio.h>
void printFibonacci(int n) {
int a = 0, b = 1, next, i;
if (n >= 1) {
printf("%d ", a); 
}
if (n >= 2) {
 printf("%d ", b); 
    }
    for (i = 3; i <= n; i++) {
        next = a + b; 
        printf("%d ", next);
        a = b; 
        b = next;
    }
    printf("\n");
}
int main() {
    int N;
scanf("%d", &N);
 printFibonacci(N);
return 0;
}