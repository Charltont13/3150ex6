#include "int_vector.h"
#include <cassert>
#include <iostream>

void test_basic_constructor() {
    int_vector v;
    assert(v.id == -1 && v.from == 0 && v.to == 0);
    std::cout << "Basic constructor test passed.\n";
}

void test_copy_constructor() {
    int_vector original(1, 2, 3);
    int_vector copy = original;
    assert(copy.id == original.id && copy.from == original.from && copy.to == original.to);
    std::cout << "Copy constructor test passed.\n";
}

void test_file_input() {
    std::vector<int_vector> vectors;
    read_vectors_from_file("test_vectors_2D.txt", vectors);
    std::cout << "File input test passed.\n";
}

void test_empty_file() {
    std::vector<int_vector> vectors;
    read_vectors_from_file("empty_test_vectors_2D.txt", vectors);
    assert(vectors.empty());
    std::cout << "Empty file test passed.\n";
}

int main() {
    test_basic_constructor();
    test_copy_constructor();
    test_file_input();
    test_empty_file();

    return 0;
}
