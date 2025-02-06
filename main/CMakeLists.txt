idf_component_register(SRCS
  "main.cpp"
  "test_iostream.cpp"
  INCLUDE_DIRS "./"
)
target_compile_options(${COMPONENT_LIB} PRIVATE -std=gnu++23)
