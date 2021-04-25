#include <vector>
#include <algorithm>
#include <iostream>
#include "common.h"

void stable_sort_demo() {
    std::cout << "std::stable_sort" << std::endl;
    std::vector<double> numbers{4, 7, 11, 8, 2, 6, 8};

    // Sorts the elements but order of equivalent elements is guaranteed to be preserved
    std::stable_sort(numbers.begin(), numbers.end());
    print_vector(numbers);
}

void stable_partition_demo() {
    std::cout << "std::stable_partition" << std::endl;
    std::vector<double> numbers{4, 7, 11, 8, 2, 6, 8};

    // Partitions the elements but order of equivalent elements is guaranteed to be preserved
    std::stable_partition(numbers.begin(), numbers.end(), [](int n) { return n % 2 == 0; });
    print_vector(numbers);
}

void is_sorted_demo() {
    std::cout << "std::is_sorted" << std::endl;
    std::vector<double> numbers{4, 7, 11, 8, 2, 6, 8};

    bool r = std::is_sorted(numbers.begin(), numbers.end());
    std::cout << "sorted: " << r << std::endl;
    print_vector(numbers);
}

void is_partitioned_demo() {
    std::cout << "std::is_partitioned" << std::endl;
    std::vector<double> numbers{2, 6, 8, 3, 5, 9};

    bool r = std::is_partitioned(numbers.begin(), numbers.end(), [](int n) { return n % 2 == 0; });
    std::cout << "partitioned by even/odd property: " << r << std::endl;
    print_vector(numbers);
}

void is_heap_demo() {
    std::cout << "std::is_heap" << std::endl;
    std::vector<double> numbers{9, 8, 6, 7, 4, 5, 2, 0, 3, 1};

    bool r = std::is_heap(numbers.begin(), numbers.end());
    std::cout << "heap: " << r << std::endl;
    print_vector(numbers);
}

void is_sorted_until_demo() {
    std::cout << "std::is_sorted_until" << std::endl;
    std::vector<double> numbers{4, 7, 11, 8, 2, 6, 8};

    auto r = std::is_sorted_until(numbers.begin(), numbers.end());
    std::cout << "sorted until but not included: " << *r << std::endl;
    print_vector(numbers);
}

void is_heap_until_demo() {
    std::cout << "std::is_heap_until" << std::endl;
    std::vector<double> numbers{9, 8, 6, 7, 4, 5, 2, 0, 1, 3};

    auto r = std::is_heap_until(numbers.begin(), numbers.end());
    std::cout << "heap until bot not included: " << *r << std::endl;
    print_vector(numbers);
}

int main() {
    stable_sort_demo();
    stable_partition_demo();
    is_sorted_demo();
    is_partitioned_demo();
    is_heap_demo();
    is_sorted_until_demo();
    is_heap_until_demo();
    return 0;
}