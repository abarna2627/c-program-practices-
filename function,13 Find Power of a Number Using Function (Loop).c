#include <stdio.h>

int power(int a, int b) {
    int result = 1;

for(int i = 1; i <= b; i++) {
result = result * a;
}
return result;
}
int main() {
int A, B;
scanf("%d %d", &A, &B);
printf("%d", power(A, B));
return 0;
}