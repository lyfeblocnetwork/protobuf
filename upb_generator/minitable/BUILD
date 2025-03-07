# Copyright (c) 2009-2024, Google LLC
# All rights reserved.
#
# Use of this source code is governed by a BSD-style
# license that can be found in the LICENSE file or at
# https://developers.google.com/open-source/licenses/bsd

load("//bazel/toolchains:proto_lang_toolchain.bzl", "proto_lang_toolchain")
load("//upb/bazel:build_defs.bzl", "UPB_DEFAULT_CPPOPTS")
load(
    "//upb_generator:bootstrap_compiler.bzl",
    "bootstrap_cc_binary",
    "bootstrap_cc_library",
)

package(default_applicable_licenses = ["//:license"])

licenses(["notice"])

bootstrap_cc_library(
    name = "generator",
    srcs = [
        "fasttable.cc",
        "fasttable.h",
        "generator.cc",
    ],
    hdrs = ["generator.h"],
    bootstrap_deps = [
        "//upb_generator:common",
        "//upb_generator:file_layout",
        "//upb_generator:plugin",
        "//upb_generator:plugin_upb_proto",
        "//upb/reflection:descriptor_upb_proto",
        "//upb/reflection:reflection",
    ],
    copts = UPB_DEFAULT_CPPOPTS,
    deps = [
        ":names",
        ":names_internal",
        "//src/google/protobuf/compiler:code_generator_lite",
        "//upb:base",
        "//upb:mem",
        "//upb:mini_table",
        "//upb:port",
        "//upb:wire_reader",
        "//upb/mini_table:internal",
        "//upb_generator/common:names",
        "@com_google_absl//absl/container:flat_hash_map",
        "@com_google_absl//absl/container:flat_hash_set",
        "@com_google_absl//absl/log:absl_check",
        "@com_google_absl//absl/log:absl_log",
        "@com_google_absl//absl/strings",
    ],
)

cc_library(
    name = "names",
    srcs = ["names.cc"],
    hdrs = ["names.h"],
    visibility = [
        "//src/google/protobuf/compiler/hpb:__pkg__",
        "//src/google/protobuf/compiler/rust:__pkg__",
        "//third_party/kotlin/protobuf/generator/native:__pkg__",
        "//upb_generator:__subpackages__",
    ],
    deps = [
        ":names_internal",
        "//upb:port",
        "@com_google_absl//absl/strings",
    ],
)

cc_library(
    name = "names_internal",
    srcs = ["names_internal.cc"],
    hdrs = ["names_internal.h"],
    visibility = [
        # For bootstrapping.
        "//upb_generator/c:__pkg__",
    ],
    deps = [
        "//upb_generator/common:names",
        "@com_google_absl//absl/strings",
    ],
)

bootstrap_cc_binary(
    name = "protoc-gen-upb_minitable",
    bootstrap_deps = [
        ":generator_with_main",
    ],
    copts = UPB_DEFAULT_CPPOPTS,
    visibility = [
        "//editions/codegen_tests:__pkg__",
        "//net/proto2/contrib/protoc_explorer:__pkg__",
        "//rust:__subpackages__",
        "//third_party/prototiller/transformer:__pkg__",
    ],
)

# TODO: This wrapper lib is a hack that we need because of how CcInfo works in Bazel 6.
# In Bazel 7, our cmake dependency scraping works fine with cc_binary.
bootstrap_cc_library(
    name = "generator_with_main",
    srcs = ["main.cc"],
    bootstrap_deps = [
        ":generator",
        "//upb_generator:file_layout",
        "//upb_generator:common",
        "//upb_generator:plugin",
        "//upb/reflection:reflection",
    ],
    copts = UPB_DEFAULT_CPPOPTS,
    visibility = ["//pkg:__pkg__"],
    deps = [
        ":names",
        ":names_internal",
        "//src/google/protobuf/compiler:code_generator_lite",
        "//upb:base",
        "//upb:port",
        "//upb_generator/common:names",
        "@com_google_absl//absl/log:absl_check",
        "@com_google_absl//absl/log:absl_log",
        "@com_google_absl//absl/strings",
    ],
)

proto_lang_toolchain(
    name = "toolchain",
    command_line = "--upb_minitable_out=$(OUT)",
    output_files = "multiple",
    plugin = ":protoc-gen-upb_minitable_stage1",
    plugin_format_flag = "--plugin=protoc-gen-upb_minitable=%s",
    progress_message = "Generating upb minitables",
    runtime = "//upb:generated_code_support__only_for_generated_code_do_not_use__i_give_permission_to_break_me",
    # TODO: Restrict to "//bazel:__pkg__" once we are on Bazel >=6.5.
    visibility = ["//visibility:public"],
)
