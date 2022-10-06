public class Bucketsort  
{  
    int getMax(int a[]) // function to get maximum element from the given   
  
array  
{  
    int n = a.length;  
    int max = a[0];  
    for (int i = 1; i < n; i++)  
    if (a[i] > max)  
    max = a[i];  
    return max;  
}  
void bucket(int a[]) // function to implement bucket sort  
{  
    int n = a.length;  
    int max = getMax(a); //max is the maximum element of array  
    int bucket[] = new int[max+1];   
    for (int i = 0; i <= max; i++)  
    {  
        bucket[i] = 0;  
    }  
    for (int i = 0; i < n; i++)  
    {  
        bucket[a[i]]++;  
          
    }  
    for (int i = 0, j = 0; i <= max; i++)  
    {  
        while (bucket[i] > 0)  
        {  
            a[j++] = i;  
            bucket[i]--;  
        }  
    }  
}  
void printArr(int a[]) /* function to print the array */  
{  
    int i;  
    int n = a.length;  
    for (i = 0; i < n; i++)  
    System.out.print(a[i] + " ");  
}  
  
    public static void main(String[] args) {  
    int a[] = { 90, 40, 5, 15, 30, 9 };  
    Bucket b1 = new Bucket();  
    System.out.print("Before sorting array elements are - \n");  
    b1.printArr(a);  
    b1.bucket(a);  
    System.out.print("\nAfter sorting array elements are - \n");  
    b1.printArr(a);  
    }  
