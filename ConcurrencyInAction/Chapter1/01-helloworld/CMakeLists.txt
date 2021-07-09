# Target name
set(target 01-HelloWorld)

file(GLOB_RECURSE sources
    ./*.cpp
)

# Build executable
add_executable(${target}
    ${sources})

# Project options
set_target_properties(${target}
    PROPERTIES
    ${DEFAULT_PROJECT_OPTIONS}
)

# Compile options
target_compile_options(${target}
    PRIVATE
    PUBLIC
    ${DEFAULT_COMPILE_OPTIONS}
    INTERFACE
)

target_link_libraries(${target}
    PRIVATE
    PUBLIC
    ${DEFAULT_LINKER_OPTIONS}
	${DEFAULT_LIBRARIES}
    INTERFACE
)