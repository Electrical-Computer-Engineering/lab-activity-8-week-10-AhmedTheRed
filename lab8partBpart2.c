#include <stdio.h>


int my_strcmp(char str1[], char str2[]);
int my_strncmp;
char* my_strcpy;
char* my_strcat;
char*  my_reverse;
int i;
char str;
int main () {
	
}
int my_strcmp(char str1[], char str2[]){
	for(i = 0;str[i] != \0;i++) {
	if ( str1[i] == str2[i]){
		return 0;}
	else return 1;
	} }
	int my_strncmp(char str1[], char str2[],int n){
		for(i = 0;str[i] != \0 && i < n;i++) {
			if (str1[i] == str2[i]){
				return 0;
		} else return 1;
	} }
	
	
	
