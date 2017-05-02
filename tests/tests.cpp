//
// file tests.cpp
// Created by Bartek
//

#include <vector>
#include <iostream>
#include <foreach.hpp>
#include <make_array.hpp>
#include <random>

namespace tester {
    using namespace std;


    void foreach_test() {
        std::vector<int> v{1, 2, 3, 4, 5};
        gotl::for_each(v, [](int &i) { i = i * i; });
        gotl::for_each(v, [](int &i) { std::cout << i << " "; });


        constexpr std::array<char, 5> gg{"sd5g"};
        gotl::for_each(gg, [](const char &c) { std::cout << c; });

    }

    void make_array_test() {
        static std::uniform_real_distribution<double> dist{5, 10};
        static std::default_random_engine random_engine;

        std::array<double, 5> arr1 = gotl::make_array<5, double>(0.);
        std::array<double, 5> arr2 = gotl::make_array<5, double>(
                [&dist, &random_engine]() { return dist(random_engine); });
        for (const auto &x:arr1)
            std::cout << x << ' ';
        std::cout << '\n';
        for (const auto &x:arr2)
            std::cout << x << ' ';


    }


}
