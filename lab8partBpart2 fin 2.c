#include <stdio.h>
#include <string.h>

int my_strcmp(const char *s1, const char *s2) {
    return strcmp(s1, s2) != 0;
}


   int my_strncmp(const char *s1, const char *s2, size_t n) {
    return strncmp(s1, s2, n) != 0;
}


char *my_strcpy(char *dest, const char *src) {
    return strcpy(dest, src);
}


char *my_strcat(char *dest, const char *src) {
    return strcat(dest, src);
}

int i;
char *my_reverse(char *dest, const char *src) {
    int length = strlen(src);
    for ( i = 0; i < length; i++) {
        dest[i] = src[length - i - 1];
    }
    dest[length] = '\0';
    return dest;
}

int main() {
    
    char str1[20] = "hello";
    char str2[20] = "world";
    char str3[20] = "programming";

    
       printf("1. my_strcmp result: %d\n", my_strcmp(str1, str2));
    printf("2. my_strncmp result: %d\n", my_strncmp(str1, str2, 3));
     printf("3. my_strcpy result: %s\n", my_strcpy(str1, str2));
     printf("4. my_strcat result: %s\n", my_strcat(str1, str2));
      printf("5. my_reverse result: %s\n", my_reverse(str1, str3));

    return 0;
}

