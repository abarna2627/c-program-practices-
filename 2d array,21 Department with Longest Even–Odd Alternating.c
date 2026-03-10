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
int maxLen = 0;
int rowIndex = 0;
for(int i = 0; i < R; i++) {
int currLen = 1;
for(int j = 1; j < C; j++) {
if((matrix[i][j] % 2) != (matrix[i][j-1] % 2)) {
currLen++;
} else {
currLen = 1; 
}
if(currLen > maxLen) {
maxLen = currLen;
rowIndex = i;
}
}
}
printf("%d\n", rowIndex);
return 0;
}