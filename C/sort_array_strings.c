#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size_of_array 3 
void display(char array[][30]){
  for(int i=0; i<size_of_array; i++){
    printf("%s ", array[i]);
  }
  printf("\n");
}
 
int main()
{
  char array[size_of_array][30];
  printf("Enter %d Strings: \n", size_of_array);
  for(int i=0; i<size_of_array; i++){
    scanf("%s", array[i]);
  }
  printf("Original array: ");
  display(array);
  char temp[30];
  for(int i=0; i<size_of_array; i++){
    for(int j=0; j<size_of_array-1-i; j++){
      if(strcmp(array[j], array[j+1]) > 0){
        strcpy(temp, array[j]);
        strcpy(array[j], array[j+1]);
        strcpy(array[j+1], temp);
      }
    }
  }
  printf("Sorted Array: ");
  display(array);

  return 0;
}
