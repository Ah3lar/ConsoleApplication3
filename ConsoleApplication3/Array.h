#pragma once
#include <iostream>

template <typename T>
class Array {
private:
    T* data;
    size_t size;
    size_t capacity;

    void resize(size_t newCapacity) {
        T* newData = new T[newCapacity];
        for (size_t i = 0; i < size; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        capacity = newCapacity;
    }

public:
    Array(size_t initialCapacity = 10)
        : size(0), capacity(initialCapacity) {
        data = new T[capacity];
    }

    ~Array() {
        delete[] data;
    }

    T& operator[](size_t index) {
        if (index >= size) {
            std::cerr << "Index out of range" << std::endl;
            static T dummy;
            return dummy;
        }
        return data[index];
    }

    const T& operator[](size_t index) const {
        if (index >= size) {
            std::cerr << "Index out of range" << std::endl;
            static T dummy;
            return dummy;
        }
        return data[index];
    }

    size_t getSize() const {
        return size;
    }

    size_t getCapacity() const {
        return capacity;
    }
};