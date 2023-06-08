#include "../include/finder.h"

int finder::location(int *tab, int target, int lowIndex, int highIndex) {
    if (highIndex - lowIndex < 0) {
        std::cout << "Given number is not present in the array" << std::endl;
        return -1;
    }

    int mid = (lowIndex + highIndex) / 2;

    if (tab[mid] == target) {
        return mid;
    } else if (tab[mid] > target) {
        return location(tab, target, lowIndex, mid - 1);
    } else {
        return location(tab, target, mid + 1, highIndex);
    }
}
