project(TapeUnitTests)

include(FetchContent)
FetchContent_Declare(
        googletest
        # Specify the commit you depend on and update it regularly.
        URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
include_directories($ENV{HOME}/googletest/googletest/include)
FetchContent_MakeAvailable(googletest)


add_executable(TapeUnitTests main.cpp ../src/MemoryTape.cpp ../src/TapeSorter.cpp ../src/MemoryTapeSorter.cpp ../src/FileTape.cpp TapeTest.cpp ParseTest.cpp)
target_link_libraries(TapeUnitTests gtest_main)
