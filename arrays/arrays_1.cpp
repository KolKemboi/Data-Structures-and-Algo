#include <iostream>

int main()
{
    int array[5];
    int array_2[5] = {1, 2, 3, 4, 5};

    std::cout<< "ARRAYS" << std::endl;
    for (int i = 0; i < sizeof(array_2)/sizeof(int); i++)
    {
        std::cout << array_2[i] << " ";
    }
    std::cout << std::endl;

    int matrix[3][3] = {
        {1, 2, 3,},
        {2, 3, 4,},
        {3, 4, 5,},
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
    }
    std::cout << std::endl;
}


