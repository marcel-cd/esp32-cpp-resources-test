idf_component_register(SRCS
  "main.cpp"
  "test_iostream.cpp"
  INCLUDE_DIRS "./"
)
target_compile_options(${COMPONENT_LIB} PRIVATE -std=gnu++23)

if(USE_IOSTREAM)
  add_compile_definitions(USE_IOSTREAM=1)
else()
  add_compile_definitions(USE_IOSTREAM=0)
endif()
