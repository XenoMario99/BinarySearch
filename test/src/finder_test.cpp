#include "finder.h"

#include <gtest/gtest.h>

#include <algorithm>
#include <random>
#include <vector>

#include "sort.h"

TEST(FinderTest, findNumberIncludedInArray) {
    const int n = 20;

    std::vector<int> vec(n);
    int tab[n];

    std::random_device rnd;
    std::mt19937 engine{rnd()};
    std::uniform_int_distribution<int> distr{1, 100};

    auto gen = [&distr, &engine]() {
        return distr(engine);
    };

    std::generate(vec.begin(), vec.end(), gen);

    for (int i = 0; i < n; i++) {
        tab[i] = vec[i];
    }

    std::sort(vec.begin(), vec.end());

    int targetPos = n / 2;
    int target = vec[targetPos];

    sort::quickSort(tab, 0, n);
    int resultPos = finder::location(tab, target, 0, n);

    EXPECT_EQ(targetPos, resultPos);
}
