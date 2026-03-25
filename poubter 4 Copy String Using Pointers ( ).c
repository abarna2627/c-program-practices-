#include <stdio.h>

int main() {
    char source[101], destination[101];
    char *srcPtr, *destPtr;
fgets(source, sizeof(source), stdin);
srcPtr = source;
destPtr = destination;
while (*srcPtr != '\0') {
*destPtr = *srcPtr;
   srcPtr++;
destPtr++;
}
*destPtr = '\0';
printf("%s", destination);
return 0;
}