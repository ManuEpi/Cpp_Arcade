, void* userParam)
EOT

# add typedef to GL_ARB_debug_output
# parse_spec.pl can't parse typedefs from New Types section, but ought to
    cat >> $1/GL_ARB_debug_output <<EOT
	typedef void (GLAPIENTRY *GLDEBUGPROCARB)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* message, const void* userParam)
EOT

# add typedef to GL_KHR_debug
# parse_spec.pl can't parse typedefs from New Types section, but ought to
    cat >> $1/GL_KHR_debug <<EOT
	typedef void (GLAPIENTRY *GLDEBUGPROC)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* message, const void* userParam)
EOT

# Remove glGetPointerv from GL_KHR_debug
    grep -v "glGetPointerv" $1/GL_KHR_debug > tmp
    mv tmp $1/GL_KHR_debug

# Remove GL_ARB_debug_group, GL_ARB_debug_label and GL_ARB_debug_output2, for now
    rm -f $1/GL_ARB_debug_group
    rm -f $1/GL_ARB_debug_label
    rm -f $1/GL_ARB_debug_output2

# add typedefs to GL_ARB_cl_event
# parse_spec.pl can't parse typedefs from New Types section, but ought to
    cat >> $1/GL_ARB_cl_event <<EOT
	typedef struct _cl_context *cl_context
	typedef struct _cl_event *cl_event
EOT

# Filter out EXT functions from GL_ARB_gpu_shader_fp64
    grep -v 'EXT ' $1/GL_ARB_gpu_shader_fp64 > tmp
    mv tmp $1/GL_ARB_gpu_shader_fp64

# add missing functions to GL_EXT_direct_state_access (GL_ARB_gpu_shader_fp64 related)
	cat >> $1/GL_EXT_direct_state_access <<EOT
    void glProgramUniform1dEXT (GLuint program, GLint location, GLdouble x)
    void glProgramUniform2dEXT (GLuint program, GLint location, GLdouble x, GLdouble y)
    void glProgramUniform3dEXT (GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z)
    void glProgramUniform4dEXT (GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
    void glProgramUniform1dvEXT (GLuint program, GLint location, GLsizei count, const GLdouble *value)
    void glProgramUniform2dvEXT (GLuint program, GLint location, GLsizei count, const GLdouble *value)
    void glProgramUniform3dvEXT (GLuint program, GLint location, GLsizei count, const GLdouble *value)
    void glProgramUniform4dvEXT (GLuint program, GLint location, GLsizei count, const GLdouble *value)
    void glProgramUniformMatrix2dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
    void glProgramUniformMatrix3dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
    void glProgramUniformMatrix4dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
    void glProgramUniformMatrix2x3dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
    void glProgramUniformMatrix2x4dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
    void glProgramUniformMatrix3x2dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
    void glProgramUniformMatrix3x4dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
    void glProgramUniformMatrix4x2dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
    void glProgramUniformMatrix4x3dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
EOT

# add missing functions to GL_EXT_direct_state_access (GL_ARB_instanced_arrays related)
# https://sourceforge.net/p/glew/bugs/242/
    cat >> $1/GL_EXT_direct_state_access <<EOT
    void glVertexArrayVertexAttribDivisorEXT (GLuint vaobj, GLuint index, GLuint divisor)
EOT

# Filter out GL_UNSIGNED_INT and GL_FLOAT from GL_AMD_performance_monitor
    grep -v 'GL_UNSIGNED_INT ' $1/GL_AMD_performance_monitor > tmp
    mv tmp $1/GL_AMD_performance_monitor
    grep -v 'GL_FLOAT ' $1/GL_AMD_performance_monitor > tmp
    mv tmp $1/GL_AMD_performance_monitor

# Filter out GL_STORAGE_CACHED_APPLE and GL_STORAGE_SHARED_APPLE from GL_APPLE_texture_range
    grep -v 'GL_STORAGE_CACHED_APPLE ' $1/GL_APPLE_texture_range > tmp
    mv tmp $1/GL_APPLE_texture_range
    grep -v 'GL_STORAGE_SHARED_APPLE ' $1/GL_APPLE_texture_range > tmp
    mv tmp $1/GL_APPLE_texture_range

# Filter out GL_RED from GL_ARB_texture_rg
    grep -v 'GL_RED ' $1/GL_ARB_texture_rg > tmp
    mv tmp $1/GL_ARB_texture_rg

# Filter out _EXT enums from GL_ARB_texture_storage
    grep -v '_EXT ' $1/GL_ARB_texture_storage > tmp
    mv tmp $1/GL_ARB_texture_storage

# Filter out TEXTURE_3D enums from GL_EXT_paletted_texture
    grep -v 'TEXTURE_3D' $1/GL_EXT_paletted_texture > tmp
    mv tmp $1/GL_EXT_paletted_texture

# Filter out GL_VERSION_1_1 enums from GL_AMD_stencil_operation_extended
    grep -v '0x150' $1/GL_AMD_stencil_operation_extended > tmp
    mv tmp $1/GL_AMD_stencil_operation_extended

# Filter out from GL_APPLE_ycbcr_422
    grep -v 'GL_UNSIGNED_SHORT_8_8_APPLE' $1/GL_APPLE_ycbcr_422 > tmp
    mv tmp $1/GL_APPLE_ycbcr_422
    grep -v 'GL_UNSIGNED_SHORT_8_8_REV_APPLE' $1/GL_APPLE_ycbcr_422 > tmp
    mv tmp $1/GL_APPLE_ycbcr_422

# Filter out GL_FRAGMENT_DEPTH_EXT from GL_EXT_light_texture
    grep -v 'GL_FRAGMENT_DEPTH_EXT' $1/GL_EXT_light_texture > tmp
    mv tmp $1/GL_EXT_light_texture

# Filter out GL_MULTISAMPLE_BIT_EXT from GL_SGIS_multisample
    grep -v