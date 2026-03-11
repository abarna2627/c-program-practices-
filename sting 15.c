#include <stdio.h>

int main() {
char text[1000];
int i = 0, words = 0;
fgets(text, sizeof(text), stdin);
while (text[i] != '\0' && text[i] != '\n') {
    if (text[i] == ' ') {
words++;
}
i++;
}
if (i > 0) {
    words++; 
    }

    printf("%d\n", words);

    return 0;
}