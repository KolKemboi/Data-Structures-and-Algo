arr = [9, 4, 2, 5, 6, 1, 0, 7]

n = len(arr)
for i in range(n-1):
    for j in range(n-i-1):
        if arr[j] > arr[j+1]:
            arr[j], arr[j+1] = arr[j+1], arr[j]
print(arr)

arr = [3.4, 22, 45, 66, 78, 5, 0]
n = len(arr)
for i in range(n-1):
    swapped = False
    for j in range(n-i-1):
        if arr[j] > arr[j+1]:
            arr[j], arr[j+1] = arr[j+1], arr[j]
            swapped = True
    if not swapped:
        break
print(arr)
