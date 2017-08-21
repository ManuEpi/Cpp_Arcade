* EGL_VERSION_1_0 */

/* ---------------------------- EGL_VERSION_1_1 ---------------------------- */

#ifndef EGL_VERSION_1_1
#define EGL_VERSION_1_1 1

#define EGL_CONTEXT_LOST 0x300E
#define EGL_BIND_TO_TEXTURE_RGB 0x3039
#define EGL_BIND_TO_TEXTURE_RGBA 0x303A
#define EGL_MIN_SWAP_INTERVAL 0x303B
#define EGL_MAX_SWAP_INTERVAL 0x303C
#define EGL_NO_TEXTURE 0x305C
#define EGL_TEXTURE_RGB 0x305D
#define EGL_TEXTURE_RGBA 0x305E
#define EGL_TEXTURE_2D 0x305F
#define EGL_TEXTURE_FORMAT 0x3080
#define EGL_TEXTURE_TARGET 0x3081
#define EGL_MIPMAP_TEXTURE 0x3082
#define EGL_MIPMAP_LEVEL 0x3083
#define EGL_BACK_BUFFER 0x3084

typedef EGLBoolean  ( * PFNEGLBINDTEXIMAGEPROC) (EGLDisplay  dpy, EGLSurface  surface, EGLint  buffer);
typedef EGLBoolean  ( * PFNEGLRELEASETEXIMAGEPROC) (EGLDisplay  dpy, EGLSurface  surface, EGLint  buffer);
typedef EGLBoolean  ( * PFNEGLSURFACEATTRIBPROC) (EGLDisplay  dpy, EGLSurface  surface, EGLint  attribute, EGLint  value);
typedef EGLBoolean  ( * PFNEGLSWAPINTERVALPROC) (EGLDisplay  dpy, EGLint  interval);

#define eglBindTexImage EGLEW_GET_FUN(__eglewBindTexImage)
#define eglReleaseTexImage EGLEW_GET_FUN(__eglewReleaseTexImage)
#define eglSurfaceAttrib EGLEW_GET_FUN(__eglewSurfaceAttrib)
#define eglSwapInterval EGLEW_GET_FUN(__eglewSwapInterval)

#define EGLEW_VERSION_1_1 EGLEW_GET_VAR(__EGLEW_VERSION_1_1)

#endif /* EGL_VERSION_1_1 */

/* ---------------------------- EGL_VERSION_1_2 ---------------------------- */

#ifndef EGL_VERSION_1_2
#define EGL_VERSION_1_2 1

#define EGL_OPENGL_ES_BIT 0x0001
#define EGL_OPENVG_BIT 0x0002
#define EGL_LUMINANCE_SIZE 0x303D
#define EGL_ALPHA_MASK_SIZE 0x303E
#define EGL_COLOR_BUFFER_TYPE 0x303F
#define EGL_RENDERABLE_TYPE 0x3040
#define EGL_SINGLE_BUFFER 0x3085
#define EGL_RENDER_BUFFER 0x3086
#define EGL_COLORSPACE 0x3087
#define EGL_ALPHA_FORMAT 0x3088
#define EGL_COLORSPACE_LINEAR 0x308A
#define EGL_ALPHA_FORMAT_NONPRE 0x308B
#define EGL_ALPHA_FORMAT_PRE 0x308C
#define EGL_CLIENT_APIS 0x308D
#define EGL_RGB_BUFFER 0x308E
#define EGL_LUMINANCE_BUFFER 0x308F
#define EGL_HORIZONTAL_RESOLUTION 0x3090
#define EGL_VERTICAL_RESOLUTION 0x3091
#define EGL_PIXEL_ASPECT_RATIO 0x3092
#define EGL_SWAP_BEHAVIOR 0x3093
#define EGL_BUFFER_PRESERVED 0x3094
#define EGL_BUFFER_DESTROYED 0x3095
#define EGL_OPENVG_IMAGE 0x3096
#define EGL_CONTEXT_CLIENT_TYPE 0x3097
#define EGL_OPENGL_ES_API 0x30A0
#define EGL_OPENVG_API 0x30A1
#define EGL_DISPLAY_SCALING 10000

typedef EGLBoolean  ( * PFNEGLBINDAPIPROC) (EGLenum  api);
typedef EGLSurface  ( * PFNEGLCREATEPBUFFERFROMCLIENTBUFFERPROC) (EGLDisplay  dpy, EGLenum  buftype, EGLClientBuffer  buffer, EGLConfig  config, const EGLint * attrib_list);
typedef EGLenum  ( * PFNEGLQUERYAPIPROC) ( void );
typedef EGLBoolean  ( * PFNEGLRELEASETHREADPROC) ( void );
typedef EGLBoolean  ( * PFNEGLWAITCLIENTPROC) ( void );

#define eglBindAPI EGLEW_GET_FUN(__eglewBindAPI)
#define eglCreatePbufferFromClientBuffer EGLEW_GET_FUN(__eglewCreatePbufferFromClientBuffer)
#define eglQueryAPI EGLEW_GET_FUN(__eglewQueryAPI)
#define eglReleaseThread EGLEW_GET_FUN(__eglewReleaseThread)
#define eglWaitClient EGLEW_GET_FUN(__eglewWaitClient)

#define EGLEW_VERSION_1_2 EGLEW_GET_VAR(__EGLEW_VERSION_1_2)

#endif /* EGL_VERSION_1_2 */

/* ---------------------------- EGL_VERSION_1_3 ---------------------------- */

#ifndef EGL_VERSION_1_3
#define EGL_VERSION_1_3 1

#define EGL_OPENGL_ES2_BIT 0x0004
#define EGL_VG_COLORSPACE_LINEAR_BIT 0x0020
#define EGL_VG_ALPHA_FORMAT_PRE_BIT 0x0040
#define EGL_MATCH_NATIVE_PIXMAP 0x3041
#define EGL_CONFORMANT 0x3042
#define EGL_VG_COLORSPACE 0x3087
#define EGL_VG_ALPHA_FORMAT 0x3088
#define EGL_VG_COLORSPACE_LINEAR 0x308A
#define EGL_VG_ALPHA_FORMAT_NONPRE 0x308B
#define EGL_VG_ALPHA_FORMAT_PRE 0x308C
#define EGL_CONTEXT_CLIENT_VERSION 0x3098

#define EGLEW_VERSION_1_3 EGLEW_GET_VAR(__EGLEW_VERSION_1_3)

#endif /* EGL_VERSION_1_3 */

/* ---------------------------- EGL_VERSION_1_4 ---------------------------- */

#ifndef EGL_VERSION_1_4
#define EGL_VERSION_1_4 1

#define EGL_OPENGL_BIT 0x0008
#define EGL_MULTISAMPLE_RESOLVE_BOX_BIT 0x0200
#define EGL_SWAP_BEHAVIOR_PRESERVED_BIT 0x0400
#define EGL_MULTISAMPLE_RESOLVE 0x3099
#define EGL_MULTISAMPLE_RESOLVE_DEFAULT 0x309A
#define EGL_MULTISAMPLE_RESOLVE_BOX 0x309B
#define EGL_OPENGL_API 0x30A2

typedef EGLContext  ( * PFNEGLGETCURRENTCONTEXTPROC) ( void );

#define eglGetCurrentContext EGLEW_GET_FUN(__eglewGetCurrentContext)

#define EGLEW_VERSION_1_4 EGLEW_GET_VAR(__EGLEW_VERSION_1_4)

#endif /* EGL_VERSION_1_4 */

/* ---------------------------- EGL_VERSION_1_5 ---------------------------- */

#ifndef 