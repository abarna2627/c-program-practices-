#include <stdio.h>

int main()
{
char password[100];
int i = 0, flag = 0;
scanf("%s", password);
while(password[i] != '\0')
{
if(password[i] >= 'A' && password[i] <= 'Z')
{
flag = 1;
break;
}
i++;
}
if(flag == 1){
        printf("Valid");
}
else{
        printf("Invalid");
}

    return 0;
}