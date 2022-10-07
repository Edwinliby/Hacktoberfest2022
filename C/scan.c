#include <stdio.h>
#include <stdlib.h>

#define LOW 0
#define HIGH 199

int main()
{
  int queue[20];
  int head, max, q_size, temp, sum;
  int dloc; // location of disk (head) arr

  printf("%s\t", "Enter the number of Requests");
  scanf("%d", &q_size);

  printf("%s\t", "Enter initial head position");
  scanf("%d", &head);

  printf("%s\n", "Enter the Requests sequence");
  for (int i = 0; i < q_size; i++)
  {
    scanf("%d", &queue[i]);
  }

  queue[q_size] = head; // add RW head into queue
  q_size++;

  // sort the array
  for (int i = 0; i < q_size; i++)
  {
    for (int j = i + 1; j < q_size; j++)
    {
      if (queue[i] > queue[j])
      {
        temp = queue[i];
        queue[i] = queue[j];
        queue[j] = temp;
      }
    }
  }

  max = queue[q_size - 1];

  // locate head in the queue
  for (int i = 0; i < q_size; i++)
  {
    if (head == queue[i])
    {
      dloc = i;
      break;
    }
  }

  sum = head + max;
  printf("\nmovement of total cylinders %d  ", sum);
  printf("  \n");
  return 0;
}
