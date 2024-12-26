#include <iostream>

int main()
{
    int arr_size;
    std::cout << "arr_size : ";
    std::cin >> arr_size;

    int *list = new int[arr_size];
    // T *list = new T[arr_size]; T 를 임의의 타임으로 지정

    for (int i = 0; i < arr_size; i++)
    {
        std::cin >> list[i];
    }

    for (int i = 0; i < arr_size; i++)
    {
        std::cout << i << "th element of list : " << list[i] << std::endl;
    }
    delete[] list;
    return 0;
}