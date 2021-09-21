#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s, char *s1);
int **alloc_grid(int h, int w);
void free_grid(int **grid, int height);

#endif
