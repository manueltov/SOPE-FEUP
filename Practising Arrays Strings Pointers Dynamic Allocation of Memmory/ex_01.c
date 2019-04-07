// ================================================================================
// Arrays & C‐Strings
// ex_01.c
// A program that reads the evolution of a person's weight
// during some months of a year
// JAS

#include <stdio.h>
#define MAX_NAME_LENGTH 50 // avoid "magic numbers"
#define NUM_MONTHS 3

int main()
{
  char name[MAX_NAME_LENGTH]; // person's name
  int weight[NUM_MONTHS]; // weight evolution along months
  int i;

  // Read the name and weights
  printf("Name ? ");
  scanf("%s", name); // try with "Lou Costello" :‐)
  for (i = 0; i < NUM_MONTHS; i++)
  {
    printf("weight[%d] ? ", i + 1);
    scanf("%d", &weight[i]);
  }

  // Show the weights
  printf("\n");
  for (i = 0; i < NUM_MONTHS; i++)
  {
    printf("weight[%d] = %d\n", i + 1, weight[i]);
  }
  return 0;
}
