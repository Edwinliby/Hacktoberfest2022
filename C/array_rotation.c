#include <stdio.h>    
     
int main()    
{    
      
    int arr[] = {1, 2, 3, 4, 5};     
    
    int length = sizeof(arr)/sizeof(arr[0]);      
    int n = 3;    
        
    
    printf("Original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }     

    for(int i = 0; i < n; i++){    
        int j, last;    
         
        last = arr[length-1];    
        
        for(j = length-1; j > 0; j--){    
         
            arr[j] = arr[j-1];    
        }    
         
        arr[0] = last;    
    }    
        
    printf("\n");    
        
    n    
    printf("Array after right rotation: \n");    
    for(int i = 0; i< length; i++){    
        printf("%d ", arr[i]);    
    }    
    return 0;    
}    
