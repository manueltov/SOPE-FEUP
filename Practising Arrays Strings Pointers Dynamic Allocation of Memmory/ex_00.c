// Arrays & C‐Strings
// ex_00.c
// A program that reads the evolution of a person's weight
// during some months of a year
// JAS

#include <stdio.h>
#define MAX_NAME_LENGTH 50 // avoid "magic numbers"
#define NUM_MONTHS 12

int main()
{
  char name[MAX_NAME_LENGTH];
  int weight[NUM_MONTHS];
  int i;
  printf("Name ? ");
  scanf("%s", name);
  for (i = 0; i < NUM_MONTHS; i++)
  {
    printf("weight[%d] ? ", i + 1);
    scanf("%d", &weight[i]);
  }
  int sum;
  for (i = 0; i < NUM_MONTHS; i++)
  {
    printf("weight[%d] = %d\n", i + 1, weight[i]);
    sum = sum + weight[i];
  }
  int average = sum/12;
  printf("Your average is: %d\n", average);
  return 0;
}
