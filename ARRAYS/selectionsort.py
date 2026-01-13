array = [22, 45, 12, 4, 10, 0, 1, 70]

n = len(array)
for i in range(n-1):
    min_idx = i
    for j in range(i+1, n):
        if array[j] < array[min_idx]:
            min_idx = j
    min_val = array.pop(min_idx)
    array.insert(i, min_val)
print(array)
