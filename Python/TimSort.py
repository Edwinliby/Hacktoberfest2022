def tim_sort(lst):
    length = len(lst)
    runs, sorted_runs = [], []
    new_run = [lst[0]]
    sorted_array = []
    i = 1
    while i < length:
    if lst[i] < lst[i - 1]:
            runs.append(new_run)
            new_run = [lst[i]]
        else:
            new_run.append(lst[i])
        i += 1
    runs.append(new_run)
    for run in runs:
        sorted_runs.append(insertion_sort(run))
    for run in sorted_runs:
        sorted_array = merge(sorted_array, run)
    return sorted_array
lst = [5, 9, 10, 3, -4, 5, 178, 92, 46, -18, 0, 7]
print("\nOriginal list:")
print(lst)
print("After applying Timsort the said list becomes:")
sorted_lst = tim_sort(lst)
print(sorted_lst)
lst =  "Python"
print("\nOriginal list:")
print(lst)
print("After applying Timsort the said list becomes:")
sorted_lst = tim_sort(lst)
print(sorted_lst)
lst = (1.1, 1, 0, -1, -1.1)
print("\nOriginal list:")
print(lst)
print("After applying Timsort the said list becomes:")
sorted_lst = tim_sort(lst)
print(sorted_lst)
