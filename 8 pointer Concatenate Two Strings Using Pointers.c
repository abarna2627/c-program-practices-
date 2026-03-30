#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    char *p1, *p2;
    scanf("%s", str1);
    scanf("%s", str2);
    p1 = str1;
    p2 = str2;
    while(*p1 != '\0')
    {
        p1++;
    }
    while(*p2 != '\0')
    {
        *p1 = *p2;
        p1++;
        p2++;
    }
    *p1 = '\0';
    printf("%s", str1);
    return 0;
}