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
int maxCount = 0;
int frequentValue = matrix[0][0];
for(int i = 0; i < R; i++) {
for(int j = 0; j < C; j++) {
int count = 0;
for(int k = 0; k < R; k++) {
for(int l = 0; l < C; l++) {
if(matrix[i][j] == matrix[k][l]) {
count++;
}
}
}
if(count > maxCount) {
maxCount = count;
    frequentValue = matrix[i][j];
}
}
}
printf("%d", frequentValue);
return 0;
}