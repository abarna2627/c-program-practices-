#include <stdio.h>

int main() {
int R, C;
scanf("%d %d", &R, &C);
int a[R][C];
for(int i = 0; i < R; i++)
for(int j = 0; j < C; j++)
scanf("%d", &a[i][j]);
int maxFreq = 0, value;
for(int i = 0; i < R; i++) {
for(int j = 0; j < C; j++) {
int count = 0;
for(int k = 0; k < R; k++) {
for(int l = 0; l < C; l++) {
if(a[i][j] == a[k][l])
count++;
}
}
if(count > maxFreq) {
maxFreq = count;
value = a[i][j];
}
}
}
printf("%d", value);
return 0;
}