//
// Created by remy on 9/22/22.
//

#include "stream_writer.h"

lib::stream_writer::stream_writer(std::string str) {
    m_out_stream.open(str);
}

lib::stream_writer &lib::stream_writer::operator<<(std::string_view str) {
    m_out_stream << str;
    return *this;
}


lib::stream_writer::~stream_writer() {
    m_out_stream.close();
}

lib::stream_writer &lib::stream_writer::operator<<(const char *str) {
    m_out_stream << str;
    return *this;
}

lib::stream_writer &lib::stream_writer::operator<<(char str) {
    m_out_stream << str;
    return *this;
}
