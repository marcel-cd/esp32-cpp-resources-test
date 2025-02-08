idf_component_register(SRCS
  "main.cpp"
  "test_iostream.cpp"
  "test_string.cpp"
  INCLUDE_DIRS "./"
)
target_compile_options(${COMPONENT_LIB} PRIVATE -std=gnu++23)

if(TEST_IOSTREAM)
  add_compile_definitions(TEST_IOSTREAM=1)
else()
  add_compile_definitions(TESTE_IOSTREAM=0)
endif()

if(TEST_STRING)
  add_compile_definitions(TEST_STRING=1)
else()
  add_compile_definitions(TESTE_STRING=0)
endif()
