#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
int a[R][C];
    int i, j;
for(i = 0; i < R; i++) {
        for(j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
    }
    }
    int maxRow[R], minRow[R];
for(i = 0; i < R; i++) {
    maxRow[i] = a[i][0];
    minRow[i] = a[i][0];
for(j = 1; j < C; j++) {
if(a[i][j] > maxRow[i])
    maxRow[i] = a[i][j];
if(a[i][j] < minRow[i])
    minRow[i] = a[i][j];
}
}
int maxProduct = -1000000000;
for(i = 0; i < R; i++) {
    for(j = i + 1; j < R; j++) {
int p1 = maxRow[i] * maxRow[j];
int p2 = minRow[i] * minRow[j];
if(p1 > maxProduct)
    maxProduct = p1;
if(p2 > maxProduct)
    maxProduct = p2;
    }
    }

printf("%d", maxProduct);
   return 0;
}