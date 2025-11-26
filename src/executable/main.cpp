#include <iostream>
#include <fmt/core.h>
#include "../library/library.hpp"

int main() {
    std::string msg = get_message();
    fmt::print("Message from library: {}\n", msg);
    return 0;
}
