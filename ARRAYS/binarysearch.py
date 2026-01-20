def binarySearch(arr, targetValue):
    left = 0
    right = len(arr) - 1

    while left <= right:
        mid = (left + right) // 2

        if arr[mid] == targetValue:
            return mid

        if arr[mid] < targetValue:
            left = mid + 1
        else:
            right = mid - 1

    return -1


myArray = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19]
target = 15

res = binarySearch(myArray, target)
if res != -1:
    print(res)
