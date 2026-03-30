#include <stdio.h>
int main()
{
    char str[100];
    char *start, *end;
    int flag = 1;
    scanf("%s", str);
    start = str;
    end = str;
    while(*end != '\0')
    {
        end++;
    }
    end--;
    while(start < end)
    {
        if(*start != *end)
        {
            flag = 0;
            break;
        }
        start++;
        end--;
    }
    if(flag == 1)
        printf("YES");
    else
        printf("NO");

    return 0;
}