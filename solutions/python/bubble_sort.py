arr = [3, 1, 5, 4, 20, 7, 6, 10, 9]

def bubble_sort(arr):
    is_sorted = False
    while not is_sorted:
        is_sorted = True
        for i in range(len(arr)-1):
            if arr[i] > arr[i + 1]:
                arr[i], arr[i + 1] = arr[i + 1], arr[i]
                is_sorted = False
    print arr
print arr
bubble_sort(arr)
