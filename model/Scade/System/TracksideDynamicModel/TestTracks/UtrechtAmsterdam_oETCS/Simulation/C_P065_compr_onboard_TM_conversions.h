/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-05T15:50:16
*************************************************************$ */
#ifndef _C_P065_compr_onboard_TM_conversions_H_
#define _C_P065_compr_onboard_TM_conversions_H_

#include "kcg_types.h"
#include "CAST_Int_to_NID_MN_TM_conversions.h"
#include "CAST_Int_to_NID_TSR_TM_conversions.h"
#include "CAST_Int_to_L_TSR_TM_conversions.h"
#include "CAST_Int_to_Q_FRONT_TM_conversions.h"
#include "CAST_Int_to_V_TSR_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P065_OBU_T_TM /* TM_conversions::C_P065_compr_onboard::P065_onboard */ P065_onboard;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_NID_MN_TM_conversions /* 1 */ _4_Context_1;
  outC_CAST_Int_to_NID_TSR_TM_conversions /* 1 */ _3_Context_1;
  outC_CAST_Int_to_L_TSR_TM_conversions /* 1 */ _2_Context_1;
  outC_CAST_Int_to_Q_FRONT_TM_conversions /* 1 */ _1_Context_1;
  outC_CAST_Int_to_V_TSR_TM_conversions /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */ _20_else_clock_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */ _12_IfBlock1_clock_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ _6_else_clock_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ IfBlock1_clock_1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L3 */ _L3_122_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L2 */ _L2_121_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L4 */ _L4_119_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L1 */ _L1_118_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L1 */ _L1_117_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L2 */ _L2_116_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */ _15_else_clock_1_IfBlock1;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L1 */ _L1_114_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L3 */ _L3_113_IfBlock1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_in */ q_scale_in_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::error */ _11_error_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::_L2 */ _L2_110;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_SCALE::_L4 */ _L4_19;
  Q_SCALE /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ q_scale_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_int */ q_scale_int_1;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L1 */ _L1_1;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L5 */ _L5_1;
  kcg_bool /* TM_conversions::CAST_Int_to_NID_PACKET::_L4 */ _L4_1;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L3 */ _L3_1;
  kcg_bool /* TM_conversions::CAST_Int_to_NID_PACKET::_L2 */ _L2_1;
  NID_PACKET /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet */ nid_packet_1;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet_int */ nid_packet_int_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */ _L5_18_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */ _L4_17_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */ _L4_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */ _L2_15_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L1 */ _L1_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L2 */ _L2_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ else_clock_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L3 */ _L3_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L5 */ _L5_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::error */ error_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_in */ q_dir_in_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::_L13 */ _L13_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::_L12 */ _L12_1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ q_dir_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_int */ q_dir_int_1;
  NID_PACKET /* TM_conversions::C_P065_compr_onboard::_L12 */ _L12;
  Q_DIR /* TM_conversions::C_P065_compr_onboard::_L11 */ _L11;
  P065_OBU_T_TM /* TM_conversions::C_P065_compr_onboard::_L10 */ _L10;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions::C_P065_compr_onboard::_L9 */ _L9;
  NID_MN /* TM_conversions::C_P065_compr_onboard::_L4 */ _L4;
  MetadataElement_T_Common_Types_Pkg /* TM_conversions::C_P065_compr_onboard::_L20 */ _L20;
  kcg_int /* TM_conversions::C_P065_compr_onboard::_L21 */ _L21;
  kcg_bool /* TM_conversions::C_P065_compr_onboard::_L22 */ _L22;
  kcg_int /* TM_conversions::C_P065_compr_onboard::_L41 */ _L41;
  kcg_int /* TM_conversions::C_P065_compr_onboard::_L40 */ _L40;
  kcg_int /* TM_conversions::C_P065_compr_onboard::_L39 */ _L39;
  kcg_int /* TM_conversions::C_P065_compr_onboard::_L38 */ _L38;
  kcg_int /* TM_conversions::C_P065_compr_onboard::_L37 */ _L37;
  kcg_int /* TM_conversions::C_P065_compr_onboard::_L36 */ _L36;
  kcg_int /* TM_conversions::C_P065_compr_onboard::_L35 */ _L35;
  kcg_int /* TM_conversions::C_P065_compr_onboard::_L34 */ _L34;
  NID_TSR /* TM_conversions::C_P065_compr_onboard::_L42 */ _L42;
  L_TSR /* TM_conversions::C_P065_compr_onboard::_L43 */ _L43;
  Q_FRONT /* TM_conversions::C_P065_compr_onboard::_L44 */ _L44;
  V_TSR /* TM_conversions::C_P065_compr_onboard::_L45 */ _L45;
  array_int_9 /* TM_conversions::C_P065_compr_onboard::_L46 */ _L46;
  kcg_int /* TM_conversions::C_P065_compr_onboard::_L47 */ _L47;
  Q_SCALE /* TM_conversions::C_P065_compr_onboard::_L48 */ _L48;
} outC_C_P065_compr_onboard_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P065_compr_onboard */
extern void C_P065_compr_onboard_TM_conversions(
  /* TM_conversions::C_P065_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P065_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P065_compr_onboard_TM_conversions *outC);

extern void C_P065_compr_onboard_reset_TM_conversions(
  outC_C_P065_compr_onboard_TM_conversions *outC);

#endif /* _C_P065_compr_onboard_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P065_compr_onboard_TM_conversions.h
** Generation date: 2015-07-05T15:50:16
*************************************************************$ */

