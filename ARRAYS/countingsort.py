array = [9, 3, 5, 2, 6, 7, 1]


def counting_sort(array):
    if not array:
        return array

    max_val = max(array)
    count = [0] * (max_val + 1)

    for num in array:
        count[num] += 1

    array[:] = []

    for num, freq in enumerate(count):
        array.extend([num] * freq)

    return array


new_array = counting_sort(array)

print(array)
