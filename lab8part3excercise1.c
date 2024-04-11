#include <stdio.h>
#include <string.h>

void shiftString(char *str) {
    int length = strlen(str);
    int i;
    for (i = 0; i < length; i++) {
        printf("%s\n", str + i);
    }
}

int main() {
    char input[] = "HIESE124";
    shiftString(input);
    return 0;
}

