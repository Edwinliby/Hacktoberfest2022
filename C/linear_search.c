#include <stdio.h>
int main()
{
  int a[100], key, c, n;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter elements of the array");

  for (c = 0; c < n; c++)
    scanf("%d", &a[c]);

  printf("Enter a number to search\n");
  scanf("%d", &key);

  for (c = 0; c < n; c++)
  {
    if (a[c] == key)    /* If required element is found */
    {
      printf("%d is present at location %d.\n", key, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d isn't present in the array.\n", key);

  return 0;
}