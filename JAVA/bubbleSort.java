class Sort 
{
    static void bubbleSort(int arr[], int n)
    {                                       
        if (n == 1)                     //passes are done
        {
            return;
        }

        for (int i=0; i<n-1; i++)       //iteration through unsorted elements
        {
            if (arr[i] > arr[i+1])      //check if the elements are in order
            {                           //if not, swap them
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
            
        bubbleSort(arr, n-1);           //one pass done, proceed to the next
    }

    void display(int arr[])                 //display the array
    {  
        for (int i=0; i<arr.length; ++i) 
        {
            System.out.print(arr[i]+" ");
        } 
    } 
     
    public static void main(String[] args)
    {
        Sort ob = new Sort();
        int arr[] = {6, 4, 5, 12, 2, 11, 9};    
        bubbleSort(arr, arr.length);
        ob.display(arr);
    }
}