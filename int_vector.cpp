#include "int_vector.h"
#include <fstream>
#include <iostream>

int_vector::int_vector(const int_vector &i_v) : id(i_v.id), from(i_v.from), to(i_v.to) {}

int_vector::int_vector() : id(-1), from(0), to(0) {}

int_vector::int_vector(int id, int from, int to) : id(id), from(from), to(to) {}

void read_vectors_from_file(const std::string &filename, std::vector<int_vector> &vectors) {
    std::ifstream file(filename);
    int from, to;
    int id = 0;

    while (file >> from >> to) {
        vectors.push_back(int_vector(id++, from, to));
    }

    file.close();
}

void print_vectors_in_reverse(const std::vector<int_vector> &vectors) {
    for (int i = vectors.size() - 1; i >= 0; --i) {
        std::cout << vectors[i].id << ": " << vectors[i].from << " " << vectors[i].to << std::endl;
    }
}
