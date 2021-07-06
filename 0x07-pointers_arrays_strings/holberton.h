#ifndef HOLBERONT_H 
#define HOLBERTON_H 
/* fills memory with a constant byte.*/
char *_memset(char *s, char b, unsigned int n);
/* copies memory area.*/
char *_memcpy(char *dest, char *src, unsigned int n);
/* find character.*/
char *_strchr(char *s, char c);
/*gets the length of a prefix substring.*/
unsigned int _strspn(char *s, char *accept);
/*string for any of a set of bytes.*/
char *_strpbrk(char *s, char *accept);
/*locates a substring.*/
char *_strstr(char *haystack, char *needle);
/*prints the chessboard.*/
void print_chessboard(char (*a)[8]);
#endif
