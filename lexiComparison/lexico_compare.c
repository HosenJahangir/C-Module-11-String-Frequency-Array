#include <stdio.h>
int main()
{

    char a[100], b[100];
    scanf("%s %s", a, b);
    // logic develpment
    int i = 0;
    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("same\n");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("A smaller");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("B smaller\n");
            break;
        }
        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf(" A choto\n");
            break;
        }
        else
        {
            printf("B choto\n");
            break;
        }
    }

    return 0;
}