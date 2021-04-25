#ifndef INC_105_STL_ALGORITHMS_COMMON_H
#define INC_105_STL_ALGORITHMS_COMMON_H


template<typename T>
void print_vector(std::vector<T> v) {
    for (auto e: v)
        std::cout << e << " ";

    std::cout << std::endl;
    std::cout << std::endl;

}

#endif //INC_105_STL_ALGORITHMS_COMMON_H
