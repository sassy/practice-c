#include <stdio.h>

int
length(char *str)
{
    char c;
    int i = 0;
    for (i = 0; (c = *str++) != '\0'; i++) {}
    return i;
}

void
reverse(char *string)
{
    int i;
    char tmp;
    int len = length(string);

    for (i = 0; i < len / 2; i++) {
        tmp = string[i];
        string[i] = 'a';
        string[i] = string[len - 1 - i];
        string[len - 1 - i ] = tmp;
    }
}

int
main(int argc, char **argv)
{
    /* test code */
    char string[] = "Hello"; 
    reverse(string);
    printf("%s\n", string);

    char string2[] = "foo"; 
    reverse(string2);
    printf("%s\n", string2);

    char string3[] = "char"; 
    reverse(string3);
    printf("%s\n", string3);

    char string4[] = ""; 
    reverse(string4);
    printf("%s\n", string4);

    return 0;
}