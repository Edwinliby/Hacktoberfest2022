#include <stdio.h>
#include <stdlib.h>

int recursiveBinary(int array[], int lower_bound, int upper_bound, int searchValue){
    if(lower_bound > upper_bound){
        return -1;
    }
    int i = (lower_bound + upper_bound)/2;
    if(array[i] == searchValue){
        return i;
    }else if(array[i]<searchValue){
        return recursiveBinary(array, i+1, upper_bound,  searchValue);
    }else{
        return recursiveBinary(array, lower_bound, i-1, searchValue);
    }
}

int main()
{
    int a[5] = {3,5,9,19,21};
    int search = 18;

    int result = recursiveBinary(a,0,4,search);
    printf("%d", result);
    return 0;
}
