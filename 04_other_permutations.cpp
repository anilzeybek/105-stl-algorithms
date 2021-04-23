#include <vector>
#include <algorithm>
#include <iostream>
#include <random>


template<typename T>
void print_vector(std::vector<T> v) {
    for (auto e: v)
        std::cout << e << " ";

    std::cout << std::endl;
    std::cout << std::endl;

}

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

int main() {
    rotate_demo();
    shuffle_demo();
    return 0;
}