#include <stdio.h>
int main()
{
    char str[200];
    char *ptr;
    int count = 1;
    fgets(str,200,stdin);
    ptr = str;
    while(*ptr != '\0')
    {
        if(*ptr == ' ')
        {
            count++;
        }
        ptr++;
    }
    printf("%d",count);
    return 0;
}