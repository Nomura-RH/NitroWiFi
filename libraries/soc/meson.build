subdir('src')

libsoc = library('soc',
    dependencies: nitrosdk_dep,
    include_directories: nitrowifi_includes,
    pic: false,
    sources: libsoc_srcs
)

nitrowifi_libs += libsoc
