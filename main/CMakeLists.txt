set(COMPONENT_DIRS
  "./"
  "../libs/LibSSH-ESP32/src"
  "../libs/LibSSH-ESP32/src/threads"
  "../libs/LibSSH-ESP32/src/external"
)

idf_component_register(
  SRC_DIRS ${COMPONENT_DIRS}
  INCLUDE_DIRS ${COMPONENT_DIRS}
)

add_definitions(-DESP32)

# set_source_files_properties(
#   ../libs/LibSSH-ESP32/src/scp.c
#   PROPERTIES
#     COMPILE_FLAGS -Wno-deprecated-declarations
# )
# set_source_files_properties(
#   ../libs/LibSSH-ESP32/src/auth.c
#   ../libs/LibSSH-ESP32/src/agent.c
#   ../libs/LibSSH-ESP32/src/dh-gex.c
#   ../libs/LibSSH-ESP32/src/channels.c

#   PROPERTIES
#     COMPILE_FLAGS -Wno-format
# )
