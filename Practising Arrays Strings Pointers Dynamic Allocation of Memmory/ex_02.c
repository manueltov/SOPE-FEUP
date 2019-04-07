// ================================================================================
// Arrays & C‐Strings
// ex_02.c
// A program that reads the evolution of a person's weight
// during the 12 months of a year
// Using fgets() to read names with more than one word
// JAS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LENGTH 50 // avoid "magic numbers"
#define NUM_MONTHS 3

int main()
{
  char name[MAX_NAME_LENGTH]; // person's name
  int weight[NUM_MONTHS]; // weight evolution along months
  int i;

  // Read the name and weights
  printf("Name ? "); // try with "Lou Costello" :‐)
  fgets(name, sizeof(name), stdin);

  // NOTE:
  // fgets() is safer than gets()
  // fgets() always inserts a '\0' at the end of the string
  // while gets() may not insert.
  // Newline is read only if there is available space in 'name'
  // TRY WITH 'name' =
  // 1) 123
  // 2) 1234567890
  // 3) 123456789
  // AND INTERPRET THE RESULTS
  // (VERIFY THAT IN SOME CASES THE NEWLINE APPEARS IN 'name')
  // SE INTRODUZIR MAIS DO QUE 9 CARACTERES
  // O CICLO SEGUINTE NÃO FUNCIONA COMO DEVIA.
  // OS CARACTERES FICAM NO BUFFER

  if ((strlen(name) == (sizeof(name)-1)) && name[strlen(name)-1] != '\n')
    while (getchar() != '\n'); // to clean the buffer

  for (i = 0; i < NUM_MONTHS; i++)
  {
    printf("weight[%d] ? ", i + 1);
    scanf("%d", &weight[i]);
    perror("main"); // try with an invalid input; error detected?!
    // scanf() has a return value ... look for its meaning

    /*
  {
    fprintf(stderr,"Invalid input !\n");
    system("pause");
    exit(1); // try with an invalid input; error detected?!
  }
  */
  }

  // Show the weights
  printf("\n");
  printf("%s", name);
  for (i = 0; i < NUM_MONTHS; i++)
  {
    printf("weight[%d] = %d\n", i + 1, weight[i]);
  }
  return 0;
}
