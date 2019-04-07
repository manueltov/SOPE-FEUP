// ================================================================================
// Functions and Pointers
// ex_07.c
// JAS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 10

void test1(void)
{
    printf("TEST1\n");
    printf("Hello\n");
}

void test2(int n)
{
    int i;
    printf("TEST2\n");
    for (i = 0; i < n; i++)
        printf("Hello no. %d\n", i);
}

void test3(int n, void(*f) (void))
{
    int i;
    printf("TEST3\n");
    for (i = 0; i < n; i++)
        f();
}

int main()
{
    void(*func1) (void);
    void(*func2) (int);
    func1 = test1;
    func1();
    func2 = test2;
    func2(3);
    test3(2, test1);
    return 0;
}