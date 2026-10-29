/*
    sort.cpp

    Sorting functions
*/

#include "sort.hpp"

namespace {

    void order(int& n1, int& n2) {

        if (n1 > n2) {
            auto t = n1;
            n1 = n2;
            n2 = t;
        }
    }
}

// sort the entire vector in place in ascending order
void sort(std::vector<int>& v) {

    for (std::size_t i = 1; i < v.size(); ++i)
        for (int j = i; j > 0; --j)
            order(v[j - 1], v[j]);
}
