SET(INCLUDE ${CMAKE_SOURCE_DIR}/include)

FILE(GLOB SOURCE "*.cpp")
LIST(REMOVE_ITEM SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/Main.cpp)
LIST(REMOVE_ITEM SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

ADD_COMPILE_OPTIONS("-Wall")
ADD_COMPILE_OPTIONS("-Werror")
ADD_LIBRARY(training ${SOURCE}
        main.cpp
        ../include/Position.h
        ../include/Heading.h
        ../include/Position.h
        ../include/Executor.h
        ../include/main.h
        Executor.h
        Heading.h)

TARGET_INCLUDE_DIRECTORIES(training PUBLIC "${INCLUDE}")
