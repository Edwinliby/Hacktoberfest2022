class TimSort {  
static int RUN = 32;  
int min(int a, int b)    
{    
    if(a<b)    
    return a;     
    else     
    return b;     
}    
/* This function sorts array from starting index to ending index which is of   
size atmost RUN */  
void insertionSort(int a[], int beg, int end) /* function to sort an array with   
insertion sort */  
{  
    int i, j, temp;  
    for (i = beg + 1; i <= end; i++)   
    {  
        temp = a[i];  
        j = i - 1;  
  
        while(j >= beg && temp <= a[j])    
        {    
            a[j+1] = a[j];     
            jj = j-1;    
        }    
        a[j+1] = temp;    
    }  
}  
/* Function to merge the sorted runs */  
void merge(int a[], int beg, int mid, int end)    
{    
    int i, j, k;  
    int n1 = mid - beg + 1;    
    int n2 = end - mid;     
  //temporary arrays    
    int[] LeftArray = new int [n1];    
    int[] RightArray = new int [n2];       
    /* copy data to temp arrays */  
    for (i = 0; i < n1; i++)    
    LeftArray[i] = a[beg + i];    
    for (j = 0; j < n2; j++)    
    RightArray[j] = a[mid + 1 + j];        
    i = 0;   
    j = 0;   
    k = beg;      
    while (i < n1 && j < n2)    
    {    
        if(LeftArray[i] <= RightArray[j])    
        {    
            a[k] = LeftArray[i];    
            i++;    
        }    
        else    
        {    
            a[k] = RightArray[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        a[k] = LeftArray[i];    
        i++;    
        k++;    
    }        
    while (j<n2)    
    {    
        a[k] = RightArray[j];    
        j++;    
        k++;    
    }    
}    
/* function to implement tim sort */  
void timSort(int a[], int n)  
{     
    /* Sort individual subarrays of size RUN */  
    for (int i = 0; i < n; i+=RUN)  
        insertionSort(a, i, min((i+RUN-1), (n-1)));   
    // Start merging from size RUN (or 32).  
    for (int size = RUN; size < n; size = 2*size)  
    {  
        for (int beg = 0; beg < n; beg += 2*size)  
        {  
            /* find ending point of left subarray. The   
starting point of right sub array is mid + 1 */  
            int mid = beg + size - 1;  
            int end = min((beg + 2*size - 1),(n-1));  
  
            /* Merge subarray a[beg...mid] and a[mid  
+1...end] */  
            if(mid < end)  
                merge(a, beg, mid, end);  
        }  
    }  
}  
/* function to print the array elements */  
void printArr(int[] a, int n)  
{  
    for (int i = 0; i < n; i++)  
        System.out.print(a[i] + " ");  
}  
public static void main(String args[])   
{  
    int a[] = { 38, 10, 29, 25, 23, 6, 2, 30, 15 };  
    int n = a.length;  
TimSort t1 = new TimSort();  
    System.out.print("\nBefore sorting array elements are - ");  
    t1.printArr(a, n);  
    t1.timSort(a, n);  
    System.out.print("\nAfter sorting array elements are - ");  
    t1.printArr(a, n);  
System.out.println();  
}  
} 
