#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_COMMAND_LEN 1024
#define MAX_ARGS 32

void display_prompt();
int parse_command(char *input, char **argv);
void free_arguments(char **argv);
int execute_command(char **argv);
int _strlen(char *s);


#endif
