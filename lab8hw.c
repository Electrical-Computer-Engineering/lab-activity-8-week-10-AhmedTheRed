#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* ToPigLatin(char* word) {
    static char pigLatin[40]; 
    int length = strlen(word);
    int index = 0;
    
    
    if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u' ||
        word[0] == 'A' || word[0] == 'E' || word[0] == 'I' || word[0] == 'O' || word[0] == 'U') {
        
        strcpy(pigLatin, word);
        strcat(pigLatin, "way");
    } else {
        
        int i = 0;
        while (i < length && !isalpha(word[i])) {
            
            pigLatin[index++] = word[i++];
        }
        int start = i; 
        while (i < length && isalpha(word[i]) && 
               word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u' &&
               word[i] != 'A' && word[i] != 'E' && word[i] != 'I' && word[i] != 'O' && word[i] != 'U') {
            i++;
        }
        
        for (; i < length; i++) {
            pigLatin[index++] = word[i];
        }
        for (i = start; i < start + index; i++) {
            pigLatin[i - start + index] = word[i];
        }
        pigLatin[index++] = 'a';
        pigLatin[index++] = 'y';
        pigLatin[index] = '\0';
    }

    
    if (isupper(word[0])) {
        pigLatin[0] = toupper(pigLatin[0]);
    }

    return pigLatin;
}

int main() {
    char words[5][40];
    char pigLatin[5][40];

    int i;
    for ( i = 0; i < 5; i++) {
        printf("Enter word %d: ", i + 1);
        scanf("%39s", words[i]);
    }

    
    for (i = 0; i < 5; i++) {
        strcpy(pigLatin[i], ToPigLatin(words[i]));
    }

    
    for (i = 0; i < 5; i++) {
        printf("Word %d in Pig Latin: %s\n", i + 1, pigLatin[i]);
    }

    return 0;
}

