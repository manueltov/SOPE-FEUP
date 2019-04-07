// ================================================================================
// Arrays of strings
// ex_05b.c
// JAS

#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 20
#define MAX_NAMES 3

void show(char *nms[], int n) // NOTE THE DIFFERENCE FROM PREVIOUS EXAMPLE
{ // EXPLAIN THE COMPILATION WARNING
    int i;
    for (i = 0; i < n; i++)
        printf("%s\n", nms[i]);
}

int main()
{
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    strcpy(names[0], "Ann");
    strcpy(names[1], "John Dalton");
    show(names, 2);
    return 0;
}
