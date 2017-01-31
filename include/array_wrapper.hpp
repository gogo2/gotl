//
// file array_wrapper.hpp
// Created by Bartek
//

#ifndef GOTL_ARRAY_WRAPPER_HPP
#define GOTL_ARRAY_WRAPPER_HPP


#include <cstddef>

namespace gotl {
    template<std::size_t N, typename T>
    struct array_wrapper {
        T _array[N];

        T &operator[](const std::size_t &n) noexcept {
            return _array[n];
        }

        constexpr const T &operator[](const std::size_t &n) const noexcept {
            return _array[n];
        }
    };
}

#endif //GOTL_ARRAY_WRAPPER_HPP
