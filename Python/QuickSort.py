def quick_sort(array):
    if len(array) < 2:
        return array
    else:
        pivot = array[0]
        less = [i for i in array[1:] if i <= pivot]
        greater = [i for i in array[1:] if i > pivot]
        return quick_sort(less) + [pivot] + quick_sort(greater)

arr = [7, 2, 4, 0, 1, 5, 8, 3, 2, 0]
print(quick_sort(arr))