//
// file foreach.hpp
// Created by Bartek
//

#ifndef GOTL_FOREACH_HPP
#define GOTL_FOREACH_HPP

namespace gotl {
    template<typename T, typename F>
    inline void for_each(T &t, F func) {
        for (auto &x:t)
            func(x);
    }

    template<typename T, typename F>
    constexpr void for_each(const T &t, F func) {
        for (const auto &x:t)
            func(x);
    }
}

#endif //GOTL_FOREACH_HPP
