//
// Created by remy on 9/22/22.
//

#ifndef ASSIGNMENT_ITEXT_WRITER_H
#define ASSIGNMENT_ITEXT_WRITER_H

#include <string>

namespace text_writers {
    class itext_writer {
    public:
        virtual itext_writer& operator<<(std::string_view) = 0;
        virtual itext_writer& operator<<(const char*) = 0;
        virtual itext_writer& operator<<(char) = 0;
        virtual ~itext_writer() = default;
    };
}

#endif //ASSIGNMENT_ITEXT_WRITER_H
