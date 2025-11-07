add_library(cld2 SHARED 
  cldutil.cc cldutil_shared.cc compact_lang_det.cc compact_lang_det_hint_code.cc 
  compact_lang_det_impl.cc  debug.cc fixunicodevalue.cc 
  generated_entities.cc  generated_language.cc generated_ulscript.cc 
  getonescriptspan.cc lang_script.cc offsetmap.cc  scoreonescriptspan.cc 
  tote.cc utf8statetable.cc 
  cld_generated_cjk_uni_prop_80.cc cld2_generated_cjk_compatible.cc 
  cld_generated_cjk_delta_bi_4.cc generated_distinct_bi_0.cc 
  cld2_generated_quadchrome_2.cc cld2_generated_deltaoctachrome.cc 
  cld2_generated_distinctoctachrome.cc  cld_generated_score_quad_octa_2.cc 
  cld_zero_iq.cc
)

target_compile_definitions(cld2 PUBLIC CLD2_EXPORTS)

target_include_directories(cld2 PUBLIC "${PROJECT_SOURCE_DIR}")
target_include_directories(cld2 PUBLIC "${PROJECT_SOURCE_DIR}/public")
target_include_directories(cld2 PUBLIC "${PROJECT_SOURCE_DIR}/internal")
