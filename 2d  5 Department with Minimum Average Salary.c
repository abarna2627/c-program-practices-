#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
int a[R][C];
for(int i = 0; i < R; i++) {
    for(int j = 0; j < C; j++) {
scanf("%d", &a[i][j]);
}
}
int minIndex = 0;
int minSum = 0;
for(int j = 0; j < C; j++) {
minSum += a[0][j];
}
for(int i = 1; i < R; i++) {
int sum = 0;
for(int j = 0; j < C; j++) {
sum += a[i][j];
}
if(sum < minSum) {
minSum = sum;
minIndex = i;
}
}
printf("%d", minIndex);
return 0;
}