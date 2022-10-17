#include <stdio.h>

int main(){

    int arr[50], n, x, y, temp;    

    printf("Please Enter the Number of Elements you want in the array: ");

    scanf("%d", &n);    

    printf("Please Enter the Elements: ");

    for(x = 0; x < n; x++)

        scanf("%d", &arr[x]);

    for(x = 0; x < n - 1; x++){       

        for(y = 0; y < n - x - 1; y++){          

            if(arr[y] > arr[y + 1]){               

                temp = arr[y];

                arr[y] = arr[y + 1];

                arr[y + 1] = temp;

            }

        }

    }

    printf("Array after bubble sort is: ");

    for(x = 0; x < n; x++){

        printf("%d  ", arr[x]);

    }

    return 0;

}