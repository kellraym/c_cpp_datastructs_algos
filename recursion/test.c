#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
  char *vowels = "aeiouAEIOU";
  printf("%s", strstr(vowels, "b"));
  return 0;
}