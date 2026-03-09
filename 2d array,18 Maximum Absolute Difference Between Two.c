#include <stdio.h>
#include <stdlib.h>

int main() {
int R, C;
scanf("%d %d", &R, &C);

int matrix[R][C];
for (int i = 0; i < R; i++) {
for (int j = 0; j < C; j++) {
scanf("%d", &matrix[i][j]);
}
}
int rowMin[R], rowMax[R];
for (int i = 0; i < R; i++) {
rowMin[i] = matrix[i][0];
rowMax[i] = matrix[i][0];
for (int j = 1; j < C; j++) {
if (matrix[i][j] < rowMin[i]) rowMin[i] = matrix[i][j];
if (matrix[i][j] > rowMax[i]) rowMax[i] = matrix[i][j];
}
}
int maxDiff = 0;
for (int i = 0; i < R; i++) {
for (int k = 0; k < R; k++) {
if (i == k) continue;
int diff1 = abs(rowMax[i] - rowMin[k]);
int diff2 = abs(rowMin[i] - rowMax[k]);
if (diff1 > maxDiff) maxDiff = diff1;
if (diff2 > maxDiff) maxDiff = diff2;
}
}
printf("%d\n", maxDiff);
    return 0;
}