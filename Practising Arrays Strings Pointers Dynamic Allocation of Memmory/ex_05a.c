// ================================================================================
// Arrays of strings
// ex_05a.c
// JAS

#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 20
#define MAX_NAMES 3

void show(char nms[][MAX_NAME_LENGTH], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%s\n", nms[i]);
}

int main()
{
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    strcpy(names[0], "Ann"); // How many chars were allocated for this name?
    strcpy(names[1], "John Dalton");
    show(names, 2);
    return 0;
}