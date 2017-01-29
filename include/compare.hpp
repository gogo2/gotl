//
// file compare.hpp
// Created by Bartek
//

#ifndef GOTL_COMPARE_HPP
#define GOTL_COMPARE_HPP

namespace gotl {

    template<typename T>
    struct dereference_compare {
        bool operator()(const T &lhs, const T &rhs) const {
            return *lhs == *rhs;
        }
    };

}

#endif //GOTL_COMPARE_HPP
