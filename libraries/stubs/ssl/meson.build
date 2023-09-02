subdir('src')

libstubsssl = library('stubsssl',
    dependencies: nitrosdk_dep,
    include_directories: nitrowifi_includes,
    pic: false,
    sources: libstubsssl_srcs
)

nitrowifi_libs += libstubsssl
