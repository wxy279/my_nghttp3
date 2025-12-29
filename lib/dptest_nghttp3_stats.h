#ifndef __DPTEST_NGHTTP3_STATS_H__
#define __DPTEST_NGHTTP3_STATS_H__

typedef enum _dproxy_myhttp3_statistics_e
{
	dproxy_myhttp3_stats_h3_open_streams_ide,//                         id 0
	dproxy_myhttp3_stats_h3_open_conns_ide,
	dproxy_myhttp3_stats_qpack_blocked_ide,
	dproxy_myhttp3_stats_qpack_block_kept_ide,
	dproxy_myhttp3_stats_qpack_hit_sfull_ide, //                        id 4
	dproxy_myhttp3_stats_qpack_hit_dfull_ide,
	dproxy_myhttp3_stats_qpack_hit_sname_ide,
	dproxy_myhttp3_stats_qpack_hit_dname_ide,
	dproxy_myhttp3_stats_qpack_hit_none_ide,/*both name and value use Literal*/
	dproxy_myhttp3_stats_qpack_dec_cap_evict_ide, //dec set max dtable capacity  id 9
	dproxy_myhttp3_stats_qpack_dec_add_evict_ide,// dec dtable add
	dproxy_myhttp3_stats_qpack_enc_add_evict_ide,// enc dtable add
	dproxy_myhttp3_stats_qpack_enc_srk_evict_ide,// encoder shrink
	dproxy_myhttp3_N_STATS
} dproxy_myhttp3_statistics_e;

#endif /* __DPTEST_NGHTTP3_STATS_H__*/
