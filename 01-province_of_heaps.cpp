#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>

template<typename T>
void print_vector(std::vector<T> v) {
    for (auto e: v)
        std::cout << e << " ";

    std::cout << std::endl;
    std::cout << std::endl;

}

void make_heap_demo() {
    std::cout << "std::make_heap" << std::endl;
    std::vector<double> numbers(10);
    std::iota(numbers.begin(), numbers.end(), 0);

    std::make_heap(numbers.begin(), numbers.end());
    print_vector(numbers);
}

void push_heap_demo() {
    std::cout << "std::push_heap" << std::endl;

    std::vector<double> numbers(10);
    std::iota(numbers.begin(), numbers.end(), 0);

    numbers.push_back(8.88);
    std::push_heap(numbers.begin(), numbers.end());
    print_vector(numbers);
}

void pop_heap_demo() {
    std::cout << "std::pop_heap" << std::endl;

    std::vector<double> numbers(10);
    std::iota(numbers.begin(), numbers.end(), 0);
    std::pop_heap(numbers.begin(), numbers.end());
    print_vector(numbers);
}

void sort_heap_demo() {
    std::cout << "std::sort_heap" << std::endl;

    std::vector<double> numbers(10);
    std::iota(numbers.begin(), numbers.end(), 0);
    std::sort_heap(numbers.begin(), numbers.end());
    print_vector(numbers);
}

int main() {
    make_heap_demo();
    push_heap_demo();
    pop_heap_demo();
    sort_heap_demo();

    return 0;
}
