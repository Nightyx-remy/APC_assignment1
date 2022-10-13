#ifndef LESSON_ITIME_SOURCE_H
#define LESSON_ITIME_SOURCE_H

#include <string>

namespace time_sources {
    class itime_source {
        public: 
            virtual std::string timestamp() const = 0;

            virtual ~itime_source() = default;   
    };
}

#endif // LESSON_ITIME_SOURCE_H