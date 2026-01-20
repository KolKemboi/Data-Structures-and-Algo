def linearSearch(arr, targetValue):
    for i in range(len(arr)):
        if arr[i] == targetValue:
            return i
    return -1


array = [9, 3, 5, 2, 6, 7, 1]

result = linearSearch(array, 1)

if result != -1:
    print(result)
