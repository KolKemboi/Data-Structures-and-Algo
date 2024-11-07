#include <iostream>

typedef unsigned int u_int;

template<typename T>
void bubbleSort(T arr[], u_int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                T temp = arr[j];  // Use the same type T as the array
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template<typename T>
T binarySearch(T arr[], u_int size, T target)
{
    int left = 0, right = size - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if(arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main()
{
    // Testing with integer array
    {
        int int_array[] = {2, 5, 3, 7, 9, 1, 6, 4};
        bubbleSort(int_array, static_cast<u_int>(sizeof(int_array) / sizeof(int)));
        for (int x : int_array) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
        std::cout << binarySearch(int_array, static_cast<u_int>(sizeof(int_array) / sizeof(int)), 5) << std::endl;
    }

    // Testing with float array
    {
        float float_array[] = {2.0f, 5.1f, 3.3f, 7.9f, 5.2f, 1.0f, 0.6f, 0.04f};
        bubbleSort(float_array, static_cast<u_int>(sizeof(float_array) / sizeof(float)));
        for (float x : float_array) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
        std::cout << binarySearch(float_array, static_cast<u_int>(sizeof(float_array) / sizeof(float)), 5.2f) << std::endl;
    }

    return 0;
}
