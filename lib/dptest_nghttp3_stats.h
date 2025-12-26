#ifndef __DPTEST_NGHTTP3_STATS_H__
#define __DPTEST_NGHTTP3_STATS_H__

typedef enum _dproxy_myhttp3_statistics_e
{
	dproxy_myhttp3_stats_h3_open_streams_ide,//                                             id 0
	dproxy_myhttp3_stats_h3_open_conns_ide,
	dproxy_myhttp3_stats_qpack_blocked_ide,
	dproxy_myhttp3_N_STATS
} dproxy_myhttp3_statistics_e;

#endif /* __DPTEST_NGHTTP3_STATS_H__*/
