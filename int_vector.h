#ifndef INT_VECTOR_H
#define INT_VECTOR_H

#include <vector>
#include <string>

struct int_vector {
    int id;
    int from;
    int to;

    int_vector(const int_vector &i_v);
    int_vector();
    int_vector(int id, int from, int to);
};

void read_vectors_from_file(const std::string &filename, std::vector<int_vector> &vectors);
void print_vectors_in_reverse(const std::vector<int_vector> &vectors);

#endif
