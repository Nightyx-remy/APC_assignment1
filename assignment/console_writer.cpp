//
// Created by remy on 9/22/22.
//

#include "console_writer.h"
#include <iostream>

lib::console_writer::console_writer() {}

lib::console_writer &lib::console_writer::operator<<(std::string_view str) {
    std::cout << str;
    return *this;
}

lib::console_writer &lib::console_writer::operator<<(const char *str) {
    std::cout << str;
    return *this;
}

lib::console_writer &lib::console_writer::operator<<(char str) {
    std::cout << str;
    return *this;
}
