#include <stdio.h>

static char CODE[][26] = {
    "Alfa",
    "Bravo",
    "Charlie",
    "Delta",
    "Echo",
    "Foxtrot",
    "Golf",
    "Hotel",
    "India",
    "Juliet",
    "Kilo",
    "Lima",
    "Mike",
    "November",
    "Oscar",
    "Papa",
    "Quebec",
    "Romeo",
    "Sierra",
    "Tango",
    "Uniform",
    "Victor",
    "Whiskey",
    "X-ray",
    "Yankee",
    "Zulu"
};

static char NUM[][10] = {
    "Zero",
    "One",
    "Two",
    "Three",
    "Four",
    "Five",
    "Six",
    "Seven",
    "Eight",
    "Nine"
};


int main(int argc, char *argv[]) {
    char buffer[256];
    size_t length;
    int i = 0;

    if (scanf("%s", buffer) != 1) {
        return 1;
    }
    for (i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] >= 'a' && buffer[i] <= 'z') {
            printf("%s ", CODE[buffer[i] - 'a']);
        } else if (buffer[i] >= 'A' && buffer[i] <= 'Z'){
            printf("%s ", CODE[buffer[i] - 'A']);
        } else if (buffer[i] >= '0' && buffer[i] <= '9') {
            printf("%s ", NUM[buffer[i] - '0']);
        }
    }
    printf("\n");
    return 0;
}