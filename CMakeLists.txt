zephyr_library()
zephyr_library_include_directories(include/)
zephyr_library_include_directories(
   src
   src/lib
   src/xxhash
   src/util
)
zephyr_library_compile_definitions(VERSION="0.8")
zephyr_library_compile_definitions(
   _GNU_SOURCE=1
   NDEBUG=1
   FY_DEVMODE=1
)

zephyr_library_compile_options(
   -Wno-pointer-arith
   -Wno-return-type
   -std=gnu99
)

zephyr_library_sources(
   src/lib/fy-parse.c
)
