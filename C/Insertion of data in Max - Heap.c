#include <stdio.h>

void swap (int* a , int* b)
{
    int i;
    
    i = *a;
    *a = *b;
    *b = i;
}

void main()
{
    int arr[8];
    int data;
    int index;
    int track;
    
    for (index = 0 ; index <= 7 ; index++)
    {
        printf ("Enter the data: ");
        scanf ("%d", &data);
        
        arr[index] = data;
        
        track = index;
        while (index != 0)
        {
            
            
            while (arr[index] > arr[(index - 1) / 2])
            {
                swap (&arr[index] , & arr[(index - 1) / 2]);
                
                index = (index - 1) / 2;
                
               
               
                
            }
            
            
           index = track; 
            break;
        }
       
    }
    
    for (index = 0 ; index <= 7 ; index++)
    {
        printf ("%d ", arr[index]);
    }
}
