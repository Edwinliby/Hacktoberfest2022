# Jump Search algorithm
import math
def jumpSearch( arr , x , n ):
	# block size to be jumped
	step = math.sqrt(n)
	
	# Finding the block where element is
	# if it is present
	prev = 0
	while arr[int(min(step, n)-1)] < x:
		prev = step
		step += math.sqrt(n)
		if prev >= n:
			return -1
	
	# Doing a linear search for x in
	# block beginning with previous
	while arr[int(prev)] < x:
		prev += 1
		if prev == min(step, n):
			return -1
	
	# If element is found
	if arr[int(prev)] == x:
		return prev
	
	return -1

# for testing the function
arr = [ 0, 1, 8, 2, 3, 5, 8, 13, 22, 34, 55, 67, 145, 233, 397, 618 ]
x = 67
n = len(arr)

index = jumpSearch(arr, x, n)

print("Element" , x, "is at index" ,"%.0f"%index)