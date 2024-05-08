cmake_minimum_required(VERSION 3.28)

# 如果支持，请为 MSVC 编译器启用热重载。
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project(DataStructure C)

set(CMAKE_C_STANDARD 11)

# 将源代码添加到此项目的可执行文件。
add_executable(DataStructure main.c
        com/lab/datastructure/array/Array.c
        com/lab/datastructure/array/Array.h
        com/lab/datastructure/linkedlist/LinkedList.c
        com/lab/datastructure/stack/Stack.c
        com/lab/datastructure/stack/Stack.h
        com/lab/datastructure/queue/Queue.c
        com/lab/datastructure/queue/Queue.h
)

if (CMAKE_VERSION VERSION_GREATER  3.28)
  set_property(TARGET DataStructure PROPERTY CXX_STANDARD 20)
endif()