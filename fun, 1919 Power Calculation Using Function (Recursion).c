#include <stdio.h>
int power(int a, int b) {
   if (b == 0)
        return 1;
return a * power(a, b - 1);
}
int main() {
    int A, B;
scanf("%d %d", &A, &B);
printf("%d\n", power(A, B));
return 0;
}