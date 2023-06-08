#include <time.h>

#include <iostream>

#include "finder.h"
#include "sort.h"

int main() {
    const int n = 8;
    int tab[n];

    std::srand(time(NULL));

    for (int i = 0; i < n - 1; i++) {
        tab[i] = rand() % 100 + 1;
    }

    std::cout << "Before sort" << std::endl;
    sort::print(tab, n);

    sort::quickSort(tab, 0, n);
    std::cout << "After sort" << std::endl;
    sort::print(tab, n);

    int target = tab[n / 2];
    std::cout << "Target = " << target << std::endl;

    std::cout << "Position: " << finder::location(tab, target, 0, n) << std::endl;

    return 0;
}