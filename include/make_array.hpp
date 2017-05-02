//
// file make_array.hpp
// Created by Bartek
//

#ifndef GOTL_MAKE_ARRAY_HPP
#define GOTL_MAKE_ARRAY_HPP

#include <array>
#include <functional>

namespace gotl {
    namespace detail {
        template<typename T, std::size_t...Is>
        std::array<T, sizeof...(Is)> make_array_detail(const T &value, std::index_sequence<Is...> indexes) {
            return {{(static_cast<void>(Is), value)...}};
        }

        template<typename T, std::size_t...Is>
        std::array<T, sizeof...(Is)>
        make_array_detail(const std::function<T()> &t_maker, std::index_sequence<Is...> indexes) {
            return {{(static_cast<void>(Is), t_maker())...}};
        }

    }

    template<std::size_t N, typename T>
    std::array<T, N> make_array(const T &value) {
        return detail::make_array_detail(value, std::make_index_sequence<N>());
    }

    template<std::size_t N, typename T>
    std::array<T, N> make_array(const std::function<T()> &t_maker) {
        return detail::make_array_detail(t_maker, std::make_index_sequence<N>());
    }
}

#endif //GOTL_MAKE_ARRAY_HPP
