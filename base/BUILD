# Copyright 2017 Mobvoi Inc. All Rights Reserved.
# Author: xmwang@mobvoi.com (Xiangming Wang)

package(default_visibility = ["//visibility:public"])

cc_library(
    name = 'base',
    hdrs = glob(['*.h']),
    copts = [
       '-DMULTIPLE_THREADS',
       '-Wno-float-equal',
       '-Wno-strict-aliasing',
    ],
    linkopts = ['-lrt', '-lm'],
    linkstatic = 1,
)
