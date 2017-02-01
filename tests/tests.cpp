//
// file tests.cpp
// Created by Bartek
//

#include <vector>
#include <iostream>
#include <foreach.hpp>
#include <constexpr_string.hpp>
#include <array>

namespace tester {
    using namespace std;

    void dd(const char data[]) {
        printf("%d", (int) sizeof(data));
    }

    void foreach_test() {
        std::vector<int> v{1, 2, 3, 4, 5};
        gotl::for_each(v, [](int &i) { i = i * i; });
        gotl::for_each(v, [](int &i) { std::cout << i << " "; });


        constexpr std::array<char, 5> gg{"sd5g"};
        gotl::for_each(gg, [](const char &c) { std::cout << c; });

    }

    void ce_string_test() {
        constexpr gotl::cx_string<4> d("abzj");
        static_assert(d.at(0) == 'a', "dd");
        printf("%s\n", d.c_str());
        for (int i = 0; i < d.length(); ++i)
            printf("%c", d.at(i));
        std::cout << std::endl << d;

        constexpr std::array<char, (int) d.at(3)> g{"sd"};
    }

}
