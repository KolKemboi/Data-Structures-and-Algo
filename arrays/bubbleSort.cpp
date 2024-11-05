#include <iostream>

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size -1; i++)
    {
        for (int j = 0; j < size -i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main()
{
    int array[] = {2, 5, 3, 9, 5, 3, 3, 0};
    bubbleSort(array, sizeof(array)/ sizeof(int)) ;
    for (int i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        std::cout << array[i] << std::endl;
    }
}