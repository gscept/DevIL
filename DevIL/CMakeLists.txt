cmake_minimum_required(VERSION 2.6)


PROJECT(ImageLib)


OPTION(DEVIL_BUILD_SHARED_LIBS "Build with shared (.DLL .SO) libraries." OFF)


SET(DEVIL_INCS

	${DEVIL_SOURCE_DIR}/include/IL/config.h
	${DEVIL_SOURCE_DIR}/include/IL/devil_internal_exports.h
	${DEVIL_SOURCE_DIR}/include/IL/il.h
	${DEVIL_SOURCE_DIR}/include/IL/il_wrap.h
	${DEVIL_SOURCE_DIR}/include/IL/ilu.h
	${DEVIL_SOURCE_DIR}/include/IL/ilu_region.h
	${DEVIL_SOURCE_DIR}/include/IL/ilut.h
)

ADD_SUBDIRECTORY(src-IL)
ADD_SUBDIRECTORY(src-ILU)
ADD_SUBDIRECTORY(src-ILUT)

# need to check for vc6 or vc2003 output dir
IF(BUILD_SHARED_LIBS)

	SET(DEVIL_LIB_DEST_DIR	${CMAKE_CURRENT_SOURCE_DIR}/lib/	)

ELSE(BUILD_SHARED_LIBS)

	SET(DEVIL_LIB_DEST_DIR	${CMAKE_BINARY_DIR}/	)

ENDIF(BUILD_SHARED_LIBS)



#EXPORT_LIBRARY_DEPENDENCIES(CMakeDepends.txt)