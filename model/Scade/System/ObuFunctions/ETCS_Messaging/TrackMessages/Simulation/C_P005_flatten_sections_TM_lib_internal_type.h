#ifndef C_P005_FLATTEN_SECTIONS_TM_LIB_INTERNAL_TYPES_CONVERTION
#define C_P005_FLATTEN_SECTIONS_TM_LIB_INTERNAL_TYPES_CONVERTION

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
extern int _SCSIM_BoolEntity_is_active(void* pValue);

/****************************************************************
 ** Type utils declarations
 ****************************************************************/
extern TypeUtils _SCSIM_kcg_real_Utils;
extern TypeUtils _SCSIM_kcg_bool_Utils;
extern TypeUtils _SCSIM_kcg_char_Utils;
extern TypeUtils _SCSIM_kcg_int_Utils;
extern TypeUtils _SCSIM_struct__179_Utils;
extern TypeUtils _SCSIM_array__189_Utils;
extern TypeUtils _SCSIM_array_int_7_Utils;
extern TypeUtils _SCSIM_array_int_224_Utils;
extern TypeUtils _SCSIM_array_int_7_32_Utils;
extern TypeUtils _SCSIM_array_int_7_32_224_Utils;
extern TypeUtils _SCSIM_P005_sections_array_flat_TM_Utils;
extern TypeUtils _SCSIM_P005_OBU_sectionlist_array_T_TM_Utils;
extern TypeUtils _SCSIM__1_P005_trackside_section_array_TM_Utils;
extern TypeUtils _SCSIM_P005_trackside_section_TM_Utils;
extern TypeUtils _SCSIM_P005_OBU_sectionlist_T_TM_Utils;

/****************************************************************
 ** kcg_real
 ****************************************************************/
extern const char * kcg_real_to_string(const void* pValue);
extern int check_kcg_real_string(const char* strValue);
extern int string_to_kcg_real(const char* strValue, void* pValue);
int is_kcg_real_allow_double_convertion();
extern int kcg_real_to_double(double * nValue, const void*);
extern const char * get_kcg_real_signature();
extern int compare_kcg_real_type(int*, const char*, const void*);
#define kcg_real_filter_size 0
#define get_kcg_real_filter_utils 0
#define kcg_real_filter_values 0
/****************************************************************
 ** kcg_bool
 ****************************************************************/
extern const char * kcg_bool_to_string(const void* pValue);
extern int check_kcg_bool_string(const char* strValue);
extern int string_to_kcg_bool(const char* strValue, void* pValue);
int is_kcg_bool_allow_double_convertion();
extern int kcg_bool_to_double(double * nValue, const void*);
extern const char * get_kcg_bool_signature();
extern int compare_kcg_bool_type(int*, const char*, const void*);
#define kcg_bool_filter_size 0
#define get_kcg_bool_filter_utils 0
#define kcg_bool_filter_values 0
/****************************************************************
 ** kcg_char
 ****************************************************************/
extern const char * kcg_char_to_string(const void* pValue);
extern int check_kcg_char_string(const char* strValue);
extern int string_to_kcg_char(const char* strValue, void* pValue);
int is_kcg_char_allow_double_convertion();
extern int kcg_char_to_double(double * nValue, const void*);
extern const char * get_kcg_char_signature();
extern int compare_kcg_char_type(int*, const char*, const void*);
#define kcg_char_filter_size 0
#define get_kcg_char_filter_utils 0
#define kcg_char_filter_values 0
/****************************************************************
 ** kcg_int
 ****************************************************************/
extern const char * kcg_int_to_string(const void* pValue);
extern int check_kcg_int_string(const char* strValue);
extern int string_to_kcg_int(const char* strValue, void* pValue);
int is_kcg_int_allow_double_convertion();
extern int kcg_int_to_double(double * nValue, const void*);
extern const char * get_kcg_int_signature();
extern int compare_kcg_int_type(int*, const char*, const void*);
#define kcg_int_filter_size 0
#define get_kcg_int_filter_utils 0
#define kcg_int_filter_values 0
/****************************************************************
 ** struct__179
 ****************************************************************/
extern const char * struct__179_to_string(const void* pValue);
extern int check_struct__179_string(const char* strValue);
extern int string_to_struct__179(const char* strValue, void* pValue);
int is_struct__179_allow_double_convertion();
extern const char * get_struct__179_signature();
extern int compare_struct__179_type(int*, const char*, const void*);
#define struct__179_filter_size 7
extern FilterUtils get_struct__179_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__179_filter_values[7];
/****************************************************************
 ** array__189
 ****************************************************************/
extern const char * array__189_to_string(const void* pValue);
extern int check_array__189_string(const char* strValue);
extern int string_to_array__189(const char* strValue, void* pValue);
int is_array__189_allow_double_convertion();
extern const char * get_array__189_signature();
extern int compare_array__189_type(int*, const char*, const void*);
#define array__189_filter_size 32
extern FilterUtils get_array__189_filter_utils(const char* strFilter, void* pValue);
#define array__189_filter_values 0
/****************************************************************
 ** array_int_7
 ****************************************************************/
extern const char * array_int_7_to_string(const void* pValue);
extern int check_array_int_7_string(const char* strValue);
extern int string_to_array_int_7(const char* strValue, void* pValue);
int is_array_int_7_allow_double_convertion();
extern const char * get_array_int_7_signature();
extern int compare_array_int_7_type(int*, const char*, const void*);
#define array_int_7_filter_size 7
extern FilterUtils get_array_int_7_filter_utils(const char* strFilter, void* pValue);
#define array_int_7_filter_values 0
/****************************************************************
 ** array_int_224
 ****************************************************************/
extern const char * array_int_224_to_string(const void* pValue);
extern int check_array_int_224_string(const char* strValue);
extern int string_to_array_int_224(const char* strValue, void* pValue);
int is_array_int_224_allow_double_convertion();
extern const char * get_array_int_224_signature();
extern int compare_array_int_224_type(int*, const char*, const void*);
#define array_int_224_filter_size 224
extern FilterUtils get_array_int_224_filter_utils(const char* strFilter, void* pValue);
#define array_int_224_filter_values 0
/****************************************************************
 ** array_int_7_32
 ****************************************************************/
extern const char * array_int_7_32_to_string(const void* pValue);
extern int check_array_int_7_32_string(const char* strValue);
extern int string_to_array_int_7_32(const char* strValue, void* pValue);
int is_array_int_7_32_allow_double_convertion();
extern const char * get_array_int_7_32_signature();
extern int compare_array_int_7_32_type(int*, const char*, const void*);
#define array_int_7_32_filter_size 32
extern FilterUtils get_array_int_7_32_filter_utils(const char* strFilter, void* pValue);
#define array_int_7_32_filter_values 0
/****************************************************************
 ** array_int_7_32_224
 ****************************************************************/
extern const char * array_int_7_32_224_to_string(const void* pValue);
extern int check_array_int_7_32_224_string(const char* strValue);
extern int string_to_array_int_7_32_224(const char* strValue, void* pValue);
int is_array_int_7_32_224_allow_double_convertion();
extern const char * get_array_int_7_32_224_signature();
extern int compare_array_int_7_32_224_type(int*, const char*, const void*);
#define array_int_7_32_224_filter_size 224
extern FilterUtils get_array_int_7_32_224_filter_utils(const char* strFilter, void* pValue);
#define array_int_7_32_224_filter_values 0
/****************************************************************
 ** P005_sections_array_flat_TM
 ****************************************************************/
extern const char * P005_sections_array_flat_TM_to_string(const void* pValue);
extern int check_P005_sections_array_flat_TM_string(const char* strValue);
extern int string_to_P005_sections_array_flat_TM(const char* strValue, void* pValue);
int is_P005_sections_array_flat_TM_allow_double_convertion();
extern int P005_sections_array_flat_TM_to_double(double * nValue, const void*);
#define get_P005_sections_array_flat_TM_signature get_array_int_224_signature
#define compare_P005_sections_array_flat_TM_type compare_array_int_224_type
#define P005_sections_array_flat_TM_filter_size array_int_224_filter_size
#define get_P005_sections_array_flat_TM_filter_utils get_array_int_224_filter_utils
#define P005_sections_array_flat_TM_filter_values array_int_224_filter_values
/****************************************************************
 ** P005_OBU_sectionlist_array_T_TM
 ****************************************************************/
extern const char * P005_OBU_sectionlist_array_T_TM_to_string(const void* pValue);
extern int check_P005_OBU_sectionlist_array_T_TM_string(const char* strValue);
extern int string_to_P005_OBU_sectionlist_array_T_TM(const char* strValue, void* pValue);
int is_P005_OBU_sectionlist_array_T_TM_allow_double_convertion();
extern int P005_OBU_sectionlist_array_T_TM_to_double(double * nValue, const void*);
#define get_P005_OBU_sectionlist_array_T_TM_signature get_array_int_7_32_signature
#define compare_P005_OBU_sectionlist_array_T_TM_type compare_array_int_7_32_type
#define P005_OBU_sectionlist_array_T_TM_filter_size array_int_7_32_filter_size
#define get_P005_OBU_sectionlist_array_T_TM_filter_utils get_array_int_7_32_filter_utils
#define P005_OBU_sectionlist_array_T_TM_filter_values array_int_7_32_filter_values
/****************************************************************
 ** _1_P005_trackside_section_array_TM
 ****************************************************************/
extern const char * _1_P005_trackside_section_array_TM_to_string(const void* pValue);
extern int check__1_P005_trackside_section_array_TM_string(const char* strValue);
extern int string_to__1_P005_trackside_section_array_TM(const char* strValue, void* pValue);
int is__1_P005_trackside_section_array_TM_allow_double_convertion();
extern int _1_P005_trackside_section_array_TM_to_double(double * nValue, const void*);
#define get__1_P005_trackside_section_array_TM_signature get_array_int_7_signature
#define compare__1_P005_trackside_section_array_TM_type compare_array_int_7_type
#define _1_P005_trackside_section_array_TM_filter_size array_int_7_filter_size
#define get__1_P005_trackside_section_array_TM_filter_utils get_array_int_7_filter_utils
#define _1_P005_trackside_section_array_TM_filter_values array_int_7_filter_values
/****************************************************************
 ** P005_trackside_section_TM
 ****************************************************************/
extern const char * P005_trackside_section_TM_to_string(const void* pValue);
extern int check_P005_trackside_section_TM_string(const char* strValue);
extern int string_to_P005_trackside_section_TM(const char* strValue, void* pValue);
int is_P005_trackside_section_TM_allow_double_convertion();
extern int P005_trackside_section_TM_to_double(double * nValue, const void*);
#define get_P005_trackside_section_TM_signature get_struct__179_signature
#define compare_P005_trackside_section_TM_type compare_struct__179_type
#define P005_trackside_section_TM_filter_size struct__179_filter_size
#define get_P005_trackside_section_TM_filter_utils get_struct__179_filter_utils
#define P005_trackside_section_TM_filter_values struct__179_filter_values
/****************************************************************
 ** P005_OBU_sectionlist_T_TM
 ****************************************************************/
extern const char * P005_OBU_sectionlist_T_TM_to_string(const void* pValue);
extern int check_P005_OBU_sectionlist_T_TM_string(const char* strValue);
extern int string_to_P005_OBU_sectionlist_T_TM(const char* strValue, void* pValue);
int is_P005_OBU_sectionlist_T_TM_allow_double_convertion();
extern int P005_OBU_sectionlist_T_TM_to_double(double * nValue, const void*);
#define get_P005_OBU_sectionlist_T_TM_signature get_array__189_signature
#define compare_P005_OBU_sectionlist_T_TM_type compare_array__189_type
#define P005_OBU_sectionlist_T_TM_filter_size array__189_filter_size
#define get_P005_OBU_sectionlist_T_TM_filter_utils get_array__189_filter_utils
#define P005_OBU_sectionlist_T_TM_filter_values array__189_filter_values

#endif /*C_P005_FLATTEN_SECTIONS_TM_LIB_INTERNAL_TYPES_CONVERTION */
