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
int boundarySum = 0;
for(int i = 0; i < R; i++) {
for(int j = 0; j < C; j++) {
           
if(i == 0 || i == R-1 || j == 0 || j == C-1) {
boundarySum += matrix[i][j];
}
}
}
printf("%d\n", boundarySum);
return 0;
}