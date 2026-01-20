def mergeSort(arr):
    # best case
    if len(arr) <= 1:
        return arr

    mid = len(arr) // 2
    leftHalf = arr[:mid]
    rightHalf = arr[mid:]
    print(leftHalf)
    print(rightHalf)
    sortedLeft = mergeSort(leftHalf)
    sortedRight = mergeSort(rightHalf)

    return merge(sortedLeft, sortedRight)


def merge(left, right):
    result = []
    i = j = 0

    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            result.append(left[i])
            print(result)
            i += 1
        else:
            result.append(right[j])
            print(result)
            j += 1
    result.extend(left[i:])
    result.extend(right[j:])

    return result


array = [9, 3, 5, 2, 6, 7, 1]
sortedArr = mergeSort(array)
print(sortedArr)
