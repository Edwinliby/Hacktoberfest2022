#include <stdio.h>
#include <stdlib.h>

int in = 0, out = 0, buffer[25];
int n;

void producer(int x)
{
       if ( ((in + 1) % n) == out)
       {
              printf("BUFFER FULL. wait for consumer..");
       }
       else
       {
              buffer[in] = x;
              printf("\n The produced element is:%d", buffer[in]);
              in = (in + 1) % n;
       }
}

void consume()
{
       if (in == out)
       {
              printf("\n Cannot consume till producer produces it:");
       }
       else
       {
              printf("The consumed item is:%d", buffer[out]);
              out = (out + 1) % n;
       }
}

void main()
{
       int ch, z;
       printf("Enter the size of the buffer :");
       scanf("%d", &n);
       n = n + 1;
       printf("\n Producer and Consumer");
       printf("\n1.Produce an item");
       printf("\n2.Consume an item");
       printf("\n3.Exit");
       do
       {
              printf("\n Enter the choice:");
              scanf("\t%d", &ch);
              switch (ch)
              {
              case 1:
                     printf("\n Enter the item to be inserted in buffer");
                     scanf("%d", &z);
                     producer(z);
                     break;
              case 2:
                     consume();
                     break;
              case 3:
                     exit(1);
                     break;
              }
       } while (ch <= 3);
}
