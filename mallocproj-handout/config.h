#ifndef __CONFIG_H_
#define __CONFIG_H_

/*
 * config.h - malloc project configuration file
 *
 * Copyright (c) 2002, R. Bryant and D. O'Hallaron, All rights reserved.
 * May not be used, modified, or copied without permission.
 */

/*
 * This is the default path where the driver will look for the
 * default tracefiles. You can override it at runtime with the -t flag.
 */
#define TRACEDIR "traces/"

/*
 * This is the list of default tracefiles in TRACEDIR that the driver
 * will use for testing. Modify this if you want to add or delete
 * traces from the driver's test suite. For example, if you don't want
 * your students to implement realloc, you can delete the last two
 * traces.
 */
#define DEFAULT_TRACEFILES \
  "short2-bal.txt",\
  "amptjp-bal.txt",\
  "cccp-bal.txt",\
  "cp-decl-bal.txt",\
  "expr-bal.txt",\
  "coalescing-bal.txt",\
  "random-bal.txt",\
  "random2-bal.txt",\
  "binary-bal.txt",\
  "binary2-bal.txt"

/*
 * This constant gives the estimated performance of the libc malloc
 * package using our traces on some reference system, typically the
 * same kind of system the students use. Its purpose is to cap the
 * contribution of throughput to the performance index. Once the
 * students surpass the AVG_LIBC_THRUPUT, they get no further benefit
 * to their score.  This deters students from building extremely fast,
 * but extremely stupid malloc packages.
 */
#define AVG_LIBC_THRUPUT      5000E3  /* 5000 Kops/sec */

 /*
  * This constant determines the contributions of space utilization
  * (UTIL_WEIGHT) and throughput (1 - UTIL_WEIGHT) to the performance
  * index.
  */
#define UTIL_WEIGHT .60

/*
 * Alignment requirement in bytes (either 4 or 8)
 */
#define ALIGNMENT 8

/*
 * Maximum heap size in bytes
 */
#define MAX_HEAP (20*(1<<20))  /* 20 MB */

#endif /* __CONFIG_H */
