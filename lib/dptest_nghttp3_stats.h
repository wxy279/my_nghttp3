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

	dproxy_myhttp3_stats_close_crit_strm_ide,// close critial stream error
	dproxy_myhttp3_stats_gener_proto_err_ide,// general protocol error  id 14
	dproxy_myhttp3_stats_excessive_load_ide,// error
	dproxy_myhttp3_stats_frame_error_ide,// error
	dproxy_myhttp3_stats_id_error_ide,// error
	dproxy_myhttp3_stats_frame_unexpected_ide,// error
	dproxy_myhttp3_stats_ctl_no_settings_ide,// error                   id 19
	dproxy_myhttp3_stats_ctl_goaway_ide,// receive goaway type
	dproxy_myhttp3_stats_ctl_push_id_ide, // server side recv push id type
	dproxy_myhttp3_stats_ctl_priority_update_ide, // server side recv priority update type
	dproxy_myhttp3_stats_ctl_origin_ide,// receive origin frame
	dproxy_myhttp3_stats_ctl_hit_default_ide,// receive frame handled in default branch   id 24
	dproxy_myhttp3_stats_rd_control_err_ide, // total err for read control stream
	dproxy_myhttp3_stats_rd_qencoder_err_ide, // total err for read qpack encoder stream
	dproxy_myhttp3_stats_rd_qdecoder_err_ide, // total err for read qpack decoder stream
	dproxy_myhttp3_stats_rd_bidi_err_ide, // total err for read bidi stream
	dproxy_myhttp3_N_STATS
} dproxy_myhttp3_statistics_e;

#endif /* __DPTEST_NGHTTP3_STATS_H__*/
