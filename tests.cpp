#include <iostream>
#include "DynamicArr.h"

void test_constructor_default() {
    DynamicArr arr;
    std::cout << "Тест конструктора класса без параметров: "
              << ((arr.size() == 0) && (arr.capacity() == 1) ? "Passed" : "Failed")
              << std::endl;
}

void test_constructor_with_size() {
    DynamicArr arr(5, 3.5);
    std::cout << "Тест конструктора класса с указанием размера: "
              << ((arr.size() == 5) && (arr.capacity() >= 5) && (arr[0] == 3.5) ? "Passed" : "Failed")
              << std::endl;
}

void test_copy_constructor() {
    DynamicArr arr(5, 2.0);
    DynamicArr copy_arr = arr;

    bool passed = true;
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] != copy_arr[i]) {
            passed = false;
            break;
        }
    }
    std::cout << "Тест конструктора копирования: " << (passed ? "Passed" : "Failed") << std::endl;
}

void test_push_back() {
    DynamicArr arr;
    arr.push_back(1.1);
    arr.push_back(2.2);
    arr.push_back(3.3);

    bool passed = (arr.size() == 3) && (arr[0] == 1.1) && (arr[1] == 2.2) && (arr[2] == 3.3);
    std::cout << "Текст push_back: " << (passed ? "Passed" : "Failed") << std::endl;
}

void test_assignment_operator() {
    DynamicArr arr1(3, 4.0);
    DynamicArr arr2;
    arr2 = arr1;

    bool passed = (arr1.size() == arr2.size()) && (arr1.capacity() == arr2.capacity());
    for (size_t i = 0; i < arr1.size(); ++i) {
        if (arr1[i] != arr2[i]) {
            passed = false;
            break;
        }
    }
    std::cout << "Тест оператора []: " << (passed ? "Passed" : "Failed") << std::endl;
}
