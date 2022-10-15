def insertion(arr, n):

    if n <= 1:
        return

    insertion(arr, n - 1)

    last = arr[n - 1]
    j = n - 2

    while (j >= 0 and arr[j] > last):
        arr[j + 1] = arr[j]
        j = j - 1

    arr[j + 1] = last


arr = [12, 11, 13, 5, 6]
insertion(arr, len(arr))
print(arr)
