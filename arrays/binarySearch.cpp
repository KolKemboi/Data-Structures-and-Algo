#include <iostream>


int binarySearch(int arr[], int size, int target)
{
    int left = 0, right = size  -1;

    while(left <= right)
    {
        int mid = left + (right - left)/2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }

    return -1;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto info = binarySearch(array, sizeof(array)/sizeof(int), 5);

    std::cout << info << std::endl;

}