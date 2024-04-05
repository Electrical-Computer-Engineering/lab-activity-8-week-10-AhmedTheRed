#include <stdio.h>

int my_isalpha(char c){
	return c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z';
}
int my_isdigit(char c){
	return c >= '0' && c <= '9';
}
int my_is_upper(char c){
	return c >= 'A' && c <= 'Z';
}
char my_to_upper(char c){
	if (c >= 'a' && c <= 'z'){
		return c - 'a' + 'A'; }
		return c;
	}
	char  my_to_lower(char c){
		if (c <= 'A' && c <= 'Z'){
			return c - 'A' + 'a'; }
			return c;
		}
		
	