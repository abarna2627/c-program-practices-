#include <stdio.h>
int main() {
int R, C;
scanf("%d %d", &R, &C);
int matrix[R][C];
int freq[10001] = {0};
for(int i = 0; i < R; i++) {
for(int j = 0; j < C; j++) {
scanf("%d", &matrix[i][j]);
freq[matrix[i][j]]++;
}
}
for(int i = 0; i < R; i++) {
for(int j = 0; j < C; j++) {
if(freq[matrix[i][j]] == 1) {
printf("%d\n", matrix[i][j]);
return 0; 
}
}
}
printf("No non-repeating element\n");
return 0;
}