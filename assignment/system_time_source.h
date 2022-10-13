#ifndef LESSON_SYSTEM_TIME_SOURCE_H
#define LESSON_SYSTEM_TIME_SOURCE_H

#include "itime_source.h"
#include <string>

namespace lib {

    class system_time_source : public time_sources::itime_source {
        public:
            system_time_source() noexcept;
            std::string timestamp() const override;
    };

}

#endif // LESSON_SYSTEM_TIME_SOURCE_H