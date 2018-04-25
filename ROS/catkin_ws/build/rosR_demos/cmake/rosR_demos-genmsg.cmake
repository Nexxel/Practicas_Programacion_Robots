# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "rosR_demos: 1 messages, 0 services")

set(MSG_I_FLAGS "-IrosR_demos:/home/viki/catkin_ws/src/rosR_demos/msg;-Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(rosR_demos_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/viki/catkin_ws/src/rosR_demos/msg/Linearization.msg" NAME_WE)
add_custom_target(_rosR_demos_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "rosR_demos" "/home/viki/catkin_ws/src/rosR_demos/msg/Linearization.msg" ""
)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(rosR_demos
  "/home/viki/catkin_ws/src/rosR_demos/msg/Linearization.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rosR_demos
)

### Generating Services

### Generating Module File
_generate_module_cpp(rosR_demos
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rosR_demos
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(rosR_demos_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(rosR_demos_generate_messages rosR_demos_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/viki/catkin_ws/src/rosR_demos/msg/Linearization.msg" NAME_WE)
add_dependencies(rosR_demos_generate_messages_cpp _rosR_demos_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(rosR_demos_gencpp)
add_dependencies(rosR_demos_gencpp rosR_demos_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rosR_demos_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(rosR_demos
  "/home/viki/catkin_ws/src/rosR_demos/msg/Linearization.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rosR_demos
)

### Generating Services

### Generating Module File
_generate_module_lisp(rosR_demos
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rosR_demos
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(rosR_demos_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(rosR_demos_generate_messages rosR_demos_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/viki/catkin_ws/src/rosR_demos/msg/Linearization.msg" NAME_WE)
add_dependencies(rosR_demos_generate_messages_lisp _rosR_demos_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(rosR_demos_genlisp)
add_dependencies(rosR_demos_genlisp rosR_demos_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rosR_demos_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(rosR_demos
  "/home/viki/catkin_ws/src/rosR_demos/msg/Linearization.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rosR_demos
)

### Generating Services

### Generating Module File
_generate_module_py(rosR_demos
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rosR_demos
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(rosR_demos_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(rosR_demos_generate_messages rosR_demos_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/viki/catkin_ws/src/rosR_demos/msg/Linearization.msg" NAME_WE)
add_dependencies(rosR_demos_generate_messages_py _rosR_demos_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(rosR_demos_genpy)
add_dependencies(rosR_demos_genpy rosR_demos_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rosR_demos_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rosR_demos)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rosR_demos
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
add_dependencies(rosR_demos_generate_messages_cpp std_msgs_generate_messages_cpp)

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rosR_demos)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rosR_demos
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
add_dependencies(rosR_demos_generate_messages_lisp std_msgs_generate_messages_lisp)

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rosR_demos)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rosR_demos\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rosR_demos
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
add_dependencies(rosR_demos_generate_messages_py std_msgs_generate_messages_py)
