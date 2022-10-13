//
// Created by remy on 9/22/22.
//

#ifndef ASSIGNMENT_CONSOLE_WRITER_H
#define ASSIGNMENT_CONSOLE_WRITER_H

#include "itext_writer.h"
#include <fstream>

namespace lib {
class stream_writer : public text_writers::itext_writer {
    public:
        explicit stream_writer(std::string str);

        stream_writer& operator<<(std::string_view str) override;
        stream_writer& operator<<(const char* str) override;
        stream_writer& operator<<(char str) override;

        ~stream_writer() override;
    private:
        std::fstream m_out_stream;
    };
}


#endif //ASSIGNMENT_CONSOLE_WRITER_H
