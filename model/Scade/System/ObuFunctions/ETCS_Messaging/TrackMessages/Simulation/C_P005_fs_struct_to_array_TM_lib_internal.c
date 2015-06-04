/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-03T19:30:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_fs_struct_to_array_TM_lib_internal.h"

void C_P005_fs_struct_to_array_reset_TM_lib_internal(
  outC_C_P005_fs_struct_to_array_TM_lib_internal *outC)
{
}

/* TM_lib_internal::C_P005_fs_struct_to_array */
void C_P005_fs_struct_to_array_TM_lib_internal(
  /* TM_lib_internal::C_P005_fs_struct_to_array::section */_1_P005_trackside_section_TM *section,
  outC_C_P005_fs_struct_to_array_TM_lib_internal *outC)
{
  kcg_copy__1_P005_trackside_section_TM(&outC->_L1, section);
  outC->_L9 = outC->_L1.Q_LOCACC;
  outC->_L8 = outC->_L1.Q_LINKREACTION;
  outC->_L7 = outC->_L1.Q_LINKORIENTATION;
  outC->_L6 = outC->_L1.NID_BG;
  outC->_L5 = outC->_L1.NID_C;
  outC->_L4 = outC->_L1.Q_NEWCOUNTRY;
  outC->_L3 = outC->_L1.D_LINK;
  outC->_L2[0] = outC->_L3;
  outC->_L2[1] = outC->_L4;
  outC->_L2[2] = outC->_L5;
  outC->_L2[3] = outC->_L6;
  outC->_L2[4] = outC->_L7;
  outC->_L2[5] = outC->_L8;
  outC->_L2[6] = outC->_L9;
  kcg_copy_P005_trackside_section_array_TM(&outC->section_arrays, &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_fs_struct_to_array_TM_lib_internal.c
** Generation date: 2015-06-03T19:30:19
*************************************************************$ */

