add_executable(assignment program.cpp logger.cpp system_time_source.cpp main.cpp itext_writer.h console_writer.cpp console_writer.h stream_writer.cpp stream_writer.h)

list(APPEND TARGETS assignment)
set(TARGETS ${TARGETS} PARENT_SCOPE)

