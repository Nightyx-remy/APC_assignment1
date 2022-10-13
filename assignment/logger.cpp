//
// Created by Dawid Zalewski on 22/08/2021.
//

#include "logger.h"

namespace lib{

    logger::logger(std::unique_ptr<time_sources::itime_source> time_source, std::unique_ptr<text_writers::itext_writer> out) noexcept : m_time_source {std::move(time_source)}, m_out{std::move(out)} {}

    void logger::log(const std::string_view& msg) const{
        m_out->operator<<('[');
        output_time();
        m_out->operator<<("]: ").operator<<(msg).operator<<('\n');
    }

    void logger::output_time() const {
        m_out->operator<<(m_time_source->timestamp());
    }
}