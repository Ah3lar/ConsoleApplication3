#include <iostream>
#include "Array.h"

int main() {
    Array<int> arr;

    std::cout << "Appending elements: ";
    for (int i = 1; i <= 5; ++i) {
        arr.Append(i);
        std::cout << arr[i - 1] << " ";
    }
    std::cout << std::endl;

    std::cout << "Array size: " << arr.getSize() << std::endl;
    std::cout << "Array capacity: " << arr.getCapacity() << std::endl;

    std::cout << "Removing element at index 2" << std::endl;
    arr.Remove(2);

    std::cout << "Array after removal: ";
    for (size_t i = 0; i < arr.getSize(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}