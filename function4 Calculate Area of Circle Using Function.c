#include <stdio.h>
float calculateArea(int r) {
    float area;
    area = 3.14 * r * r;
    return area;
}
int main() {
    int R;
    float area;
scanf("%d", &R);
area = calculateArea(R);
printf("%.2f", area);
return 0;
}