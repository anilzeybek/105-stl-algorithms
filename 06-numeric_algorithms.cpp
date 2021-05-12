#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <random>
#include "common.h"

void count_demo() {
    std::cout << "std::count" << std::endl;
    std::vector<double> numbers{4, 7, 11, 8, 2, 6, 8};

    int r = std::count(numbers.begin(), numbers.end(), 8);
    std::cout << "vector contains " << r << " times the value 8" << std::endl;
    print_vector(numbers);
}

void accumulate_demo() {
    std::cout << "std::accumulate" << std::endl;
    std::vector<double> numbers{3, 7, 11, 4};

    double r = std::accumulate(numbers.begin(), numbers.end(), 0.0);
    std::cout << "vector's sum is " << r << std::endl;
    print_vector(numbers);
}

void partial_sum_demo() {
    std::cout << "std::partial_sum" << std::endl;
    std::vector<double> numbers{1, 2, 3, 4, 5};

    std::partial_sum(numbers.begin(), numbers.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::cout << "This is the accumulated sum of elements of this vector: " << std::endl;
    print_vector(numbers);
}

void inner_product_demo() {
    std::cout << "std::inner_product" << std::endl;
    std::vector<double> numbers1{1, 2, 3};
    std::vector<double> numbers2{3, 1, 5};

    double r = std::inner_product(numbers1.begin(), numbers1.end(), numbers2.begin(), 0.0);
    std::cout << "Inner product result: " << r << std::endl;
}

void adjacent_difference_demo() {
    std::cout << "std::adjacent_difference" << std::endl;
    std::vector<double> numbers{1, 2, 5, 9, 7};

    double result[5];
    std::adjacent_difference(numbers.begin(), numbers.end(), result);

    std::vector<double> result_vec;
    result_vec.insert(result_vec.begin(), std::begin(result), std::end(result));
    std::cout << "Adjacent differences are: " << std::endl;
    print_vector(result_vec);
}

void sample_demo() {
    std::cout << "std::sample" << std::endl;
    std::vector<double> numbers{3, 7, 11, 4};
    std::vector<double> r;

    std::sample(numbers.begin(), numbers.end(), std::back_inserter(r),
                2, std::mt19937{std::random_device{}()});
    print_vector(r);
}

int main() {
    count_demo();
    accumulate_demo();
    partial_sum_demo();
    inner_product_demo();
    adjacent_difference_demo();
    sample_demo();
    return 0;
}