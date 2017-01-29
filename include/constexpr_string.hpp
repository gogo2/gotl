//
// file constexpr_string.hpp
// Created by Bartek
//

#ifndef GOTL_CONSTEXPR_STRING_HPP
#define GOTL_CONSTEXPR_STRING_HPP

namespace gotl {
    template<std::size_t SIZE>
    class ce_string {
    public:

        constexpr ce_string() : _data{} {}

        constexpr ce_string(const char data[SIZE]) : _data() {
            for (std::size_t i = 0; i < SIZE; ++i)
                _data[i] = data[i];
        }

        void fill(const char &value) noexcept {
            for (char &c:_data)
                c = value;
        }

        char &at(const std::size_t &n) {
            if (n >= SIZE)
                throw std::out_of_range("out_of_range: " + std::to_string(n));
            return _data[n];
        }

        constexpr const char &at(const std::size_t &n) const {
            if (n >= SIZE)
                throw std::out_of_range("out_of_range:" + std::to_string(n));
            return _data[n];
        }

        constexpr std::size_t size() const noexcept {
            return SIZE;
        }

        constexpr std::size_t length() const noexcept {
            return SIZE;
        }

        constexpr std::size_t max_size() const noexcept {
            return SIZE;
        }

        constexpr bool empty() const noexcept {
            return SIZE == 0;
        }

    private:
        char _data[SIZE];

    };

}


#endif //GOTL_CONSTEXPR_STRING_HPP
