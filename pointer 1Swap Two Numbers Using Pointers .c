#include <stdio.h>
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
 int main() {
int a, b;
scanf("%d %d", &a, &b);
printf("Before swap: %d %d\n", a, b);
swap(&a, &b);
printf("After swap: %d %d\n", a, b);
return 0;
}