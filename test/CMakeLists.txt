# Create a library which includes the source file.
# The extension is already found. Any number of sources could be listed here.
MACRO(HEADER_DIRECTORIES return_list)
    FILE(GLOB_RECURSE new_list *.h)
    SET(dir_list "")
    FOREACH(file_path ${new_list})
        GET_FILENAME_COMPONENT(dir_path ${file_path} PATH)
        SET(dir_list ${dir_list} ${dir_path})
    ENDFOREACH()
    LIST(REMOVE_DUPLICATES dir_list)
    SET(${return_list} ${dir_list})
ENDMACRO()
# Make sure the compiler can find include files for our Hello library
# when other libraries or executables link to Hello
add_executable (draw_estim_tests AllTest.cpp)

target_link_libraries (draw_estim_tests LINK_PUBLIC estimator fann)
