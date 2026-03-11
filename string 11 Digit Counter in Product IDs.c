#include <stdio.h>
#include <ctype.h>

int main() {
char id[100];
int count = 0;
scanf("%s", id);
for(int i = 0; id[i] != '\0'; i++) {
if(isdigit(id[i])) { 
count++;
}
}
printf("%d\n", count);
return 0;
}