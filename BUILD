#load("@rules_foreign_cc//tools/build_defs:cmake.bzl", "cmake_external")

#cmake_external(
#    name = "opencv",
#    cmake_options = [
#        "-GNinja",
#        "-DBUILD_LIST=core,highgui,imgcodecs,imgproc",
#    ],
#    lib_source = "@opencv//:all",
#    make_commands = [
#        "ninja",
#        "ninja install",
#    ],
#    out_include_dir = "include/opencv4",
#    shared_libraries = [
#        "libopencv_core.so",
#        "libopencv_highgui.so",
#        "libopencv_imgcodecs.so",
#        "libopencv_imgproc.so",
#    ],
#    visibility = ["//visibility:public"],
#)

cc_library(
    name = "opencv",
    srcs = glob(["lib/*.dylib"]),
    hdrs = glob(["include/opencv4/opencv2/**/*.h*"]),
    includes = ["include/opencv4"],
    visibility = ["//visibility:public"],
    linkstatic = 1,
)