#include <vector>
#include <algorithm>
#include <iostream>
#include <random>
#include "common.h"


void rotate_demo() {
    std::cout << "std::rotate" << std::endl;
    std::vector<double> numbers{4, 7, 11, 8, 2, 6};

    // takes from the middle, and rotates from there
    std::rotate(numbers.begin(), numbers.begin() + 2, numbers.end());
    print_vector(numbers);
}

void shuffle_demo() {
    std::cout << "std::shuffle" << std::endl;
    std::vector<double> numbers{4, 7, 11, 8, 2, 6};

    auto rng = std::default_random_engine();
    std::shuffle(numbers.begin(), numbers.end(), rng);
    print_vector(numbers);
}

void next_permutation_demo() {
    std::cout << "std::next_permutation" << std::endl;
    std::vector<double> numbers{1, 2, 3, 4, 5};

    std::next_permutation(numbers.begin(), numbers.end());
    print_vector(numbers);
}

void prev_permutation_demo() {
    std::cout << "std::next_permutation" << std::endl;
    std::vector<double> numbers{1, 2, 3, 4, 5};

    std::prev_permutation(numbers.begin(), numbers.end());
    print_vector(numbers);
}

void reverse_demo() {
    std::cout << "std::reverse" << std::endl;
    std::vector<double> numbers{4, 2, 7, 8, 1, 232};

    std::reverse(numbers.begin(), numbers.end());
    print_vector(numbers);
}


int main() {
    rotate_demo();
    shuffle_demo();
    next_permutation_demo();
    prev_permutation_demo();
    reverse_demo();

    return 0;
}