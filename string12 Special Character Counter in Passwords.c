#include <stdio.h>
#include <ctype.h>
int main() {
char id[100];

int count = 0;
scanf("%s", id);
for(int i = 0; id[i] != '\0'; i++) {
if(!isalnum(id[i])) {
count++;
}
}
printf("%d", count);
return 0;
}