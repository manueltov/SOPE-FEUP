// ================================================================================
// Arrays of strings
// ex_06a.c
// JAS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 20
#define MAX_NAMES 3 // >=2

void show(char *nms[], int n)
// void show(char **nms, int n) // ALTERNATIVE
{
    int i;
    for (i = 0; i < n; i++)
        printf("%s\n", nms[i]);
}

int main()
{
    char *names[MAX_NAMES];
    int i;
    for (i = 0; i < MAX_NAMES; i++)
        names[i] = (char *)malloc(MAX_NAME_LENGTH*sizeof(char));
    strcpy(names[0], "Ann");
    strcpy(names[1], "John Dalton");
    show(names, 2);
    for (i = 0; i < MAX_NAMES; i++)
        free(names[i]);
    return 0;
}