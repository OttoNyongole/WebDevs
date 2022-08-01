#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <readline/readline.h>
#include <readline/history.h>

#define MAXCOM 1000 // maximum number of letters to be supported
#define MAXLIST 100 // maximum numbers of commands to be suported

// clearing of the shell using escape sequences
#define clear() printf("\033[H\033] J")

// Greating shell during start up
void init_shell()
{
    clear();
    char* user_name = getenv("USER");
    printf("\n\n\nUSER is: @%s", user_name);
    printf("\n");
    sleep(1);
    clear();
}
//function to take inputs

int takeInput(char* str)
{
    char* buf;

buf = readline("\n>>> ");
if (strlen(buf) != 0){
    add_history(buf);
    strcpy(str, buf);
    return 0;
} else {
    return 1;
}
}

//function to print current directory.

void printDir()
{
    char cwd[1024];
    getcwd(cwd, sizeof(cwd));
    printf("\nDir: %s", cwd);
}
//Function where system commanda are executed
void execArgs(char** parsed)
{
    //Folking a child
    pid_t pid = fork();

    if (pid == -1){
        printf("\nFailed forking child..");
        return;
    } else if (pid == 0){
        if (execvp(parsed[0], parsed) < 0) {
            printf("\nCould not execute command..");
        }
        exit(0);
    } else {
        // waiting for child to terminate
        wait(NULL);
        return;
    }
}