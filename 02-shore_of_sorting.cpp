#include <vector>
#include <algorithm>
#include <iostream>
#include "common.h"



void sort_demo() {
    std::cout << "std::sort" << std::endl;
    std::vector<double> numbers{4, 7, 11, 8, 2, 6};

    std::sort(numbers.begin(), numbers.end());
    print_vector(numbers);
}

void partial_sort_demo() {
    std::cout << "std::partial_sort" << std::endl;
    std::vector<double> numbers{4, 7, 11, 8, 2, 6};

    std::partial_sort(numbers.begin(), numbers.begin() + 2, numbers.end());
    print_vector(numbers);
}

void nth_element_demo() {
    std::cout << "std::nth_element" << std::endl;
    std::vector<double> numbers{4, 7, 11, 8, 2, 6};

    std::nth_element(numbers.begin(), numbers.begin() + 4, numbers.end());
    print_vector(numbers);
}

void inplace_merge_demo() {
    std::cout << "std::nth_element" << std::endl;
    std::vector<double> numbers{4, 7, 11, 2, 5, 12};

    // Merges the first part and second part of the vector that's divided from middle
    std::inplace_merge(numbers.begin(), numbers.begin() + 3, numbers.end());
    print_vector(numbers);
}

int main() {
    sort_demo();
    partial_sort_demo();
    nth_element_demo();
    inplace_merge_demo();

    return 0;
}
