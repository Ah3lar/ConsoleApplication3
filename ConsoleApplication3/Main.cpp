#include <iostream>
#include "Array.h"

int main() {
    Array<int> arr;

    std::cout << "Array created with size: " << arr.getSize() << " and capacity: " << arr.getCapacity() << std::endl;

    return 0;
}