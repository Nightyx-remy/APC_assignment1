//
// Created by Dawid Zalewski on 9/5/2021.
//

#include "logger.h"
#include "system_time_source.h"
#include "program.h"
#include "console_writer.h"
#include <iostream>
#include <memory>

// Run this command on linux if there is an error with libasan
// export LD_PRELOAD=/path/libasan.so.3

int main(){
    auto writer = std::make_unique<lib::console_writer>();
    auto time_source = std::make_unique<lib::system_time_source>();
    auto log = std::make_unique<lib::logger>(std::move(time_source), std::move(writer));
    program prog{ std::move(log) };
    prog.run();
}