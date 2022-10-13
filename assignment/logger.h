//
// Created by Dawid Zalewski on 17/08/2021.
//

#ifndef LESSON_LOGGER_H
#define LESSON_LOGGER_H

#include <string>
#include <iostream>
#include <memory>
#include "ilogger.h"
#include "itime_source.h"
#include "itext_writer.h"

namespace lib{
class logger: public loggers::ilogger {
    public:
        explicit logger(std::unique_ptr<time_sources::itime_source> time_source, std::unique_ptr<text_writers::itext_writer> out) noexcept;
        void log(const std::string_view& msg) const override;
    private:
        std::unique_ptr<time_sources::itime_source> m_time_source;
        std::unique_ptr<text_writers::itext_writer> m_out;
        void output_time() const;
    };
}

#endif //LESSON_LOGGER_H