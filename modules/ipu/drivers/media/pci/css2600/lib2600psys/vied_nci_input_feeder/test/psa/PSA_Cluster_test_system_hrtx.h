#ifndef _PSA_Cluster_test_system_hrtx_h_hrt_
#define _PSA_Cluster_test_system_hrtx_h_hrt_

#include <hrt/expert_api.h>


enum hrt_hive_processors {
  hrt_num_hive_processors = 0
};
enum hrt_host_processors {
  PSA_Cluster_TE_host = 0,
  hrt_num_host_processors = 1
};
enum hrt_system_memories {
  str2vec_memory = 0,
  ack_memory = 1,
  hrt_num_system_memories = 2
};
enum hrt_fifo_adapters {
  hrt_num_fifo_adapters = 0
};
enum hrt_fifos {
  hrt_num_fifos = 0
};
enum hrt_system_busses {
  PSA_Cluster_TE_system_bus = 0,
  wide_bus = 1,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSACfgL0Bus = 2,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSACfgL1Bus = 3,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSACfgL2Bus = 4,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSAVec2StrmBus = 5,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSAStrm2VecBus = 6,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSAAckBus = 7,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_WB_WBACrqBus = 8,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_ANR_CRQBUS = 9,
  PSA_Cluster_TE_PSA_Cluster_Inst_Advanced_Demosaic_DmCrqBus = 10,
  PSA_Cluster_TE_PSA_Cluster_Inst_CCM_CCMCrqBus = 11,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_RGBCrqBus = 12,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_YUVAutoCrqBus = 13,
  PSA_Cluster_TE_PSA_Cluster_Inst_DVS_DvsCrqBus = 14,
  PSA_Cluster_TE_PSA_Cluster_Inst_Lace_Stat_L_STAT_CrqBus = 15,
  hrt_num_system_busses = 16
};
enum hrt_bridges {
  psa_sl_2wide = 0,
  ciobsconv_psa_vec = 1,
  ciobsconv_psa_cfg = 2,
  psa_mt_2wide = 3,
  ciobsconv_ack_mem = 4,
  hrt_num_bridges = 5
};
enum hrt_custom_devices {
  PSA_Cluster_TE_PSA_Cluster_Inst_acc_gp_reg = 5,
  PSA_Cluster_TE_PSA_Cluster_Inst_vec2str_bayer1 = 6,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_Bayer_1_Pix_WideStrmConv = 7,
  PSA_Cluster_TE_PSA_Cluster_Inst_vec2str_bayer2 = 8,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_Bayer_2_Pix_WideStrmConv = 9,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_2_StrmSignClip = 10,
  PSA_Cluster_TE_PSA_Cluster_Inst_vec2str_yuv1 = 11,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_YUV_Processing_1_Pix_WideStrmConv = 12,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV_Processing_1_StrmSignClip = 13,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV_Processing_1_422_Conv = 14,
  PSA_Cluster_TE_PSA_Cluster_Inst_vec2str_rgb1 = 15,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_RGB_Processing_1_Pix_WideStrmConv = 16,
  PSA_Cluster_TE_PSA_Cluster_Inst_RGB_Processing_1_StrmSignClip = 17,
  PSA_Cluster_TE_PSA_Cluster_Inst_vec2str_rgb2 = 18,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_RGB_Processing_2_Pix_WideStrmConv = 19,
  PSA_Cluster_TE_PSA_Cluster_Inst_rgb_StrmAdder = 20,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_Fork_Adapter = 21,
  PSA_Cluster_TE_PSA_Cluster_Inst_Isp_GTC_Fork_Adapter = 22,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_Irq_Ctrl = 23,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_Bayer_1_Pix_NarStrmConv = 24,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_1_StrmSignExt = 25,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_bayer1 = 26,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_ack_conv_bayer1 = 27,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_Bayer_2_Pix_NarStrmConv = 28,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_2_StrmSignExt = 29,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_bayer2 = 30,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_ack_conv_bayer2 = 31,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_GTC_420_Conv = 32,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_GTC_StrmSignExt = 33,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_GTC_Pix_NarStrmConv = 34,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_yuv1 = 35,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_ack_conv_yuv1 = 36,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_YUV_Processing_1_420_Conv = 37,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_YUV_Processing_1_StrmSignExt = 38,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_YUV_Processing_1_Pix_NarStrmConv = 39,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_yuv2 = 40,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_ack_conv_yuv2 = 41,
  PSA_Cluster_TE_PSA_Cluster_Inst_RGB_14_to_16_StrmSignExt = 42,
  PSA_Cluster_TE_PSA_Cluster_Inst_MUX_2_1_S2V_RGB = 43,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_RGB_Pix_NarStrmConv = 44,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_rgb = 45,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_ack_conv_rgb = 46,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_Cluster_TLM = 47,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_WB_ACB = 48,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_WB_WBA = 49,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_WB_BC = 50,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_WB_AckConv = 51,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_ACB = 52,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_SEARCH = 53,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_TRANSFORM = 54,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_STITCH = 55,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_TILE = 56,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_AckConv = 57,
  PSA_Cluster_TE_PSA_Cluster_Inst_Advanced_Demosaic_ACB = 58,
  PSA_Cluster_TE_PSA_Cluster_Inst_Advanced_Demosaic_DM = 59,
  PSA_Cluster_TE_PSA_Cluster_Inst_Advanced_Demosaic_AckConv = 60,
  PSA_Cluster_TE_PSA_Cluster_Inst_CCM_ACB = 61,
  PSA_Cluster_TE_PSA_Cluster_Inst_CCM_CCM = 62,
  PSA_Cluster_TE_PSA_Cluster_Inst_CCM_BDC = 63,
  PSA_Cluster_TE_PSA_Cluster_Inst_CCM_AckConv = 64,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_ACB = 65,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_CSC_CDS = 66,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_GTM = 67,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_AckConv = 68,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_ACB = 69,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_YUV_SPLITTER = 70,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_IEFD = 71,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_YDS = 72,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_TCC = 73,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_YUV_COLLECTOR = 74,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_AckConv = 75,
  PSA_Cluster_TE_PSA_Cluster_Inst_DVS_ACB = 76,
  PSA_Cluster_TE_PSA_Cluster_Inst_DVS_YBIN = 77,
  PSA_Cluster_TE_PSA_Cluster_Inst_DVS_DVS = 78,
  PSA_Cluster_TE_PSA_Cluster_Inst_DVS_AckConv = 79,
  PSA_Cluster_TE_PSA_Cluster_Inst_Lace_Stat_ACB = 80,
  PSA_Cluster_TE_PSA_Cluster_Inst_Lace_Stat_LACE_STAT = 81,
  PSA_Cluster_TE_PSA_Cluster_Inst_Lace_Stat_AckConv = 82,
  hrt_num_custom_devices = 78
};
enum hrt_slave_ports {
  PSA_Cluster_TE_system_bus_ip_host,
  PSA_Cluster_TE_system_bus_in_ack,
  wide_bus_host_in,
  wide_bus_isp_in,
  str2vec_memory_ip0,
  ack_memory_ip0,
  PSA_Cluster_TE_PSA_Cluster_Inst_acc_gp_reg_slv_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSACfgL0Bus_ctrl_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSACfgL1Bus_ctrl_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSACfgL2Bus_ctrl_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSAVec2StrmBus_vec2str_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_vec2str_bayer1_sl_vec,
  PSA_Cluster_TE_PSA_Cluster_Inst_vec2str_bayer1_sl_cfg,
  PSA_Cluster_TE_PSA_Cluster_Inst_vec2str_bayer2_sl_vec,
  PSA_Cluster_TE_PSA_Cluster_Inst_vec2str_bayer2_sl_cfg,
  PSA_Cluster_TE_PSA_Cluster_Inst_vec2str_yuv1_sl_vec,
  PSA_Cluster_TE_PSA_Cluster_Inst_vec2str_yuv1_sl_cfg,
  PSA_Cluster_TE_PSA_Cluster_Inst_vec2str_rgb1_sl_vec,
  PSA_Cluster_TE_PSA_Cluster_Inst_vec2str_rgb1_sl_cfg,
  PSA_Cluster_TE_PSA_Cluster_Inst_vec2str_rgb2_sl_vec,
  PSA_Cluster_TE_PSA_Cluster_Inst_vec2str_rgb2_sl_cfg,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_Irq_Ctrl_slv_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_bayer1_sl_cfg,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_ack_conv_bayer1_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_bayer2_sl_cfg,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_ack_conv_bayer2_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_yuv1_sl_cfg,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_ack_conv_yuv1_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_yuv2_sl_cfg,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_ack_conv_yuv2_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_rgb_sl_cfg,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_ack_conv_rgb_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSAStrm2VecBus_str2vec1_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSAStrm2VecBus_str2vec2_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSAStrm2VecBus_str2vec3_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSAStrm2VecBus_str2vec4_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSAStrm2VecBus_str2vec5_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSAAckBus_ack_wb_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSAAckBus_ack_anr_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSAAckBus_ack_dm_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSAAckBus_ack_ccm_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSAAckBus_ack_gtc_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSAAckBus_ack_yuv_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSAAckBus_ack_dvs_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSAAckBus_ack_lace_stat_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSAAckBus_ack_s2v1_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSAAckBus_ack_s2v2_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSAAckBus_ack_s2v3_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSAAckBus_ack_s2v4_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSAAckBus_ack_s2v5_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_WB_WBACrqBus_ctrl_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_WB_ACB_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_WB_WBA_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_WB_BC_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_WB_AckConv_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_ANR_CRQBUS_ctrl_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_ACB_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_SEARCH_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_TRANSFORM_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_STITCH_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_TILE_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_AckConv_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Advanced_Demosaic_DmCrqBus_ctrl_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Advanced_Demosaic_ACB_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Advanced_Demosaic_DM_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Advanced_Demosaic_AckConv_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_CCM_CCMCrqBus_ctrl_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_CCM_ACB_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_CCM_CCM_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_CCM_BDC_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_CCM_AckConv_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_RGBCrqBus_ctrl_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_ACB_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_CSC_CDS_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_GTM_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_AckConv_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_YUVAutoCrqBus_ctrl_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_ACB_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_YUV_SPLITTER_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_IEFD_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_YDS_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_TCC_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_YUV_COLLECTOR_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_AckConv_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_DVS_DvsCrqBus_ctrl_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_DVS_ACB_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_DVS_YBIN_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_DVS_DVS_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_DVS_AckConv_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Lace_Stat_L_STAT_CrqBus_ctrl_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Lace_Stat_ACB_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Lace_Stat_LACE_STAT_crq_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Lace_Stat_AckConv_crq_in,
  psa_sl_2wide_sl,
  ciobsconv_psa_vec_sl,
  ciobsconv_psa_cfg_sl,
  psa_mt_2wide_sl,
  ciobsconv_ack_mem_sl,
  hrt_num_slave_ports
};
enum hrt_stream_in_ports {
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_Bayer_1_Pix_WideStrmConv_Strm_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_Bayer_2_Pix_WideStrmConv_Strm_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_2_StrmSignClip_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_YUV_Processing_1_Pix_WideStrmConv_Strm_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV_Processing_1_StrmSignClip_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV_Processing_1_422_Conv_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_RGB_Processing_1_Pix_WideStrmConv_Strm_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_RGB_Processing_1_StrmSignClip_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_RGB_Processing_2_Pix_WideStrmConv_Strm_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_rgb_StrmAdder_pix_sta_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_rgb_StrmAdder_pix_stb_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_Fork_Adapter_pix_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Isp_GTC_Fork_Adapter_pix_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_Bayer_1_Pix_NarStrmConv_Strm_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_1_StrmSignExt_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_bayer1_in_pxl_str,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_ack_conv_bayer1_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_Bayer_2_Pix_NarStrmConv_Strm_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_2_StrmSignExt_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_bayer2_in_pxl_str,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_ack_conv_bayer2_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_GTC_420_Conv_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_GTC_StrmSignExt_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_GTC_Pix_NarStrmConv_Strm_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_yuv1_in_pxl_str,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_ack_conv_yuv1_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_YUV_Processing_1_420_Conv_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_YUV_Processing_1_StrmSignExt_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_YUV_Processing_1_Pix_NarStrmConv_Strm_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_yuv2_in_pxl_str,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_ack_conv_yuv2_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_RGB_14_to_16_StrmSignExt_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_MUX_2_1_S2V_RGB_sta_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_MUX_2_1_S2V_RGB_stb_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_RGB_Pix_NarStrmConv_Strm_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_rgb_in_pxl_str,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_ack_conv_rgb_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_WB_ACB_pix_isp_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_WB_ACB_pix_prev_acc_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_WB_ACB_pix_ff_2_acb,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_WB_WBA_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_WB_BC_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_WB_AckConv_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_ACB_pix_isp_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_ACB_pix_prev_acc_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_ACB_pix_ff_2_acb,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_SEARCH_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_TRANSFORM_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_STITCH_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_TILE_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_AckConv_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Advanced_Demosaic_ACB_pix_isp_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Advanced_Demosaic_ACB_pix_prev_acc_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Advanced_Demosaic_ACB_pix_ff_2_acb,
  PSA_Cluster_TE_PSA_Cluster_Inst_Advanced_Demosaic_DM_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Advanced_Demosaic_AckConv_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_CCM_ACB_pix_isp_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_CCM_ACB_pix_prev_acc_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_CCM_ACB_pix_ff_2_acb,
  PSA_Cluster_TE_PSA_Cluster_Inst_CCM_CCM_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_CCM_BDC_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_CCM_AckConv_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_ACB_pix_isp_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_ACB_pix_prev_acc_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_ACB_pix_ff_2_acb,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_CSC_CDS_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_GTM_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_AckConv_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_ACB_pix_isp_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_ACB_pix_prev_acc_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_ACB_pix_ff_2_acb,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_YUV_SPLITTER_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_IEFD_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_YDS_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_TCC_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_YUV_COLLECTOR_pix_st_in_y,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_YUV_COLLECTOR_pix_st_in_chrm,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_AckConv_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_DVS_ACB_pix_isp_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_DVS_ACB_pix_prev_acc_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_DVS_ACB_pix_ff_2_acb,
  PSA_Cluster_TE_PSA_Cluster_Inst_DVS_YBIN_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_DVS_DVS_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_DVS_AckConv_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Lace_Stat_ACB_pix_isp_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Lace_Stat_ACB_pix_prev_acc_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Lace_Stat_ACB_pix_ff_2_acb,
  PSA_Cluster_TE_PSA_Cluster_Inst_Lace_Stat_LACE_STAT_pix_st_in,
  PSA_Cluster_TE_PSA_Cluster_Inst_Lace_Stat_AckConv_pix_st_in,
  hrt_num_stream_in_ports
};
enum hrt_stream_out_ports {
  PSA_Cluster_TE_PSA_Cluster_Inst_vec2str_bayer1_pxl_str_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_Bayer_1_Pix_WideStrmConv_Strm_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_vec2str_bayer2_pxl_str_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_Bayer_2_Pix_WideStrmConv_Strm_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_2_StrmSignClip_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_vec2str_yuv1_pxl_str_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_YUV_Processing_1_Pix_WideStrmConv_Strm_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV_Processing_1_StrmSignClip_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV_Processing_1_422_Conv_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_vec2str_rgb1_pxl_str_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_RGB_Processing_1_Pix_WideStrmConv_Strm_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_RGB_Processing_1_StrmSignClip_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_vec2str_rgb2_pxl_str_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_RGB_Processing_2_Pix_WideStrmConv_Strm_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_rgb_StrmAdder_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_Fork_Adapter_pix_port1_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_Fork_Adapter_pix_port2_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_Fork_Adapter_pix_port3_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Isp_GTC_Fork_Adapter_pix_port1_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Isp_GTC_Fork_Adapter_pix_port2_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Isp_GTC_Fork_Adapter_pix_port3_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_Bayer_1_Pix_NarStrmConv_Strm_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_1_StrmSignExt_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_bayer1_out_str_ack,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_Bayer_2_Pix_NarStrmConv_Strm_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_2_StrmSignExt_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_bayer2_out_str_ack,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_GTC_420_Conv_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_GTC_StrmSignExt_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_GTC_Pix_NarStrmConv_Strm_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_yuv1_out_str_ack,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_YUV_Processing_1_420_Conv_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_YUV_Processing_1_StrmSignExt_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_YUV_Processing_1_Pix_NarStrmConv_Strm_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_yuv2_out_str_ack,
  PSA_Cluster_TE_PSA_Cluster_Inst_RGB_14_to_16_StrmSignExt_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_MUX_2_1_S2V_RGB_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_PSA_RGB_Pix_NarStrmConv_Strm_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_str2vec_rgb_out_str_ack,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_WB_ACB_pix_isp_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_WB_ACB_pix_next_acc_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_WB_ACB_pix_acb_2_ff,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_WB_ACB_ack_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_WB_WBA_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_WB_BC_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_ACB_pix_isp_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_ACB_pix_next_acc_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_ACB_pix_acb_2_ff,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_ACB_ack_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_SEARCH_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_TRANSFORM_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_STITCH_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Bayer_ANR_TILE_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Advanced_Demosaic_ACB_pix_isp_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Advanced_Demosaic_ACB_pix_next_acc_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Advanced_Demosaic_ACB_pix_acb_2_ff,
  PSA_Cluster_TE_PSA_Cluster_Inst_Advanced_Demosaic_ACB_ack_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Advanced_Demosaic_DM_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_CCM_ACB_pix_isp_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_CCM_ACB_pix_next_acc_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_CCM_ACB_pix_acb_2_ff,
  PSA_Cluster_TE_PSA_Cluster_Inst_CCM_ACB_ack_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_CCM_CCM_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_CCM_BDC_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_ACB_pix_isp_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_ACB_pix_next_acc_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_ACB_pix_acb_2_ff,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_ACB_ack_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_CSC_CDS_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_GTC_GTM_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_ACB_pix_isp_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_ACB_pix_next_acc_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_ACB_pix_acb_2_ff,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_ACB_ack_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_YUV_SPLITTER_pix_st_out_1vd_y,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_YUV_SPLITTER_pix_st_out_2y_and_2chrm,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_IEFD_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_YDS_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_TCC_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_YUV1_Processing_YUV_COLLECTOR_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_DVS_ACB_pix_isp_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_DVS_ACB_pix_next_acc_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_DVS_ACB_pix_acb_2_ff,
  PSA_Cluster_TE_PSA_Cluster_Inst_DVS_ACB_ack_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_DVS_YBIN_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_DVS_DVS_pix_st_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Lace_Stat_ACB_pix_isp_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Lace_Stat_ACB_pix_next_acc_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Lace_Stat_ACB_pix_acb_2_ff,
  PSA_Cluster_TE_PSA_Cluster_Inst_Lace_Stat_ACB_ack_out,
  PSA_Cluster_TE_PSA_Cluster_Inst_Lace_Stat_LACE_STAT_pix_st_out,
  hrt_num_stream_out_ports
};

#endif /* _PSA_Cluster_test_system_hrtx_h_hrt_ */