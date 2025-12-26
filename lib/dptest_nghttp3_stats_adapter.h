#ifndef __DPTEST_NGHTTP3_STATS_ADAPTER_H__
#define __DPTEST_NGHTTP3_STATS_ADAPTER_H__

#include "dptest_nghttp3_stats.h"

typedef struct h3_fast_stats_ctx {
	uint64_t counters[dproxy_myhttp3_N_STATS];
} h3_fast_stats_ctx_t;

#define H3_FAST_STATS_ADD(ctx_ptr, id, v)                  \
  do {                                                  \
    if ((ctx_ptr) != NULL) {                            \
      ((h3_fast_stats_ctx_t *)(ctx_ptr))->counters[(id)] += (uint64_t)(v); \
    }                                                   \
  } while (0)

#define H3_FAST_STATS_INC(ctx_ptr, id) H3_FAST_STATS_ADD((ctx_ptr), (id), 1)

#define H3_FAST_STATS_MINUS(ctx_ptr, id, v)                  \
  do {                                                  \
    if ((ctx_ptr) != NULL) {                            \
      ((h3_fast_stats_ctx_t *)(ctx_ptr))->counters[(id)] -= (uint64_t)(v); \
    }                                                   \
  } while (0)

#define H3_FAST_STATS_SUB(ctx_ptr, id) H3_FAST_STATS_MINUS((ctx_ptr), (id), 1)

#endif /* __DPTEST_NGHTTP3_STATS_ADAPTER_H__*/
