#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *buf = (char *)malloc(sizeof(char) * 32);
    char *p = NULL;
    int i = 1;

    for (i = 1; i <= 40; ++i)
    {
        sprintf(buf, "%d\n", i);
        if (i % 3 == 0)
        {
            printf("アホ %d\n", i);
        }
        else if ((p = strchr(buf, '3')) != NULL)
        {
            printf("アホ %d\n", i);
        }
        else
        {
            printf("%d\n", i);
        }
    }

    return 0;
}