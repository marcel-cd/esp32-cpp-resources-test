idf_component_register(SRCS
  "main.cpp"
  "test_iostream.cpp"
  "test_string.cpp"
  "test_vector.cpp"
  "test_exception.cpp"
  INCLUDE_DIRS "./include"
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

if(TEST_VECTOR)
  add_compile_definitions(TEST_VECTOR=1)
else()
  add_compile_definitions(TESTE_VECTOR=0)
endif()

if(TEST_EXCEPTION)
  add_compile_definitions(TEST_EXCEPTION=1)
else()
  add_compile_definitions(TESTE_EXCEPTION=0)
endif()
