#include "library.hpp"
#include <fmt/core.h>

std::string get_message() {
    return fmt::format("Hello from mylib!");
}
