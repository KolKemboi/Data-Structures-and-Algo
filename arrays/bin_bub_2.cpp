#include <iostream>

typedef unsigned int u_int;

template<typename T>
void bubbleSort(T arr[], u_int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                T temp = arr[j];
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
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        if(arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;

}

int main()
{
    int array[] = {4, 3, 2, 1};
    u_int size = static_cast<u_int>(sizeof(array) / sizeof(int));
    bubbleSort(array, size);
    for (int x : array) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    std::cout << binarySearch(array, size, 4) <<std::endl; 
}
