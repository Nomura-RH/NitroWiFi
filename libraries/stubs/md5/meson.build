subdir('src')

libstubsmd5 = library('stubsmd5',
    dependencies: nitrosdk_dep,
    include_directories: nitrowifi_includes,
    pic: false,
    sources: libstubsmd5_srcs
)

nitrowifi_libs += libstubsmd5
