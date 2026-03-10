#include <stdio.h>

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
int minVal = matrix[i][0];
int maxVal = matrix[i][0];
for(int j = 1; j < C; j++) {
if(matrix[i][j] < minVal) minVal = matrix[i][j];
if(matrix[i][j] > maxVal) maxVal = matrix[i][j];
}
if(maxVal - minVal <= 1000) count++;
    }
printf("%d\n", count);
return 0;
}