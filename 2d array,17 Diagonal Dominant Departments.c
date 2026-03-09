#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int matrix[R][C];
    for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
    scanf("%d", &matrix[i][j]);  
    }
    }

int dominantCount = 0;
for (int i = 0; i < R; i++) {
int diag = matrix[i][i];  
int rowSum = 0;
for (int j = 0; j < C; j++) {
    if (j != i) rowSum += matrix[i][j];  
}
if (diag > rowSum) dominantCount++;
}
printf("%d\n", dominantCount);  
return 0;
}