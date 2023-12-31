/*
 * fy-types.c - types definition
 *
 * Copyright (c) 2019 Pantelis Antoniou <pantelis.antoniou@konsulko.com>
 *
 * SPDX-License-Identifier: MIT
 */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <string.h>
/* #include <sys/mman.h> */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <stdarg.h>
#include <limits.h>

#include <libfyaml.h>

#include "fy-parse.h"

/* parse only types */
FY_PARSE_TYPE_DEFINE_SIMPLE(indent);
FY_PARSE_TYPE_DEFINE_SIMPLE(simple_key);
FY_PARSE_TYPE_DEFINE_SIMPLE(parse_state_log);
FY_PARSE_TYPE_DEFINE_SIMPLE(flow);
FY_PARSE_TYPE_DEFINE_SIMPLE(streaming_alias);
