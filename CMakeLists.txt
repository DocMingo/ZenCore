cmake_minimum_required(VERSION 3.12)

project(ZenE LANGUAGES CXX)

# 生成可执行文件
add_executable(ZenE
    "main.cpp"
 "ZenChrono.h" "Zenformat.h")

# 设置 C++ 标准（必须在 add_executable 之后）
set_target_properties(ZenE PROPERTIES
    CXX_STANDARD 23
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)

# （可选）MSVC 常用优化
if (MSVC)
    target_compile_options(ZenE PRIVATE /W4)
endif()
