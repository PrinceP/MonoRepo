workspace(name = "Monorepo")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
  name = "com_google_googletest",
  urls = ["https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip"],
  strip_prefix = "googletest-609281088cfefc76f9d0ce82e1ff6c30cc3591e5",
)

http_archive(
  name = "rules_cc",
  urls = ["https://github.com/bazelbuild/rules_cc/archive/40548a2974f1aea06215272d9c2b47a14a24e556.zip"],
  strip_prefix = "rules_cc-40548a2974f1aea06215272d9c2b47a14a24e556",
)

#all_content = """filegroup(name = "all", srcs = glob(["**"]), visibility = ["//visibility:public"])"""
#
#http_archive(
#    name = "opencv",
#    build_file_content = all_content,
#    sha256 = "36799186756c1e12adde97f0a8d1afc395d5b0f86d8ad9ef951bc33aa732f9b9",
#    strip_prefix = "opencv-4.3.0",
#    urls = ["https://github.com/opencv/opencv/archive/4.3.0.zip"],
#)
#
#http_archive(
#   name = "rules_foreign_cc",
#   strip_prefix = "rules_foreign_cc-0.1.0",
#   sha256 = "c2cdcf55ffaf49366725639e45dedd449b8c3fe22b54e31625eb80ce3a240f1e",
#   url = "https://github.com/bazelbuild/rules_foreign_cc/archive/0.1.0.zip",
#)
#
#load("@rules_foreign_cc//:workspace_definitions.bzl", "rules_foreign_cc_dependencies")
#

#rules_foreign_cc_dependencies()
