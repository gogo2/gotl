//
// file constexpr_string.hpp
// Created by Bartek
//

#ifndef GOTL_CONSTEXPR_STRING_HPP
#define GOTL_CONSTEXPR_STRING_HPP


namespace gotl {
    template<std::size_t N, typename CHAR_T = char>
    class ce_string {
    public:
        constexpr ce_string() : _data{0}, _length(0) {}

        constexpr ce_string(const char data[]) : _data{}, _length() { //TODO what if too long
            std::size_t i = 0;
            while (i < N && data[i] != 0) {
                _data[i] = data[i];
                ++i;
            }
            _data[i] = 0;
            _data[N] = 0;
            _length = i;
        }

        void fill(const CHAR_T &value) noexcept {
            for (CHAR_T &c:_data)
                c = value;
        }

        CHAR_T &at(const std::size_t &n) {
            if (n >= N)
                throw std::out_of_range("out_of_range: " + std::to_string(n));
            return _data[n];
        }

        constexpr const CHAR_T &at(const std::size_t &n) const {
            if (n >= N)
                throw std::out_of_range("out_of_range:" + std::to_string(n));
            return _data[n];
        }

        constexpr std::size_t size() const noexcept {
            return _length;
        }

        constexpr std::size_t length() const noexcept {
            return _length;
        }

        constexpr std::size_t max_size() const noexcept {
            return N;
        }

        constexpr bool empty() const noexcept {
            return _length == 0;
        }

        constexpr const CHAR_T *c_str() const noexcept {
            return _data;
        }

        constexpr const CHAR_T *data() const noexcept {
            return _data;
        }

        CHAR_T *data() noexcept {
            return _data;
        }

        constexpr const CHAR_T &front() const noexcept {
            return _data[0];
        }

        CHAR_T &front() noexcept {
            return _data[0];
        }

        constexpr const CHAR_T &back() const noexcept {
            return _data[_length - 1];
        }

        CHAR_T &back() noexcept {
            return _data[_length - 1];
        }

        CHAR_T &operator[](const std::size_t &n) noexcept {
            return _data[n];
        }

        constexpr const CHAR_T &operator[](const std::size_t &n) const noexcept {
            return _data[n];
        }


    private:
        CHAR_T _data[N + 1];
        std::size_t _length;
    };

}


#endif //GOTL_CONSTEXPR_STRING_HPP
