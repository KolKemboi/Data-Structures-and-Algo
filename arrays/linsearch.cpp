#include <iostream>


int linsearch(int array[], int size, int target)
{
    for(int i = 0; i < size; i++)
    {
        if(array[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int index = linsearch(array, sizeof(array)/sizeof(int), 5);
    std::cout << index  << std::endl;
}