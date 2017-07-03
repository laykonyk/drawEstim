# Create a library called "Hello" which includes the source file "hello.cxx".
# The extension is already found. Any number of sources could be listed here.

# Make sure the compiler can find include files for our Hello library
# when other libraries or executables link to Hello
file(GLOB MY_SRC
    "*.h"
    "*.cpp"
)
get_filename_component(PROJECT_ID ${CMAKE_CURRENT_SOURCE_DIR} NAME)
add_library (${PROJECT_ID} ${MY_SRC})
