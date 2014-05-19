#pragma once

#include <glbinding/types.h>
#include <glbinding/enums.h>

namespace gl {

const GLbitfield _2X_BIT_ATI = 0x00000001;
const GLbitfield _4X_BIT_ATI = 0x00000002;
const GLbitfield _8X_BIT_ATI = 0x00000004;
const GLbitfield ACCUM_BUFFER_BIT = 0x00000200;
const GLbitfield ALL_ATTRIB_BITS = 0xFFFFFFFF;
const GLbitfield ALL_BARRIER_BITS = 0xFFFFFFFF;
const GLbitfield ALL_BARRIER_BITS_EXT = 0xFFFFFFFF;
const GLbitfield ALL_SHADER_BITS = 0xFFFFFFFF;
const GLbitfield ALL_SHADER_BITS_EXT = 0xFFFFFFFF;
const GLbitfield ATOMIC_COUNTER_BARRIER_BIT = 0x00001000;
const GLbitfield ATOMIC_COUNTER_BARRIER_BIT_EXT = 0x00001000;
const GLbitfield BIAS_BIT_ATI = 0x00000008;
const GLbitfield BLUE_BIT_ATI = 0x00000004;
const GLbitfield BOLD_BIT_NV = 0x01;
const GLbitfield BUFFER_UPDATE_BARRIER_BIT = 0x00000200;
const GLbitfield BUFFER_UPDATE_BARRIER_BIT_EXT = 0x00000200;
const GLbitfield CLIENT_ALL_ATTRIB_BITS = 0xFFFFFFFF;
const GLbitfield CLIENT_MAPPED_BUFFER_BARRIER_BIT = 0x00004000;
const GLbitfield CLIENT_PIXEL_STORE_BIT = 0x00000001;
const GLbitfield CLIENT_STORAGE_BIT = 0x0200;
const GLbitfield CLIENT_VERTEX_ARRAY_BIT = 0x00000002;
const GLbitfield COLOR3_BIT_PGI = 0x00010000;
const GLbitfield COLOR4_BIT_PGI = 0x00020000;
const GLbitfield COLOR_BUFFER_BIT = 0x00004000;
const GLbitfield COLOR_BUFFER_BIT0_QCOM = 0x00000001;
const GLbitfield COLOR_BUFFER_BIT1_QCOM = 0x00000002;
const GLbitfield COLOR_BUFFER_BIT2_QCOM = 0x00000004;
const GLbitfield COLOR_BUFFER_BIT3_QCOM = 0x00000008;
const GLbitfield COLOR_BUFFER_BIT4_QCOM = 0x00000010;
const GLbitfield COLOR_BUFFER_BIT5_QCOM = 0x00000020;
const GLbitfield COLOR_BUFFER_BIT6_QCOM = 0x00000040;
const GLbitfield COLOR_BUFFER_BIT7_QCOM = 0x00000080;
const GLbitfield COMMAND_BARRIER_BIT = 0x00000040;
const GLbitfield COMMAND_BARRIER_BIT_EXT = 0x00000040;
const GLbitfield COMPUTE_SHADER_BIT = 0x00000020;
const GLbitfield COMP_BIT_ATI = 0x00000002;
const GLbitfield CONTEXT_COMPATIBILITY_PROFILE_BIT = 0x00000002;
const GLbitfield CONTEXT_CORE_PROFILE_BIT = 0x00000001;
const GLbitfield CONTEXT_FLAG_DEBUG_BIT = 0x00000002;
const GLbitfield CONTEXT_FLAG_DEBUG_BIT_KHR = 0x00000002;
const GLbitfield CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = 0x00000001;
const GLbitfield CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB = 0x00000004;
const GLbitfield COVERAGE_BUFFER_BIT_NV = 0x00008000;
const GLbitfield CURRENT_BIT = 0x00000001;
const GLbitfield DEPTH_BUFFER_BIT = 0x00000100;
const GLbitfield DEPTH_BUFFER_BIT0_QCOM = 0x00000100;
const GLbitfield DEPTH_BUFFER_BIT1_QCOM = 0x00000200;
const GLbitfield DEPTH_BUFFER_BIT2_QCOM = 0x00000400;
const GLbitfield DEPTH_BUFFER_BIT3_QCOM = 0x00000800;
const GLbitfield DEPTH_BUFFER_BIT4_QCOM = 0x00001000;
const GLbitfield DEPTH_BUFFER_BIT5_QCOM = 0x00002000;
const GLbitfield DEPTH_BUFFER_BIT6_QCOM = 0x00004000;
const GLbitfield DEPTH_BUFFER_BIT7_QCOM = 0x00008000;
const GLbitfield DYNAMIC_STORAGE_BIT = 0x0100;
const GLbitfield EDGEFLAG_BIT_PGI = 0x00040000;
const GLbitfield EIGHTH_BIT_ATI = 0x00000020;
const GLbitfield ELEMENT_ARRAY_BARRIER_BIT = 0x00000002;
const GLbitfield ELEMENT_ARRAY_BARRIER_BIT_EXT = 0x00000002;
const GLbitfield ENABLE_BIT = 0x00002000;
const GLbitfield EVAL_BIT = 0x00010000;
const GLbitfield FOG_BIT = 0x00000080;
const GLbitfield FONT_ASCENDER_BIT_NV = 0x00200000;
const GLbitfield FONT_DESCENDER_BIT_NV = 0x00400000;
const GLbitfield FONT_HAS_KERNING_BIT_NV = 0x10000000;
const GLbitfield FONT_HEIGHT_BIT_NV = 0x00800000;
const GLbitfield FONT_MAX_ADVANCE_HEIGHT_BIT_NV = 0x02000000;
const GLbitfield FONT_MAX_ADVANCE_WIDTH_BIT_NV = 0x01000000;
const GLbitfield FONT_UNDERLINE_POSITION_BIT_NV = 0x04000000;
const GLbitfield FONT_UNDERLINE_THICKNESS_BIT_NV = 0x08000000;
const GLbitfield FONT_UNITS_PER_EM_BIT_NV = 0x00100000;
const GLbitfield FONT_X_MAX_BOUNDS_BIT_NV = 0x00040000;
const GLbitfield FONT_X_MIN_BOUNDS_BIT_NV = 0x00010000;
const GLbitfield FONT_Y_MAX_BOUNDS_BIT_NV = 0x00080000;
const GLbitfield FONT_Y_MIN_BOUNDS_BIT_NV = 0x00020000;
const GLbitfield FRAGMENT_SHADER_BIT = 0x00000002;
const GLbitfield FRAGMENT_SHADER_BIT_EXT = 0x00000002;
const GLbitfield FRAMEBUFFER_BARRIER_BIT = 0x00000400;
const GLbitfield FRAMEBUFFER_BARRIER_BIT_EXT = 0x00000400;
const GLbitfield GEOMETRY_DEFORMATION_BIT_SGIX = 0x00000002;
const GLbitfield GEOMETRY_SHADER_BIT = 0x00000004;
const GLbitfield GEOMETRY_SHADER_BIT_EXT = 0x00000004;
const GLbitfield GLYPH_HAS_KERNING_BIT_NV = 0x100;
const GLbitfield GLYPH_HEIGHT_BIT_NV = 0x02;
const GLbitfield GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV = 0x10;
const GLbitfield GLYPH_HORIZONTAL_BEARING_X_BIT_NV = 0x04;
const GLbitfield GLYPH_HORIZONTAL_BEARING_Y_BIT_NV = 0x08;
const GLbitfield GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV = 0x80;
const GLbitfield GLYPH_VERTICAL_BEARING_X_BIT_NV = 0x20;
const GLbitfield GLYPH_VERTICAL_BEARING_Y_BIT_NV = 0x40;
const GLbitfield GLYPH_WIDTH_BIT_NV = 0x01;
const GLbitfield GREEN_BIT_ATI = 0x00000002;
const GLbitfield HALF_BIT_ATI = 0x00000008;
const GLbitfield HINT_BIT = 0x00008000;
const GLbitfield INDEX_BIT_PGI = 0x00080000;
const GLbitfield ITALIC_BIT_NV = 0x02;
const GLbitfield LIGHTING_BIT = 0x00000040;
const GLbitfield LINE_BIT = 0x00000004;
const GLbitfield LIST_BIT = 0x00020000;
const GLbitfield MAP_COHERENT_BIT = 0x0080;
const GLbitfield MAP_FLUSH_EXPLICIT_BIT = 0x0010;
const GLbitfield MAP_FLUSH_EXPLICIT_BIT_EXT = 0x0010;
const GLbitfield MAP_INVALIDATE_BUFFER_BIT = 0x0008;
const GLbitfield MAP_INVALIDATE_BUFFER_BIT_EXT = 0x0008;
const GLbitfield MAP_INVALIDATE_RANGE_BIT = 0x0004;
const GLbitfield MAP_INVALIDATE_RANGE_BIT_EXT = 0x0004;
const GLbitfield MAP_PERSISTENT_BIT = 0x0040;
const GLbitfield MAP_READ_BIT = 0x0001;
const GLbitfield MAP_READ_BIT_EXT = 0x0001;
const GLbitfield MAP_UNSYNCHRONIZED_BIT = 0x0020;
const GLbitfield MAP_UNSYNCHRONIZED_BIT_EXT = 0x0020;
const GLbitfield MAP_WRITE_BIT = 0x0002;
const GLbitfield MAP_WRITE_BIT_EXT = 0x0002;
const GLbitfield MAT_AMBIENT_AND_DIFFUSE_BIT_PGI = 0x00200000;
const GLbitfield MAT_AMBIENT_BIT_PGI = 0x00100000;
const GLbitfield MAT_COLOR_INDEXES_BIT_PGI = 0x01000000;
const GLbitfield MAT_DIFFUSE_BIT_PGI = 0x00400000;
const GLbitfield MAT_EMISSION_BIT_PGI = 0x00800000;
const GLbitfield MAT_SHININESS_BIT_PGI = 0x02000000;
const GLbitfield MAT_SPECULAR_BIT_PGI = 0x04000000;
const GLbitfield MULTISAMPLE_BIT = 0x20000000;
const GLbitfield MULTISAMPLE_BIT_3DFX = 0x20000000;
const GLbitfield MULTISAMPLE_BIT_ARB = 0x20000000;
const GLbitfield MULTISAMPLE_BIT_EXT = 0x20000000;
const GLbitfield MULTISAMPLE_BUFFER_BIT0_QCOM = 0x01000000;
const GLbitfield MULTISAMPLE_BUFFER_BIT1_QCOM = 0x02000000;
const GLbitfield MULTISAMPLE_BUFFER_BIT2_QCOM = 0x04000000;
const GLbitfield MULTISAMPLE_BUFFER_BIT3_QCOM = 0x08000000;
const GLbitfield MULTISAMPLE_BUFFER_BIT4_QCOM = 0x10000000;
const GLbitfield MULTISAMPLE_BUFFER_BIT5_QCOM = 0x20000000;
const GLbitfield MULTISAMPLE_BUFFER_BIT6_QCOM = 0x40000000;
const GLbitfield MULTISAMPLE_BUFFER_BIT7_QCOM = 0x80000000;
const GLbitfield NEGATE_BIT_ATI = 0x00000004;
const GLbitfield NORMAL_BIT_PGI = 0x08000000;
const GLbitfield PERFQUERY_GLOBAL_CONTEXT_INTEL = 0x00000001;
const GLbitfield PERFQUERY_SINGLE_CONTEXT_INTEL = 0x00000000;
const GLbitfield PIXEL_BUFFER_BARRIER_BIT = 0x00000080;
const GLbitfield PIXEL_BUFFER_BARRIER_BIT_EXT = 0x00000080;
const GLbitfield PIXEL_MODE_BIT = 0x00000020;
const GLbitfield POINT_BIT = 0x00000002;
const GLbitfield POLYGON_BIT = 0x00000008;
const GLbitfield POLYGON_STIPPLE_BIT = 0x00000010;
const GLbitfield QUARTER_BIT_ATI = 0x00000010;
const GLbitfield QUERY_BUFFER_BARRIER_BIT = 0x00008000;
const GLbitfield RED_BIT_ATI = 0x00000001;
const GLbitfield SATURATE_BIT_ATI = 0x00000040;
const GLbitfield SCISSOR_BIT = 0x00080000;
const GLbitfield SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV = 0x00000010;
const GLbitfield SHADER_IMAGE_ACCESS_BARRIER_BIT = 0x00000020;
const GLbitfield SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT = 0x00000020;
const GLbitfield SHADER_STORAGE_BARRIER_BIT = 0x00002000;
const GLbitfield STENCIL_BUFFER_BIT = 0x00000400;
const GLbitfield STENCIL_BUFFER_BIT0_QCOM = 0x00010000;
const GLbitfield STENCIL_BUFFER_BIT1_QCOM = 0x00020000;
const GLbitfield STENCIL_BUFFER_BIT2_QCOM = 0x00040000;
const GLbitfield STENCIL_BUFFER_BIT3_QCOM = 0x00080000;
const GLbitfield STENCIL_BUFFER_BIT4_QCOM = 0x00100000;
const GLbitfield STENCIL_BUFFER_BIT5_QCOM = 0x00200000;
const GLbitfield STENCIL_BUFFER_BIT6_QCOM = 0x00400000;
const GLbitfield STENCIL_BUFFER_BIT7_QCOM = 0x00800000;
const GLbitfield SYNC_FLUSH_COMMANDS_BIT = 0x00000001;
const GLbitfield SYNC_FLUSH_COMMANDS_BIT_APPLE = 0x00000001;
const GLbitfield TESS_CONTROL_SHADER_BIT = 0x00000008;
const GLbitfield TESS_CONTROL_SHADER_BIT_EXT = 0x00000008;
const GLbitfield TESS_EVALUATION_SHADER_BIT = 0x00000010;
const GLbitfield TESS_EVALUATION_SHADER_BIT_EXT = 0x00000010;
const GLbitfield TEXCOORD1_BIT_PGI = 0x10000000;
const GLbitfield TEXCOORD2_BIT_PGI = 0x20000000;
const GLbitfield TEXCOORD3_BIT_PGI = 0x40000000;
const GLbitfield TEXCOORD4_BIT_PGI = 0x80000000;
const GLbitfield TEXTURE_BIT = 0x00040000;
const GLbitfield TEXTURE_DEFORMATION_BIT_SGIX = 0x00000001;
const GLbitfield TEXTURE_FETCH_BARRIER_BIT = 0x00000008;
const GLbitfield TEXTURE_FETCH_BARRIER_BIT_EXT = 0x00000008;
const GLbitfield TEXTURE_STORAGE_SPARSE_BIT_AMD = 0x00000001;
const GLbitfield TEXTURE_UPDATE_BARRIER_BIT = 0x00000100;
const GLbitfield TEXTURE_UPDATE_BARRIER_BIT_EXT = 0x00000100;
const GLbitfield TRACE_ALL_BITS_MESA = 0xFFFF;
const GLbitfield TRACE_ARRAYS_BIT_MESA = 0x0004;
const GLbitfield TRACE_ERRORS_BIT_MESA = 0x0020;
const GLbitfield TRACE_OPERATIONS_BIT_MESA = 0x0001;
const GLbitfield TRACE_PIXELS_BIT_MESA = 0x0010;
const GLbitfield TRACE_PRIMITIVES_BIT_MESA = 0x0002;
const GLbitfield TRACE_TEXTURES_BIT_MESA = 0x0008;
const GLbitfield TRANSFORM_BIT = 0x00001000;
const GLbitfield TRANSFORM_FEEDBACK_BARRIER_BIT = 0x00000800;
const GLbitfield TRANSFORM_FEEDBACK_BARRIER_BIT_EXT = 0x00000800;
const GLbitfield UNIFORM_BARRIER_BIT = 0x00000004;
const GLbitfield UNIFORM_BARRIER_BIT_EXT = 0x00000004;
const GLbitfield VERTEX23_BIT_PGI = 0x00000004;
const GLbitfield VERTEX4_BIT_PGI = 0x00000008;
const GLbitfield VERTEX_ATTRIB_ARRAY_BARRIER_BIT = 0x00000001;
const GLbitfield VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT = 0x00000001;
const GLbitfield VERTEX_SHADER_BIT = 0x00000001;
const GLbitfield VERTEX_SHADER_BIT_EXT = 0x00000001;
const GLbitfield VIEWPORT_BIT = 0x00000800;

const GLboolean FALSE_ = 0;
const GLboolean TRUE_ = 1;

const GLuint INVALID_INDEX = 0xFFFFFFFF;
const GLuint NONE = 0;
const GLuint NONE_OES = 0;
const GLuint NO_ERROR_ = 0;
const GLuint ONE = 1;
const GLuint VERSION_ES_CL_1_0 = 1;
const GLuint VERSION_ES_CL_1_1 = 1;
const GLuint VERSION_ES_CM_1_1 = 1;
const GLuint ZERO = 0;

const GLuint64 TIMEOUT_IGNORED = 0xFFFFFFFFFFFFFFFF;
const GLuint64 TIMEOUT_IGNORED_APPLE = 0xFFFFFFFFFFFFFFFF;

} // namespace gl
