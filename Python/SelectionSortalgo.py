def selectionSort(array, size):
	
	for ind in range(size):
		min_index = ind

		for j in range(ind + 1, size):
			 
			if array[j] < array[min_index]:
				min_index = j
	 
		(array[ind], array[min_index]) = (array[min_index], array[ind])

arr = [-28, 45, 10, 191, -19,8,-7,-22,77]
size = len(arr)
selectionSort(arr, size)
print('selection sort is:')
print(arr)
