//
// file constexpr_utils.hpp
// Created by Bartek
//

#ifndef GOTL_CONSTEXPR_UTILS_HPP
#define GOTL_CONSTEXPR_UTILS_HPP

#include <cstddef>

namespace gotl {
    template<typename CHAR_T>
    constexpr std::size_t cx_strlen(const CHAR_T str[]) {
        return 0;
    }

    template<>
    constexpr std::size_t cx_strlen<char>(const char str[]) {
        std::size_t len = 0;
        while (str[len] != '\0')
            ++len;
        return len;
    }

    template<>
    constexpr std::size_t cx_strlen<wchar_t>(const wchar_t str[]) {
        std::size_t len = 0;
        while (str[len] != L'\0')
            ++len;
        return len;
    }

    template<>
    constexpr std::size_t cx_strlen<char16_t>(const char16_t str[]) {
        std::size_t len = 0;
        while (str[len] != u'\0')
            ++len;
        return len;
    }

    template<>
    constexpr std::size_t cx_strlen<char32_t>(const char32_t str[]) {
        std::size_t len = 0;
        while (str[len] != U'\0')
            ++len;
        return len;
    }

    template<typename CHAR_T>
    constexpr void cx_strcpy(const CHAR_T src[], const CHAR_T dest[]) {

    }


}

#endif //GOTL_CONSTEXPR_UTILS_HPP
