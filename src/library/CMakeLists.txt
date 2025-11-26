add_library(mylib)

target_sources(mylib
    PRIVATE 
        library.cpp
    PUBLIC
        library.hpp
)

target_include_directories(mylib PUBLIC include)

# Link fmt to the library if you use it inside library.cpp
target_link_libraries(mylib PRIVATE fmt::fmt)

# Optional: make an alias for easier usage
add_library(cmake_example::library ALIAS mylib)
