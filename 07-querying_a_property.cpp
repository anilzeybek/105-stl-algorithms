#include <vector>
#include <algorithm>
#include <iostream>
#include "common.h"

void all_of_demo() {
    std::cout << "std::all_of" << std::endl;
    std::vector<double> numbers{4, 7, 11, 8, 5, 6, 8};

    bool r = std::all_of(numbers.begin(), numbers.end(), [](double d) { return d > 3; });
    std::cout << "all elements are greater than 3: " << r << std::endl;
    print_vector(numbers);
}

void any_of_demo() {
    std::cout << "std::any_of" << std::endl;
    std::vector<int> numbers{4, 7, 11, 8, 5, 6, 8};

    bool r = std::any_of(numbers.begin(), numbers.end(), [](int n) { return n % 2 == 0; });
    std::cout << "any element is even: " << r << std::endl;
    print_vector(numbers);
}

void none_of_demo() {
    std::cout << "std::none_of" << std::endl;
    std::vector<int> numbers{4, 7, 11, 8, 5, 6, 8};

    bool r = std::none_of(numbers.begin(), numbers.end(), [](int n) { return n % 2 == 0; });
    std::cout << "none element is even: " << r << std::endl;
    print_vector(numbers);
}

void equal_demo() {
    std::cout << "std::equal" << std::endl;
    std::vector<int> numbers1{4, 7, 11, 8, 5, 6, 8};
    std::vector<int> numbers2{4, 7, 11, 8, 5, 6, 8};

    // same elements & same order
    bool r = std::equal(numbers1.begin(), numbers1.end(), numbers2.begin());
    std::cout << "two vectors equal: " << r << std::endl << std::endl;
}

void is_permutation_demo() {
    std::cout << "std::is_permutation" << std::endl;
    std::vector<int> numbers1{4, 7, 11, 8, 5, 6, 8};
    std::vector<int> numbers2{4, 7, 8, 5, 6, 8, 11};

    // same elements, order can be different
    bool r = std::is_permutation(numbers1.begin(), numbers1.end(), numbers2.begin());
    std::cout << "is permutation: " << r << std::endl << std::endl;
}

void lexicographical_compare_demo() {
    std::cout << "std::lexicographical_compare" << std::endl;
    std::vector<char> chars1{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    std::vector<char> chars2{'a', 'b', 'c', 'd', 'y', 'z'};

    bool r = std::lexicographical_compare(chars1.begin(), chars1.end(), chars2.begin(), chars2.end());
    std::cout << "first one has smaller lexicographical order: " << r << std::endl << std::endl;
}

void mismatch_demo() {
    std::cout << "std::mismatch" << std::endl;
    std::vector<int> numbers1{1, 2, 3, 4, 5};
    std::vector<int> numbers2{1, 2, 3, 4, 7, 11};

    // returns pair of iterators pointing to the mismatch location
    auto r = std::mismatch(numbers1.begin(), numbers1.end(), numbers2.begin());
    std::cout << "mismatch broken on first vector at the element: " << *r.first << std::endl << std::endl;
}

int main() {
    all_of_demo();
    any_of_demo();
    none_of_demo();
    equal_demo();
    is_permutation_demo();
    lexicographical_compare_demo();
    mismatch_demo();
    return 0;
}