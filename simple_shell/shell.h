#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <limits.h>

#define TOK_DELIM " \t\r\n"
#define RED "\033[0;31m"
#define RESET "\e[0m"
#define MAXCOM 1000 /* max number of letters to be supported */
#define MAXLIST 100 /* max number of commands to be supported */
#define TK_BUFF_SIZE 1024
/* Clearing the shell using escape sequences */
#define clear() printf("\033[H\033[J")
/* Greeting shell during startup */

char *read_line();
char **split_line(char *);
int dash_exit(char **command, int status);
int dash_execute(char **args);
void printDir(void);
void init_shell(void);
int takeInput(char *str);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strdup(char *str);
char *_strchr(char *s, char c);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _strncmp(char *s1, char *s2, int n);
void _puts(char *str);
int _putchar(char c);
int _path(char **args, char **env);
char *getEnv(char *var, char **env);
void printEnv(char **env);
int _atoi(char *s);
#endif /* SHELL_H */
