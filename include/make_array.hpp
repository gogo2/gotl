//
// file make_array.hpp
// Created by Bartek
//

#ifndef GOTL_MAKE_ARRAY_HPP
#define GOTL_MAKE_ARRAY_HPP

#include <array>

namespace gotl {
    namespace detail {
        template<typename T, std::size_t...Is>
        std::array<T, sizeof...(Is)> make_array_detail(const T &value, std::index_sequence<Is...> indexes) {
            return {{(static_cast<void>(Is), value)...}};
        }

    }

    template<std::size_t N, typename T>
    std::array<T, N> make_array(const T &value) {
        return detail::make_array_detail(value, std::make_index_sequence<N>());
    }
}

#endif //GOTL_MAKE_ARRAY_HPP
