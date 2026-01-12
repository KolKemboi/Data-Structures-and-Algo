#!/usr/bin/python3

array = [64, 34, 25, 12, 22, 11, 90, 5]

n = len(array)
# version one
for i in range(n-1):
    for j in range(n-i-1):
        if array[j] > array[j+1]:
            array[j], array[j+1] = array[j+1], array[j]

print("Sorted", array)

# version two

array = [9, 4, 6, 1, 5, 2]

n = len(array)
for i in range(n-1):
    swapped = False
    for j in range(n-i-1):
        if array[j] > array[j+1]:
            array[j], array[j+1] = array[j+1], array[j]
            swapped = True
    if not swapped:
        break
print(array)

# redo

array = [9, 6, 5, 7, 1, 4, 2]
n = len(array)

for i in range(n - 1):
    for j in range(n - i - 1):
        if array[j] > array[j+1]:
            array[j], array[j+1] = array[j+1], array[j]

print(array)
