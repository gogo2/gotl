project(GOTLib)

set(LIB_FILES
        ../include/foreach.hpp
        ../include/compare.hpp
        ../include/constexpr_string.hpp
        )

add_library(GOTL STATIC ${LIB_FILES})

set_target_properties(GOTL PROPERTIES LINKER_LANGUAGE CXX)