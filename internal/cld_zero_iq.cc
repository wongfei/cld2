#include "cld_zero_iq.h"
#include "compact_lang_det.h"
#include "lang_script.h"

extern "C" CLD2_API const char* DetectLanguageZeroIQ(const char* buffer, int buffer_length)
{
	bool is_plain_text = true;
	bool is_reliable = false;
	int valid_prefix_bytes = 0;
	
	CLD2::Language lang = CLD2::DetectLanguageCheckUTF8(buffer, buffer_length, is_plain_text, &is_reliable, &valid_prefix_bytes);
	
	const char* code = LanguageCode(lang);
	
	return code;
}
