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

int minSum = -1; 
int minRow = -1;
for (int i = 0; i < R; i++) {
int rowSum = 0;
for (int j = 0; j < C; j++) {
rowSum += matrix[i][j];
}
if (rowSum > 0) {  
if (minSum == -1 || rowSum < minSum) {
minSum = rowSum;
minRow = i;
}
}
}
printf("%d\n", minRow); 
    return 0;
}