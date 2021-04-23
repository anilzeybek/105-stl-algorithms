#include <vector>
#include <algorithm>
#include <iostream>

template<typename T>
void print_vector(std::vector<T> v) {
    for (auto e: v)
        std::cout << e << " ";

    std::cout << std::endl;
    std::cout << std::endl;

}

void partition_demo() {
    std::cout << "std::partition" << std::endl;
    std::vector<double> numbers{4, 7, 11, 8, 2, 6};

    // partitions based on even or odd
    std::partition(numbers.begin(), numbers.end(), [](int n) { return n % 2 == 0; });
    print_vector(numbers);
}

void partition_point_demo() {
    std::cout << "std::partition_point" << std::endl;
    std::vector<double> numbers{4, 7, 11, 8, 2, 6};

    std::partition(numbers.begin(), numbers.end(), [](int n) { return n % 2 == 0; });
    // must be partitioned beforehand
    // returns starting iteration of second part
    auto p = std::partition_point(numbers.begin(), numbers.end(), [](int n) { return n % 2 == 0; });
    std::cout << *p << "\n" << std::endl;
}

int main() {
    partition_demo();
    partition_point_demo();
    return 0;
}