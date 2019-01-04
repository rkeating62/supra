#get_filename_component(CMAKE_CURRENT_LIST_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
#SET(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}")
find_package(CUDA REQUIRED)
IF(CUDA_VERSION_MAJOR LESS 10)
	MESSAGE(FATAL_ERROR "CUDA >= 10.0 is required, but only found ${CUDA_VERSION}. Verify installed cuda toolkit and modify CUDA_TOOLKIT_ROOT_DIR if necessary.")
ENDIF()
MESSAGE(STATUS "Using workaround for FindCUDA.cmake quote handling. In current version (3.9.0) it is still present. See https://gitlab.kitware.com/cmake/cmake/issues/16510 for details.")
