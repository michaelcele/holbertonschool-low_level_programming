#ifndef HIOLBERONT_H 
#define HOLBERTON_H 
/*Function putchar of holberton*/
int _putchar(char c);
/*creates an array of chars, and initializes it with a specific char*/
char *create_array(unsigned int size, char c);
/*copy string allocated in new space memory*/
char *_strdup(char *str);
/*copy string allocated in new space memory*/
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
#endif
