function swap(arr,xp, yp)
{
    var temp = arr[xp];
    arr[xp] = arr[yp];
    arr[yp] = temp;
}
 
function selection(arr,  n)
{
    var i, j, min_index;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_index = i;
        for (j = i + 1; j < n; j++)
        if (arr[j] < arr[min_index])
            min_index = j;
 
        // Swap the found minimum element with the first element
        swap(arr,min_index, i);
    }
}
 
function printArray( arr,  size)
{
    var i;
    for (i = 0; i < size; i++)
        document.write(arr[i] + " ");
    document.write(" <br>");
}
 
var arr = [10, 25, 55, 7, 15];
    var n = 5;
    selection(arr, n);
    document.write("Sorted array: <br>");
    printArray(arr, n);