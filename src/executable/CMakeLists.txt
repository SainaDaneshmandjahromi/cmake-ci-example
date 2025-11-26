add_executable(main_exec main.cpp)

# Link library and fmt
target_link_libraries(main_exec
    PRIVATE
        mylib
        fmt::fmt  # Only needed if main.cpp uses fmt
)

target_compile_features(main_exec PRIVATE cxx_std_17)
