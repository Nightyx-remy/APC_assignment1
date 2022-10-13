//
// Created by remy on 9/22/22.
//

#ifndef ASSIGNMENT_CONSOLE_WRITER_H
#define ASSIGNMENT_CONSOLE_WRITER_H

#include "itext_writer.h"

namespace lib {
class console_writer : public text_writers::itext_writer {
    public:
        explicit console_writer();

        console_writer& operator<<(std::string_view str) override;
        console_writer& operator<<(const char* str) override;
        console_writer& operator<<(char str) override;

        ~console_writer() override = default;
    };
}


#endif //ASSIGNMENT_CONSOLE_WRITER_H
