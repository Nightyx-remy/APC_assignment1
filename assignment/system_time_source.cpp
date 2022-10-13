#include "system_time_source.h"
#include <ctime>

namespace lib {

    system_time_source::system_time_source() noexcept = default;

    std::string system_time_source::timestamp() const {
        auto time_point = std::time(nullptr);
        auto local_time = std::localtime(&time_point);
        char buffer[16];
        std::strftime(&buffer[0], sizeof(buffer), "%H:%M:%S", local_time);
        return std::string {buffer};
    }

}