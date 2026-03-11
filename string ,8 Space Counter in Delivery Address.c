#include <stdio.h>
#include <string.h>
int main() {
char address[200];
int count = 0;
fgets(address, sizeof(address), stdin);
for(int i = 0; address[i] != '\0'; i++) {
if(address[i] == ' ') {
count++;
}
}
printf("%d", count);
return 0;
}