
#include <stdio.h>
int main()
{
    int n,i,x;
    int arr[100];
    int *ptr;
    int pos = -1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    ptr = arr;
    for(i=0;i<n;i++)
    {
        if(*(ptr+i) == x)
        {
            pos = i + 1;
            break;
        }
    }
    printf("%d",pos);
    return 0;
}
