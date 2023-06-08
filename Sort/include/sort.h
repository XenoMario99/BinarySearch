#pragma once

namespace sort {
void quickSort(int *tab, int low, int high);
void partition(int *tab, int low, int high, int &pivotPoint);
void print(int *tab, int n);
} // namespace sort