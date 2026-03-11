#include <stdio.h>

int firstOccurrence(char str[], char ch)
{
for(int i = 0; str[i] != '\0'; i++) {
if(str[i] == ch)
return i;
}
return -1;
}
int main() {
char str[100];
char ch;
scanf("%[^,], %c", str, &ch);
int result = firstOccurrence(str, ch);
printf("%d", result);
return 0;
}