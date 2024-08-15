#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 137
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LT_BANG = 1,
  aux_sym_doctype_token1 = 2,
  anon_sym_GT = 3,
  sym__doctype = 4,
  anon_sym_LT_PERCENT_AT = 5,
  anon_sym_PERCENT_GT = 6,
  anon_sym_Control = 7,
  anon_sym_control = 8,
  anon_sym_Register = 9,
  anon_sym_register = 10,
  anon_sym_Page = 11,
  anon_sym_page = 12,
  anon_sym_Master = 13,
  anon_sym_master = 14,
  anon_sym_Import = 15,
  anon_sym_import = 16,
  anon_sym_Assembly = 17,
  anon_sym_assembly = 18,
  anon_sym_Application = 19,
  anon_sym_application = 20,
  anon_sym_Implements = 21,
  anon_sym_implements = 22,
  anon_sym_MasterType = 23,
  anon_sym_masterType = 24,
  anon_sym_OutputCache = 25,
  anon_sym_outputCache = 26,
  anon_sym_PreviousPageType = 27,
  anon_sym_previousPageType = 28,
  anon_sym_Reference = 29,
  anon_sym_reference = 30,
  anon_sym_LT_PERCENT = 31,
  anon_sym_LT_PERCENT_EQ = 32,
  anon_sym_LT_PERCENT_COLON = 33,
  anon_sym_LT_PERCENT_POUND = 34,
  anon_sym_LT_PERCENT_DASH_DASH = 35,
  anon_sym_LT_PERCENT_DOLLAR = 36,
  sym_embedded_content = 37,
  anon_sym_LT = 38,
  anon_sym_SLASH_GT = 39,
  anon_sym_LT_SLASH = 40,
  anon_sym_EQ = 41,
  sym_attribute_name = 42,
  sym_attribute_value = 43,
  sym_entity = 44,
  anon_sym_SQUOTE = 45,
  aux_sym_quoted_attribute_value_token1 = 46,
  anon_sym_DQUOTE = 47,
  aux_sym_quoted_attribute_value_token2 = 48,
  sym_text = 49,
  sym__start_tag_name = 50,
  sym__script_start_tag_name = 51,
  sym__style_start_tag_name = 52,
  sym__end_tag_name = 53,
  sym_erroneous_end_tag_name = 54,
  sym__implicit_end_tag = 55,
  sym_raw_text = 56,
  sym_comment = 57,
  sym_document = 58,
  sym_doctype = 59,
  sym__node = 60,
  sym_element = 61,
  sym_script_element = 62,
  sym_style_element = 63,
  sym_directive_element = 64,
  sym_directive_name = 65,
  sym_embedded_code_element = 66,
  sym_non_code_embedded_element = 67,
  sym__embedded_indicator = 68,
  sym__embedded_element = 69,
  sym_start_tag = 70,
  sym_script_start_tag = 71,
  sym_style_start_tag = 72,
  sym_self_closing_tag = 73,
  sym_end_tag = 74,
  sym_erroneous_end_tag = 75,
  sym_attribute = 76,
  sym_quoted_attribute_value = 77,
  aux_sym_document_repeat1 = 78,
  aux_sym_directive_element_repeat1 = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_doctype_token1] = "doctype_token1",
  [anon_sym_GT] = ">",
  [sym__doctype] = "doctype",
  [anon_sym_LT_PERCENT_AT] = "<%@",
  [anon_sym_PERCENT_GT] = "%>",
  [anon_sym_Control] = "Control",
  [anon_sym_control] = "control",
  [anon_sym_Register] = "Register",
  [anon_sym_register] = "register",
  [anon_sym_Page] = "Page",
  [anon_sym_page] = "page",
  [anon_sym_Master] = "Master",
  [anon_sym_master] = "master",
  [anon_sym_Import] = "Import",
  [anon_sym_import] = "import",
  [anon_sym_Assembly] = "Assembly",
  [anon_sym_assembly] = "assembly",
  [anon_sym_Application] = "Application",
  [anon_sym_application] = "application",
  [anon_sym_Implements] = "Implements",
  [anon_sym_implements] = "implements",
  [anon_sym_MasterType] = "MasterType",
  [anon_sym_masterType] = "masterType",
  [anon_sym_OutputCache] = "OutputCache",
  [anon_sym_outputCache] = "outputCache",
  [anon_sym_PreviousPageType] = "PreviousPageType",
  [anon_sym_previousPageType] = "previousPageType",
  [anon_sym_Reference] = "Reference",
  [anon_sym_reference] = "reference",
  [anon_sym_LT_PERCENT] = "<%",
  [anon_sym_LT_PERCENT_EQ] = "<%=",
  [anon_sym_LT_PERCENT_COLON] = "<%:",
  [anon_sym_LT_PERCENT_POUND] = "<%#",
  [anon_sym_LT_PERCENT_DASH_DASH] = "<%--",
  [anon_sym_LT_PERCENT_DOLLAR] = "<%$",
  [sym_embedded_content] = "embedded_content",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [sym_entity] = "entity",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym_text] = "text",
  [sym__start_tag_name] = "tag_name",
  [sym__script_start_tag_name] = "tag_name",
  [sym__style_start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym_doctype] = "doctype",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_script_element] = "script_element",
  [sym_style_element] = "style_element",
  [sym_directive_element] = "directive_element",
  [sym_directive_name] = "directive_name",
  [sym_embedded_code_element] = "embedded_code_element",
  [sym_non_code_embedded_element] = "non_code_embedded_element",
  [sym__embedded_indicator] = "_embedded_indicator",
  [sym__embedded_element] = "_embedded_element",
  [sym_start_tag] = "start_tag",
  [sym_script_start_tag] = "start_tag",
  [sym_style_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_erroneous_end_tag] = "erroneous_end_tag",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_directive_element_repeat1] = "directive_element_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [aux_sym_doctype_token1] = aux_sym_doctype_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym__doctype] = sym__doctype,
  [anon_sym_LT_PERCENT_AT] = anon_sym_LT_PERCENT_AT,
  [anon_sym_PERCENT_GT] = anon_sym_PERCENT_GT,
  [anon_sym_Control] = anon_sym_Control,
  [anon_sym_control] = anon_sym_control,
  [anon_sym_Register] = anon_sym_Register,
  [anon_sym_register] = anon_sym_register,
  [anon_sym_Page] = anon_sym_Page,
  [anon_sym_page] = anon_sym_page,
  [anon_sym_Master] = anon_sym_Master,
  [anon_sym_master] = anon_sym_master,
  [anon_sym_Import] = anon_sym_Import,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_Assembly] = anon_sym_Assembly,
  [anon_sym_assembly] = anon_sym_assembly,
  [anon_sym_Application] = anon_sym_Application,
  [anon_sym_application] = anon_sym_application,
  [anon_sym_Implements] = anon_sym_Implements,
  [anon_sym_implements] = anon_sym_implements,
  [anon_sym_MasterType] = anon_sym_MasterType,
  [anon_sym_masterType] = anon_sym_masterType,
  [anon_sym_OutputCache] = anon_sym_OutputCache,
  [anon_sym_outputCache] = anon_sym_outputCache,
  [anon_sym_PreviousPageType] = anon_sym_PreviousPageType,
  [anon_sym_previousPageType] = anon_sym_previousPageType,
  [anon_sym_Reference] = anon_sym_Reference,
  [anon_sym_reference] = anon_sym_reference,
  [anon_sym_LT_PERCENT] = anon_sym_LT_PERCENT,
  [anon_sym_LT_PERCENT_EQ] = anon_sym_LT_PERCENT_EQ,
  [anon_sym_LT_PERCENT_COLON] = anon_sym_LT_PERCENT_COLON,
  [anon_sym_LT_PERCENT_POUND] = anon_sym_LT_PERCENT_POUND,
  [anon_sym_LT_PERCENT_DASH_DASH] = anon_sym_LT_PERCENT_DASH_DASH,
  [anon_sym_LT_PERCENT_DOLLAR] = anon_sym_LT_PERCENT_DOLLAR,
  [sym_embedded_content] = sym_embedded_content,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [sym_entity] = sym_entity,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [sym_text] = sym_text,
  [sym__start_tag_name] = sym__start_tag_name,
  [sym__script_start_tag_name] = sym__start_tag_name,
  [sym__style_start_tag_name] = sym__start_tag_name,
  [sym__end_tag_name] = sym__start_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym__implicit_end_tag] = sym__implicit_end_tag,
  [sym_raw_text] = sym_raw_text,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym_doctype] = sym_doctype,
  [sym__node] = sym__node,
  [sym_element] = sym_element,
  [sym_script_element] = sym_script_element,
  [sym_style_element] = sym_style_element,
  [sym_directive_element] = sym_directive_element,
  [sym_directive_name] = sym_directive_name,
  [sym_embedded_code_element] = sym_embedded_code_element,
  [sym_non_code_embedded_element] = sym_non_code_embedded_element,
  [sym__embedded_indicator] = sym__embedded_indicator,
  [sym__embedded_element] = sym__embedded_element,
  [sym_start_tag] = sym_start_tag,
  [sym_script_start_tag] = sym_start_tag,
  [sym_style_start_tag] = sym_start_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_erroneous_end_tag] = sym_erroneous_end_tag,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_directive_element_repeat1] = aux_sym_directive_element_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doctype_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__doctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Control] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_control] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Register] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_register] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Page] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_page] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Master] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_master] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Assembly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assembly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Application] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_application] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Implements] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implements] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MasterType] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_masterType] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OutputCache] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outputCache] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PreviousPageType] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_previousPageType] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Reference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_embedded_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__script_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__style_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_end_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_script_element] = {
    .visible = true,
    .named = true,
  },
  [sym_style_element] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_element] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_name] = {
    .visible = true,
    .named = true,
  },
  [sym_embedded_code_element] = {
    .visible = true,
    .named = true,
  },
  [sym_non_code_embedded_element] = {
    .visible = true,
    .named = true,
  },
  [sym__embedded_indicator] = {
    .visible = false,
    .named = true,
  },
  [sym__embedded_element] = {
    .visible = false,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_script_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_element_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_content = 1,
  field_directive_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_directive_name] = "directive_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_directive_name, 1},
  [1] =
    {field_content, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 12,
  [19] = 19,
  [20] = 20,
  [21] = 11,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 31,
  [33] = 30,
  [34] = 25,
  [35] = 29,
  [36] = 28,
  [37] = 20,
  [38] = 19,
  [39] = 26,
  [40] = 23,
  [41] = 24,
  [42] = 27,
  [43] = 22,
  [44] = 44,
  [45] = 14,
  [46] = 46,
  [47] = 46,
  [48] = 48,
  [49] = 17,
  [50] = 16,
  [51] = 15,
  [52] = 13,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 54,
  [57] = 53,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 55,
  [67] = 60,
  [68] = 62,
  [69] = 69,
  [70] = 55,
  [71] = 65,
  [72] = 64,
  [73] = 62,
  [74] = 69,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 69,
  [81] = 76,
  [82] = 78,
  [83] = 83,
  [84] = 75,
  [85] = 77,
  [86] = 86,
  [87] = 79,
  [88] = 88,
  [89] = 89,
  [90] = 86,
  [91] = 91,
  [92] = 92,
  [93] = 86,
  [94] = 94,
  [95] = 83,
  [96] = 94,
  [97] = 97,
  [98] = 98,
  [99] = 83,
  [100] = 79,
  [101] = 77,
  [102] = 102,
  [103] = 89,
  [104] = 104,
  [105] = 94,
  [106] = 106,
  [107] = 88,
  [108] = 104,
  [109] = 102,
  [110] = 106,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 114,
  [116] = 112,
  [117] = 117,
  [118] = 118,
  [119] = 113,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 117,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 121,
  [128] = 128,
  [129] = 124,
  [130] = 125,
  [131] = 125,
  [132] = 126,
  [133] = 118,
  [134] = 124,
  [135] = 122,
  [136] = 128,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(187);
      ADVANCE_MAP(
        '"', 463,
        '%', 10,
        '&', 3,
        '\'', 460,
        '/', 12,
        '<', 251,
        '=', 254,
        '>', 191,
        'A', 113,
        'C', 105,
        'I', 92,
        'M', 20,
        'O', 161,
        'P', 19,
        'R', 37,
        'a', 124,
        'c', 111,
        'i', 95,
        'm', 26,
        'o', 165,
        'p', 23,
        'r', 65,
        'D', 177,
        'd', 177,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(463);
      if (lookahead == '\'') ADVANCE(460);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(419);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(463);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(464);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(255);
      if (lookahead == '=') ADVANCE(254);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '%', 255,
        'A', 356,
        'C', 348,
        'I', 335,
        'M', 263,
        'O', 404,
        'P', 262,
        'R', 280,
        'a', 367,
        'c', 354,
        'i', 338,
        'm', 269,
        'o', 408,
        'p', 266,
        'r', 308,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(460);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(461);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(247);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '>') ADVANCE(191);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(194);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(194);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(252);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'P') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'P') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'T') ADVANCE(173);
      END_STATE();
    case 18:
      if (lookahead == 'T') ADVANCE(174);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(83);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(45);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(46);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(114);
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(163);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 163:
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 164:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 165:
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 166:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 167:
      if (lookahead == 'v') ADVANCE(76);
      END_STATE();
    case 168:
      if (lookahead == 'v') ADVANCE(82);
      END_STATE();
    case 169:
      if (lookahead == 'y') ADVANCE(215);
      END_STATE();
    case 170:
      if (lookahead == 'y') ADVANCE(217);
      END_STATE();
    case 171:
      if (lookahead == 'y') ADVANCE(116);
      END_STATE();
    case 172:
      if (lookahead == 'y') ADVANCE(117);
      END_STATE();
    case 173:
      if (lookahead == 'y') ADVANCE(118);
      END_STATE();
    case 174:
      if (lookahead == 'y') ADVANCE(119);
      END_STATE();
    case 175:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 177:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 178:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 179:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 180:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      END_STATE();
    case 181:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(178);
      END_STATE();
    case 182:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(466);
      END_STATE();
    case 183:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(190);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(430);
      END_STATE();
    case 185:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(250);
      END_STATE();
    case 186:
      if (eof) ADVANCE(187);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '<') ADVANCE(251);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(186);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(466);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_AT);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_Control);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_Control);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_control);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_control);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_Register);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_Register);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_register);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_register);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_Page);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_Page);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_page);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_page);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_Master);
      if (lookahead == 'T') ADVANCE(171);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_Master);
      if (lookahead == 'T') ADVANCE(414);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_master);
      if (lookahead == 'T') ADVANCE(172);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_master);
      if (lookahead == 'T') ADVANCE(415);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_Import);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_Import);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_Assembly);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_Assembly);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_assembly);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_assembly);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_Application);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_Application);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_application);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_application);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_Implements);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_Implements);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_implements);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_MasterType);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_MasterType);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_masterType);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_masterType);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_OutputCache);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_OutputCache);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_outputCache);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_outputCache);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_PreviousPageType);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_PreviousPageType);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_previousPageType);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_previousPageType);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_Reference);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_Reference);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_reference);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_reference);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '$') ADVANCE(248);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ':') ADVANCE(245);
      if (lookahead == '=') ADVANCE(244);
      if (lookahead == '@') ADVANCE(193);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_COLON);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_DASH_DASH);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_DOLLAR);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_embedded_content);
      if (lookahead == '%') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_embedded_content);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '/') ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '>') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'C') ADVANCE(264);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'C') ADVANCE(267);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'P') ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'P') ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'T') ADVANCE(416);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'T') ADVANCE(417);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(312);
      if (lookahead == 'r') ADVANCE(281);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(382);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(278);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(384);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'b') ADVANCE(326);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'b') ADVANCE(330);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'c') ADVANCE(316);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'c') ADVANCE(265);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'c') ADVANCE(284);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'c') ADVANCE(285);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'c') ADVANCE(317);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'c') ADVANCE(270);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(410);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'f') ADVANCE(296);
      if (lookahead == 'g') ADVANCE(322);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'f') ADVANCE(307);
      if (lookahead == 'g') ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'g') ADVANCE(282);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'g') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'g') ADVANCE(290);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'g') ADVANCE(305);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'h') ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'h') ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'i') ADVANCE(349);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'i') ADVANCE(350);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'i') ADVANCE(385);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'i') ADVANCE(386);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'i') ADVANCE(355);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(318);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(413);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead == 'o') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(306);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(272);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(358);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(273);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(364);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(393);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(395);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(277);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(405);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(341);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(409);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'p') ADVANCE(357);
      if (lookahead == 's') ADVANCE(381);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'p') ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'p') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'p') ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'p') ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'p') ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'p') ADVANCE(292);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'p') ADVANCE(406);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'p') ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'p') ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'p') ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'p') ADVANCE(366);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(391);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(353);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(258);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(302);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(397);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(398);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(399);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(379);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(380);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(300);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(376);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(365);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'u') ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'u') ADVANCE(378);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'u') ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'u') ADVANCE(402);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'u') ADVANCE(403);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'u') ADVANCE(387);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'v') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'v') ADVANCE(325);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'y') ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'y') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'y') ADVANCE(359);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'y') ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'y') ADVANCE(361);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'y') ADVANCE(362);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(422);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(421);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(426);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(427);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(428);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(429);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(449);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(452);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(462);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(465);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(466);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 186, .external_lex_state = 2},
  [2] = {.lex_state = 186, .external_lex_state = 3},
  [3] = {.lex_state = 186, .external_lex_state = 3},
  [4] = {.lex_state = 186, .external_lex_state = 3},
  [5] = {.lex_state = 186, .external_lex_state = 3},
  [6] = {.lex_state = 186, .external_lex_state = 2},
  [7] = {.lex_state = 186, .external_lex_state = 3},
  [8] = {.lex_state = 5, .external_lex_state = 2},
  [9] = {.lex_state = 186, .external_lex_state = 2},
  [10] = {.lex_state = 5, .external_lex_state = 2},
  [11] = {.lex_state = 186, .external_lex_state = 2},
  [12] = {.lex_state = 186, .external_lex_state = 2},
  [13] = {.lex_state = 186, .external_lex_state = 3},
  [14] = {.lex_state = 186, .external_lex_state = 3},
  [15] = {.lex_state = 186, .external_lex_state = 3},
  [16] = {.lex_state = 186, .external_lex_state = 3},
  [17] = {.lex_state = 186, .external_lex_state = 3},
  [18] = {.lex_state = 186, .external_lex_state = 3},
  [19] = {.lex_state = 186, .external_lex_state = 2},
  [20] = {.lex_state = 186, .external_lex_state = 2},
  [21] = {.lex_state = 186, .external_lex_state = 3},
  [22] = {.lex_state = 186, .external_lex_state = 3},
  [23] = {.lex_state = 186, .external_lex_state = 3},
  [24] = {.lex_state = 186, .external_lex_state = 3},
  [25] = {.lex_state = 186, .external_lex_state = 2},
  [26] = {.lex_state = 186, .external_lex_state = 3},
  [27] = {.lex_state = 186, .external_lex_state = 2},
  [28] = {.lex_state = 186, .external_lex_state = 3},
  [29] = {.lex_state = 186, .external_lex_state = 3},
  [30] = {.lex_state = 186, .external_lex_state = 3},
  [31] = {.lex_state = 186, .external_lex_state = 2},
  [32] = {.lex_state = 186, .external_lex_state = 3},
  [33] = {.lex_state = 186, .external_lex_state = 2},
  [34] = {.lex_state = 186, .external_lex_state = 3},
  [35] = {.lex_state = 186, .external_lex_state = 2},
  [36] = {.lex_state = 186, .external_lex_state = 2},
  [37] = {.lex_state = 186, .external_lex_state = 3},
  [38] = {.lex_state = 186, .external_lex_state = 3},
  [39] = {.lex_state = 186, .external_lex_state = 2},
  [40] = {.lex_state = 186, .external_lex_state = 2},
  [41] = {.lex_state = 186, .external_lex_state = 2},
  [42] = {.lex_state = 186, .external_lex_state = 3},
  [43] = {.lex_state = 186, .external_lex_state = 2},
  [44] = {.lex_state = 186, .external_lex_state = 3},
  [45] = {.lex_state = 186, .external_lex_state = 2},
  [46] = {.lex_state = 186, .external_lex_state = 2},
  [47] = {.lex_state = 186, .external_lex_state = 3},
  [48] = {.lex_state = 186, .external_lex_state = 3},
  [49] = {.lex_state = 186, .external_lex_state = 2},
  [50] = {.lex_state = 186, .external_lex_state = 2},
  [51] = {.lex_state = 186, .external_lex_state = 2},
  [52] = {.lex_state = 186, .external_lex_state = 2},
  [53] = {.lex_state = 9, .external_lex_state = 4},
  [54] = {.lex_state = 9, .external_lex_state = 4},
  [55] = {.lex_state = 9, .external_lex_state = 4},
  [56] = {.lex_state = 9, .external_lex_state = 4},
  [57] = {.lex_state = 9, .external_lex_state = 4},
  [58] = {.lex_state = 9, .external_lex_state = 2},
  [59] = {.lex_state = 9, .external_lex_state = 2},
  [60] = {.lex_state = 4, .external_lex_state = 2},
  [61] = {.lex_state = 9, .external_lex_state = 2},
  [62] = {.lex_state = 1, .external_lex_state = 2},
  [63] = {.lex_state = 9, .external_lex_state = 2},
  [64] = {.lex_state = 4, .external_lex_state = 2},
  [65] = {.lex_state = 4, .external_lex_state = 2},
  [66] = {.lex_state = 4, .external_lex_state = 2},
  [67] = {.lex_state = 4, .external_lex_state = 2},
  [68] = {.lex_state = 1, .external_lex_state = 2},
  [69] = {.lex_state = 9, .external_lex_state = 4},
  [70] = {.lex_state = 9, .external_lex_state = 2},
  [71] = {.lex_state = 4, .external_lex_state = 2},
  [72] = {.lex_state = 4, .external_lex_state = 2},
  [73] = {.lex_state = 1, .external_lex_state = 2},
  [74] = {.lex_state = 9, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 5},
  [76] = {.lex_state = 0, .external_lex_state = 6},
  [77] = {.lex_state = 9, .external_lex_state = 4},
  [78] = {.lex_state = 0, .external_lex_state = 6},
  [79] = {.lex_state = 9, .external_lex_state = 4},
  [80] = {.lex_state = 4, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 6},
  [82] = {.lex_state = 0, .external_lex_state = 6},
  [83] = {.lex_state = 9, .external_lex_state = 4},
  [84] = {.lex_state = 0, .external_lex_state = 5},
  [85] = {.lex_state = 9, .external_lex_state = 2},
  [86] = {.lex_state = 2, .external_lex_state = 2},
  [87] = {.lex_state = 4, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 7},
  [89] = {.lex_state = 6, .external_lex_state = 2},
  [90] = {.lex_state = 2, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 6},
  [92] = {.lex_state = 0, .external_lex_state = 6},
  [93] = {.lex_state = 2, .external_lex_state = 2},
  [94] = {.lex_state = 7, .external_lex_state = 2},
  [95] = {.lex_state = 4, .external_lex_state = 2},
  [96] = {.lex_state = 7, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 6},
  [98] = {.lex_state = 0, .external_lex_state = 6},
  [99] = {.lex_state = 9, .external_lex_state = 2},
  [100] = {.lex_state = 9, .external_lex_state = 2},
  [101] = {.lex_state = 4, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 6, .external_lex_state = 2},
  [104] = {.lex_state = 6, .external_lex_state = 2},
  [105] = {.lex_state = 7, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 7},
  [108] = {.lex_state = 6, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 4, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 183, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 8},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 9},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 9},
  [133] = {.lex_state = 183, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 8},
  [136] = {.lex_state = 0, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym__doctype] = ACTIONS(1),
    [anon_sym_LT_PERCENT_AT] = ACTIONS(1),
    [anon_sym_PERCENT_GT] = ACTIONS(1),
    [anon_sym_Control] = ACTIONS(1),
    [anon_sym_control] = ACTIONS(1),
    [anon_sym_Register] = ACTIONS(1),
    [anon_sym_register] = ACTIONS(1),
    [anon_sym_Page] = ACTIONS(1),
    [anon_sym_page] = ACTIONS(1),
    [anon_sym_Master] = ACTIONS(1),
    [anon_sym_master] = ACTIONS(1),
    [anon_sym_Import] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_Assembly] = ACTIONS(1),
    [anon_sym_assembly] = ACTIONS(1),
    [anon_sym_Application] = ACTIONS(1),
    [anon_sym_application] = ACTIONS(1),
    [anon_sym_Implements] = ACTIONS(1),
    [anon_sym_implements] = ACTIONS(1),
    [anon_sym_MasterType] = ACTIONS(1),
    [anon_sym_masterType] = ACTIONS(1),
    [anon_sym_OutputCache] = ACTIONS(1),
    [anon_sym_outputCache] = ACTIONS(1),
    [anon_sym_PreviousPageType] = ACTIONS(1),
    [anon_sym_previousPageType] = ACTIONS(1),
    [anon_sym_Reference] = ACTIONS(1),
    [anon_sym_reference] = ACTIONS(1),
    [anon_sym_LT_PERCENT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_PERCENT_COLON] = ACTIONS(1),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(1),
    [anon_sym_LT_PERCENT_DASH_DASH] = ACTIONS(1),
    [anon_sym_LT_PERCENT_DOLLAR] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_entity] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__start_tag_name] = ACTIONS(1),
    [sym__script_start_tag_name] = ACTIONS(1),
    [sym__style_start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(120),
    [sym_doctype] = STATE(9),
    [sym__node] = STATE(9),
    [sym_element] = STATE(9),
    [sym_script_element] = STATE(9),
    [sym_style_element] = STATE(9),
    [sym_directive_element] = STATE(9),
    [sym_embedded_code_element] = STATE(9),
    [sym_non_code_embedded_element] = STATE(9),
    [sym__embedded_indicator] = STATE(108),
    [sym__embedded_element] = STATE(9),
    [sym_start_tag] = STATE(5),
    [sym_script_start_tag] = STATE(82),
    [sym_style_start_tag] = STATE(81),
    [sym_self_closing_tag] = STATE(19),
    [sym_erroneous_end_tag] = STATE(9),
    [aux_sym_document_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(7),
    [anon_sym_LT_PERCENT_AT] = ACTIONS(9),
    [anon_sym_LT_PERCENT] = ACTIONS(11),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(13),
    [anon_sym_LT_PERCENT_COLON] = ACTIONS(13),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(13),
    [anon_sym_LT_PERCENT_DASH_DASH] = ACTIONS(13),
    [anon_sym_LT_PERCENT_DOLLAR] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_LT_SLASH] = ACTIONS(17),
    [sym_entity] = ACTIONS(19),
    [sym_text] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_BANG,
    ACTIONS(23), 1,
      anon_sym_LT_PERCENT_AT,
    ACTIONS(25), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      anon_sym_LT_SLASH,
    ACTIONS(35), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(15), 1,
      sym_end_tag,
    STATE(38), 1,
      sym_self_closing_tag,
    STATE(76), 1,
      sym_style_start_tag,
    STATE(78), 1,
      sym_script_start_tag,
    STATE(104), 1,
      sym__embedded_indicator,
    ACTIONS(33), 2,
      sym_entity,
      sym_text,
    ACTIONS(27), 5,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
    STATE(7), 11,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_directive_element,
      sym_embedded_code_element,
      sym_non_code_embedded_element,
      sym__embedded_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [64] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_BANG,
    ACTIONS(23), 1,
      anon_sym_LT_PERCENT_AT,
    ACTIONS(25), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(38), 1,
      sym_self_closing_tag,
    STATE(51), 1,
      sym_end_tag,
    STATE(76), 1,
      sym_style_start_tag,
    STATE(78), 1,
      sym_script_start_tag,
    STATE(104), 1,
      sym__embedded_indicator,
    ACTIONS(33), 2,
      sym_entity,
      sym_text,
    ACTIONS(27), 5,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
    STATE(7), 11,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_directive_element,
      sym_embedded_code_element,
      sym_non_code_embedded_element,
      sym__embedded_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [128] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_BANG,
    ACTIONS(23), 1,
      anon_sym_LT_PERCENT_AT,
    ACTIONS(25), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      anon_sym_LT_SLASH,
    ACTIONS(43), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(30), 1,
      sym_end_tag,
    STATE(38), 1,
      sym_self_closing_tag,
    STATE(76), 1,
      sym_style_start_tag,
    STATE(78), 1,
      sym_script_start_tag,
    STATE(104), 1,
      sym__embedded_indicator,
    ACTIONS(41), 2,
      sym_entity,
      sym_text,
    ACTIONS(27), 5,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
    STATE(2), 11,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_directive_element,
      sym_embedded_code_element,
      sym_non_code_embedded_element,
      sym__embedded_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [192] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_BANG,
    ACTIONS(23), 1,
      anon_sym_LT_PERCENT_AT,
    ACTIONS(25), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(47), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(33), 1,
      sym_end_tag,
    STATE(38), 1,
      sym_self_closing_tag,
    STATE(76), 1,
      sym_style_start_tag,
    STATE(78), 1,
      sym_script_start_tag,
    STATE(104), 1,
      sym__embedded_indicator,
    ACTIONS(45), 2,
      sym_entity,
      sym_text,
    ACTIONS(27), 5,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
    STATE(3), 11,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_directive_element,
      sym_embedded_code_element,
      sym_non_code_embedded_element,
      sym__embedded_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [256] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_LT_BANG,
    ACTIONS(54), 1,
      anon_sym_LT_PERCENT_AT,
    ACTIONS(57), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(63), 1,
      anon_sym_LT,
    ACTIONS(66), 1,
      anon_sym_LT_SLASH,
    STATE(5), 1,
      sym_start_tag,
    STATE(19), 1,
      sym_self_closing_tag,
    STATE(81), 1,
      sym_style_start_tag,
    STATE(82), 1,
      sym_script_start_tag,
    STATE(108), 1,
      sym__embedded_indicator,
    ACTIONS(69), 2,
      sym_entity,
      sym_text,
    ACTIONS(60), 5,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
    STATE(6), 11,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_directive_element,
      sym_embedded_code_element,
      sym_non_code_embedded_element,
      sym__embedded_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [317] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym__implicit_end_tag,
    ACTIONS(72), 1,
      anon_sym_LT_BANG,
    ACTIONS(75), 1,
      anon_sym_LT_PERCENT_AT,
    ACTIONS(78), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(84), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_start_tag,
    STATE(38), 1,
      sym_self_closing_tag,
    STATE(76), 1,
      sym_style_start_tag,
    STATE(78), 1,
      sym_script_start_tag,
    STATE(104), 1,
      sym__embedded_indicator,
    ACTIONS(90), 2,
      sym_entity,
      sym_text,
    ACTIONS(81), 5,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
    STATE(7), 11,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_directive_element,
      sym_embedded_code_element,
      sym_non_code_embedded_element,
      sym__embedded_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [378] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(97), 1,
      sym_attribute_name,
    STATE(64), 1,
      sym_directive_name,
    STATE(65), 2,
      sym_attribute,
      aux_sym_directive_element_repeat1,
    ACTIONS(95), 24,
      anon_sym_Control,
      anon_sym_control,
      anon_sym_Register,
      anon_sym_register,
      anon_sym_Page,
      anon_sym_page,
      anon_sym_Master,
      anon_sym_master,
      anon_sym_Import,
      anon_sym_import,
      anon_sym_Assembly,
      anon_sym_assembly,
      anon_sym_Application,
      anon_sym_application,
      anon_sym_Implements,
      anon_sym_implements,
      anon_sym_MasterType,
      anon_sym_masterType,
      anon_sym_OutputCache,
      anon_sym_outputCache,
      anon_sym_PreviousPageType,
      anon_sym_previousPageType,
      anon_sym_Reference,
      anon_sym_reference,
  [421] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_LT_PERCENT_AT,
    ACTIONS(11), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_LT_SLASH,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_start_tag,
    STATE(19), 1,
      sym_self_closing_tag,
    STATE(81), 1,
      sym_style_start_tag,
    STATE(82), 1,
      sym_script_start_tag,
    STATE(108), 1,
      sym__embedded_indicator,
    ACTIONS(101), 2,
      sym_entity,
      sym_text,
    ACTIONS(13), 5,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
    STATE(6), 11,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_directive_element,
      sym_embedded_code_element,
      sym_non_code_embedded_element,
      sym__embedded_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [482] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_attribute_name,
    ACTIONS(103), 1,
      anon_sym_PERCENT_GT,
    STATE(72), 1,
      sym_directive_name,
    STATE(71), 2,
      sym_attribute,
      aux_sym_directive_element_repeat1,
    ACTIONS(95), 24,
      anon_sym_Control,
      anon_sym_control,
      anon_sym_Register,
      anon_sym_register,
      anon_sym_Page,
      anon_sym_page,
      anon_sym_Master,
      anon_sym_master,
      anon_sym_Import,
      anon_sym_import,
      anon_sym_Assembly,
      anon_sym_assembly,
      anon_sym_Application,
      anon_sym_application,
      anon_sym_Implements,
      anon_sym_implements,
      anon_sym_MasterType,
      anon_sym_masterType,
      anon_sym_OutputCache,
      anon_sym_outputCache,
      anon_sym_PreviousPageType,
      anon_sym_previousPageType,
      anon_sym_Reference,
      anon_sym_reference,
  [525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(105), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(109), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(113), 11,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(117), 11,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(121), 11,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(125), 11,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(129), 11,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(109), 11,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(133), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(137), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(105), 11,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(141), 11,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(145), 11,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(149), 11,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(153), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(157), 11,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(161), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(165), 11,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(169), 11,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(173), 11,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(177), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(177), 11,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(173), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(153), 11,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(169), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(165), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(137), 11,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(133), 11,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(157), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(145), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(149), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(161), 11,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(141), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(181), 11,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(117), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(185), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(185), 11,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(189), 11,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(129), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(125), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(121), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT,
    ACTIONS(113), 11,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_COLON,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
      anon_sym_LT_PERCENT_DOLLAR,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1407] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_SLASH_GT,
    ACTIONS(197), 1,
      sym_attribute_name,
    STATE(55), 2,
      sym_attribute,
      aux_sym_directive_element_repeat1,
  [1424] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_attribute_name,
    ACTIONS(199), 1,
      anon_sym_GT,
    ACTIONS(201), 1,
      anon_sym_SLASH_GT,
    STATE(53), 2,
      sym_attribute,
      aux_sym_directive_element_repeat1,
  [1441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym_attribute_name,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(55), 2,
      sym_attribute,
      aux_sym_directive_element_repeat1,
  [1456] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_attribute_name,
    ACTIONS(199), 1,
      anon_sym_GT,
    ACTIONS(208), 1,
      anon_sym_SLASH_GT,
    STATE(57), 2,
      sym_attribute,
      aux_sym_directive_element_repeat1,
  [1473] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      sym_attribute_name,
    ACTIONS(210), 1,
      anon_sym_SLASH_GT,
    STATE(55), 2,
      sym_attribute,
      aux_sym_directive_element_repeat1,
  [1490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_GT,
    ACTIONS(214), 1,
      sym_attribute_name,
    STATE(61), 2,
      sym_attribute,
      aux_sym_directive_element_repeat1,
  [1504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_attribute_name,
    ACTIONS(216), 1,
      anon_sym_GT,
    STATE(63), 2,
      sym_attribute,
      aux_sym_directive_element_repeat1,
  [1518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_attribute_name,
    ACTIONS(218), 1,
      anon_sym_PERCENT_GT,
    STATE(66), 2,
      sym_attribute,
      aux_sym_directive_element_repeat1,
  [1532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_attribute_name,
    ACTIONS(220), 1,
      anon_sym_GT,
    STATE(70), 2,
      sym_attribute,
      aux_sym_directive_element_repeat1,
  [1546] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_attribute_value,
    ACTIONS(224), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      sym_quoted_attribute_value,
  [1562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_attribute_name,
    ACTIONS(228), 1,
      anon_sym_GT,
    STATE(70), 2,
      sym_attribute,
      aux_sym_directive_element_repeat1,
  [1576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_attribute_name,
    ACTIONS(230), 1,
      anon_sym_PERCENT_GT,
    STATE(67), 2,
      sym_attribute,
      aux_sym_directive_element_repeat1,
  [1590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_attribute_name,
    ACTIONS(232), 1,
      anon_sym_PERCENT_GT,
    STATE(66), 2,
      sym_attribute,
      aux_sym_directive_element_repeat1,
  [1604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(234), 1,
      sym_attribute_name,
    STATE(66), 2,
      sym_attribute,
      aux_sym_directive_element_repeat1,
  [1618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_attribute_name,
    ACTIONS(237), 1,
      anon_sym_PERCENT_GT,
    STATE(66), 2,
      sym_attribute,
      aux_sym_directive_element_repeat1,
  [1632] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_attribute_value,
    ACTIONS(241), 1,
      anon_sym_SQUOTE,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      sym_quoted_attribute_value,
  [1648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_EQ,
    ACTIONS(245), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_GT,
    ACTIONS(249), 1,
      sym_attribute_name,
    STATE(70), 2,
      sym_attribute,
      aux_sym_directive_element_repeat1,
  [1674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_attribute_name,
    ACTIONS(252), 1,
      anon_sym_PERCENT_GT,
    STATE(66), 2,
      sym_attribute,
      aux_sym_directive_element_repeat1,
  [1688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_attribute_name,
    ACTIONS(254), 1,
      anon_sym_PERCENT_GT,
    STATE(60), 2,
      sym_attribute,
      aux_sym_directive_element_repeat1,
  [1702] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_attribute_value,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      sym_quoted_attribute_value,
  [1718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(245), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym__start_tag_name,
    ACTIONS(266), 1,
      sym__script_start_tag_name,
    ACTIONS(268), 1,
      sym__style_start_tag_name,
  [1742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LT_SLASH,
    ACTIONS(272), 1,
      sym_raw_text,
    STATE(28), 1,
      sym_end_tag,
  [1755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LT_SLASH,
    ACTIONS(276), 1,
      sym_raw_text,
    STATE(29), 1,
      sym_end_tag,
  [1777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1786] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(280), 1,
      anon_sym_EQ,
    ACTIONS(282), 1,
      sym_attribute_name,
  [1799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LT_SLASH,
    ACTIONS(286), 1,
      sym_raw_text,
    STATE(36), 1,
      sym_end_tag,
  [1812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LT_SLASH,
    ACTIONS(288), 1,
      sym_raw_text,
    STATE(35), 1,
      sym_end_tag,
  [1825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym__script_start_tag_name,
    ACTIONS(268), 1,
      sym__style_start_tag_name,
    ACTIONS(292), 1,
      sym__start_tag_name,
  [1847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      aux_sym_quoted_attribute_value_token2,
  [1865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(298), 1,
      sym_attribute_name,
  [1875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym__end_tag_name,
    ACTIONS(302), 1,
      sym_erroneous_end_tag_name,
  [1885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(306), 1,
      sym_embedded_content,
  [1895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(310), 1,
      aux_sym_quoted_attribute_value_token2,
  [1905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      aux_sym_quoted_attribute_value_token2,
  [1931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      aux_sym_quoted_attribute_value_token1,
  [1941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(322), 1,
      sym_attribute_name,
  [1951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    ACTIONS(324), 1,
      aux_sym_quoted_attribute_value_token1,
  [1961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(330), 1,
      sym_attribute_name,
  [2003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LT_SLASH,
    STATE(46), 1,
      sym_end_tag,
  [2013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(334), 1,
      sym_embedded_content,
  [2023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(338), 1,
      sym_embedded_content,
  [2033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(340), 1,
      aux_sym_quoted_attribute_value_token1,
  [2043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LT_SLASH,
    STATE(52), 1,
      sym_end_tag,
  [2053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(342), 1,
      sym__end_tag_name,
  [2063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(346), 1,
      sym_embedded_content,
  [2073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LT_SLASH,
    STATE(47), 1,
      sym_end_tag,
  [2083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LT_SLASH,
    STATE(13), 1,
      sym_end_tag,
  [2093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(350), 1,
      sym_attribute_name,
  [2103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_GT,
  [2110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_PERCENT_GT,
  [2117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_PERCENT_GT,
  [2124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_PERCENT_GT,
  [2131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_GT,
  [2138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_GT,
  [2145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      aux_sym_doctype_token1,
  [2152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_PERCENT_GT,
  [2159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
  [2166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_GT,
  [2173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym__end_tag_name,
  [2180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_GT,
  [2187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_SQUOTE,
  [2194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_DQUOTE,
  [2201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_erroneous_end_tag_name,
  [2208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_GT,
  [2215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym__doctype,
  [2222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
  [2229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
  [2236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
  [2243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_erroneous_end_tag_name,
  [2250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      aux_sym_doctype_token1,
  [2257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_SQUOTE,
  [2264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym__end_tag_name,
  [2271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym__doctype,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 192,
  [SMALL_STATE(6)] = 256,
  [SMALL_STATE(7)] = 317,
  [SMALL_STATE(8)] = 378,
  [SMALL_STATE(9)] = 421,
  [SMALL_STATE(10)] = 482,
  [SMALL_STATE(11)] = 525,
  [SMALL_STATE(12)] = 546,
  [SMALL_STATE(13)] = 567,
  [SMALL_STATE(14)] = 588,
  [SMALL_STATE(15)] = 609,
  [SMALL_STATE(16)] = 630,
  [SMALL_STATE(17)] = 651,
  [SMALL_STATE(18)] = 672,
  [SMALL_STATE(19)] = 693,
  [SMALL_STATE(20)] = 714,
  [SMALL_STATE(21)] = 735,
  [SMALL_STATE(22)] = 756,
  [SMALL_STATE(23)] = 777,
  [SMALL_STATE(24)] = 798,
  [SMALL_STATE(25)] = 819,
  [SMALL_STATE(26)] = 840,
  [SMALL_STATE(27)] = 861,
  [SMALL_STATE(28)] = 882,
  [SMALL_STATE(29)] = 903,
  [SMALL_STATE(30)] = 924,
  [SMALL_STATE(31)] = 945,
  [SMALL_STATE(32)] = 966,
  [SMALL_STATE(33)] = 987,
  [SMALL_STATE(34)] = 1008,
  [SMALL_STATE(35)] = 1029,
  [SMALL_STATE(36)] = 1050,
  [SMALL_STATE(37)] = 1071,
  [SMALL_STATE(38)] = 1092,
  [SMALL_STATE(39)] = 1113,
  [SMALL_STATE(40)] = 1134,
  [SMALL_STATE(41)] = 1155,
  [SMALL_STATE(42)] = 1176,
  [SMALL_STATE(43)] = 1197,
  [SMALL_STATE(44)] = 1218,
  [SMALL_STATE(45)] = 1239,
  [SMALL_STATE(46)] = 1260,
  [SMALL_STATE(47)] = 1281,
  [SMALL_STATE(48)] = 1302,
  [SMALL_STATE(49)] = 1323,
  [SMALL_STATE(50)] = 1344,
  [SMALL_STATE(51)] = 1365,
  [SMALL_STATE(52)] = 1386,
  [SMALL_STATE(53)] = 1407,
  [SMALL_STATE(54)] = 1424,
  [SMALL_STATE(55)] = 1441,
  [SMALL_STATE(56)] = 1456,
  [SMALL_STATE(57)] = 1473,
  [SMALL_STATE(58)] = 1490,
  [SMALL_STATE(59)] = 1504,
  [SMALL_STATE(60)] = 1518,
  [SMALL_STATE(61)] = 1532,
  [SMALL_STATE(62)] = 1546,
  [SMALL_STATE(63)] = 1562,
  [SMALL_STATE(64)] = 1576,
  [SMALL_STATE(65)] = 1590,
  [SMALL_STATE(66)] = 1604,
  [SMALL_STATE(67)] = 1618,
  [SMALL_STATE(68)] = 1632,
  [SMALL_STATE(69)] = 1648,
  [SMALL_STATE(70)] = 1660,
  [SMALL_STATE(71)] = 1674,
  [SMALL_STATE(72)] = 1688,
  [SMALL_STATE(73)] = 1702,
  [SMALL_STATE(74)] = 1718,
  [SMALL_STATE(75)] = 1729,
  [SMALL_STATE(76)] = 1742,
  [SMALL_STATE(77)] = 1755,
  [SMALL_STATE(78)] = 1764,
  [SMALL_STATE(79)] = 1777,
  [SMALL_STATE(80)] = 1786,
  [SMALL_STATE(81)] = 1799,
  [SMALL_STATE(82)] = 1812,
  [SMALL_STATE(83)] = 1825,
  [SMALL_STATE(84)] = 1834,
  [SMALL_STATE(85)] = 1847,
  [SMALL_STATE(86)] = 1855,
  [SMALL_STATE(87)] = 1865,
  [SMALL_STATE(88)] = 1875,
  [SMALL_STATE(89)] = 1885,
  [SMALL_STATE(90)] = 1895,
  [SMALL_STATE(91)] = 1905,
  [SMALL_STATE(92)] = 1913,
  [SMALL_STATE(93)] = 1921,
  [SMALL_STATE(94)] = 1931,
  [SMALL_STATE(95)] = 1941,
  [SMALL_STATE(96)] = 1951,
  [SMALL_STATE(97)] = 1961,
  [SMALL_STATE(98)] = 1969,
  [SMALL_STATE(99)] = 1977,
  [SMALL_STATE(100)] = 1985,
  [SMALL_STATE(101)] = 1993,
  [SMALL_STATE(102)] = 2003,
  [SMALL_STATE(103)] = 2013,
  [SMALL_STATE(104)] = 2023,
  [SMALL_STATE(105)] = 2033,
  [SMALL_STATE(106)] = 2043,
  [SMALL_STATE(107)] = 2053,
  [SMALL_STATE(108)] = 2063,
  [SMALL_STATE(109)] = 2073,
  [SMALL_STATE(110)] = 2083,
  [SMALL_STATE(111)] = 2093,
  [SMALL_STATE(112)] = 2103,
  [SMALL_STATE(113)] = 2110,
  [SMALL_STATE(114)] = 2117,
  [SMALL_STATE(115)] = 2124,
  [SMALL_STATE(116)] = 2131,
  [SMALL_STATE(117)] = 2138,
  [SMALL_STATE(118)] = 2145,
  [SMALL_STATE(119)] = 2152,
  [SMALL_STATE(120)] = 2159,
  [SMALL_STATE(121)] = 2166,
  [SMALL_STATE(122)] = 2173,
  [SMALL_STATE(123)] = 2180,
  [SMALL_STATE(124)] = 2187,
  [SMALL_STATE(125)] = 2194,
  [SMALL_STATE(126)] = 2201,
  [SMALL_STATE(127)] = 2208,
  [SMALL_STATE(128)] = 2215,
  [SMALL_STATE(129)] = 2222,
  [SMALL_STATE(130)] = 2229,
  [SMALL_STATE(131)] = 2236,
  [SMALL_STATE(132)] = 2243,
  [SMALL_STATE(133)] = 2250,
  [SMALL_STATE(134)] = 2257,
  [SMALL_STATE(135)] = 2264,
  [SMALL_STATE(136)] = 2271,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_element, 4, 0, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_element, 4, 0, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_code_embedded_element, 3, 0, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_code_embedded_element, 3, 0, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_element, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_element, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_code_element, 3, 0, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_embedded_code_element, 3, 0, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_element, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_element, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_code_element, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_embedded_code_element, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_element, 3, 0, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_element, 3, 0, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_code_embedded_element, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_code_embedded_element, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_element_repeat1, 2, 0, 0),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_element_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_element_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_element_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_name, 1, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_name, 1, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [368] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__start_tag_name = 0,
  ts_external_token__script_start_tag_name = 1,
  ts_external_token__style_start_tag_name = 2,
  ts_external_token__end_tag_name = 3,
  ts_external_token_erroneous_end_tag_name = 4,
  ts_external_token_SLASH_GT = 5,
  ts_external_token__implicit_end_tag = 6,
  ts_external_token_raw_text = 7,
  ts_external_token_comment = 8,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__script_start_tag_name] = sym__script_start_tag_name,
  [ts_external_token__style_start_tag_name] = sym__style_start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_html_external_scanner_create(void);
void tree_sitter_html_external_scanner_destroy(void *);
bool tree_sitter_html_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_html_external_scanner_serialize(void *, char *);
void tree_sitter_html_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_html(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_html_external_scanner_create,
      tree_sitter_html_external_scanner_destroy,
      tree_sitter_html_external_scanner_scan,
      tree_sitter_html_external_scanner_serialize,
      tree_sitter_html_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
