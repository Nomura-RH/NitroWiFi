subdir('src')

libstubsoc = library('stubsoc',
    dependencies: nitrosdk_dep,
    include_directories: nitrowifi_includes,
    pic: false,
    sources: libstubsoc_srcs
)

nitrowifi_libs += libstubsoc
