#include "int_vector.h"

int main() {
    std::string filename = "vectors_2D.txt";
    std::vector<int_vector> vectors;

    read_vectors_from_file(filename, vectors);
    print_vectors_in_reverse(vectors);

    return 0;
}
