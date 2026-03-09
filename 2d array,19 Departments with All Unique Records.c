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
int uniqueCount = 0;
for(int i = 0; i < R; i++) {
int isUnique = 1; 
for(int j = 0; j < C; j++) {
for(int k = j + 1; k < C; k++) {
if(matrix[i][j] == matrix[i][k]) {
    isUnique = 0; 
break;
}
}
if(!isUnique) break;
}
if(isUnique) uniqueCount++;
    
}
printf("%d\n", uniqueCount);
return 0;
}