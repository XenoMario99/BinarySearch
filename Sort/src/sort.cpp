#include "../include/sort.h"

#include <iostream>

void sort::quickSort(int *tab, int low, int high) {
    int pivot = 0;

    if (low < high) {
        partition(tab, low, high, pivot);
        quickSort(tab, low, pivot);
        quickSort(tab, pivot + 1, high);
    }
}

void sort::partition(int *tab, int low, int high, int &pivotPoint) {
    int i = low + 1, j = low;
    int pivotItem = tab[low];

    for (i; i < high; i++) {
        if (pivotItem > tab[i]) {
            j++;
            int bufor = tab[j];
            tab[j] = tab[i];
            tab[i] = bufor;
        }
    }

    pivotPoint = j;
    int bufor = tab[low];
    tab[low] = tab[pivotPoint];
    tab[pivotPoint] = bufor;
}

void sort::print(int *tab, int n) {
    std::cout << "\n";
    for (int i = 0; i < n; i++) {
        std::cout << tab[i] << " ";
    }
    std::cout << "\n\n";
}