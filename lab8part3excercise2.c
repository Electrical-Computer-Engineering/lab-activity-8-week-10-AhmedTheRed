#include <stdio.h>
#include <string.h>

void removeChars(char *s1, const char *s2) {
    int hash[256] = {0};
    
    
    while (*s2) {
        hash[(int)*s2] = 1;
        s2++;
    }
    
    
    char *dest = s1;
    while (*s1) {
        if (!hash[(int)*s1]) {
            *dest++ = *s1;
        }
        s1++;
    }
    *dest = '\0';
}

int main() {
    char s1[] = "Hi ESE 124!";
    const char s2[] = "Hi !";

    removeChars(s1, s2);
     printf("Input:Hi ESE 124!");
     printf("Input:Hi!");
    printf("Output: %s\n", s1);

    return 0;
}

