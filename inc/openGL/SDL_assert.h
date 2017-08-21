ef __glxew_h__
#define __glxew_h__
#define __GLXEW_H__

#ifdef __glxext_h_
#error glxext.h included before glxew.h
#endif

#if defined(GLX_H) || defined(__GLX_glx_h__) || defined(__glx_h__)
#error glx.h included before glxew.h
#endif

#define __glxext_h_

#define GLX_H
#define __GLX_glx_h__
#define __glx_h__

#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xmd.h>
#include <GL/glew.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ---------------------------- GLX_VERSION_1_0 --------------------------- */

#ifndef GLX_VERSION_1_0
#define GLX_VERSION_1_0 1

#define GLX_USE_GL 1
#define GLX_BUFFER_SIZE 2
#define GLX_LEVEL 3
#define GLX_RGBA 4
#define GLX_DOUBLEBUFFER 5
#define GLX_STEREO 6
#define GLX_AUX_BUFFERS 7
#define GLX_RED_SIZE 8
#define GLX_GREEN_SIZE 9
#define GLX_BLUE_SIZE 10
#define GLX_ALPHA_SIZE 11
#define GLX_DEPTH_SIZE 12
#define GLX_STENCIL_SIZE 13
#define GLX_ACCUM_RED_SIZE 14
#define GLX_ACCUM_GREEN_SIZE 15
#define GLX_ACCUM_BLUE_SIZE 16
#define GLX_ACCUM_ALPHA_SIZE 17
#define GLX_BAD_SCREEN 1
#define GLX_BAD_ATTRIBUTE 2
#define GLX_NO_EXTENSION 3
#define GLX_BAD_VISUAL 4
#define GLX_BAD_CONTEXT 5
#define GLX_BAD_VALUE 6
#define GLX_BAD_ENUM 7

typedef XID GLXDrawable;
typedef XID GLXPixmap;
#ifdef __sun
typedef struct __glXContextRec *GLXContext;
#else
typedef struct __GLXcontextRec *GLXContext;
#endif

typedef unsigned int GLXVideoDeviceNV; 

extern Bool glXQueryExtension (Display *dpy, int *errorBase, int *eventBase);
extern Bool glXQueryVersion (Display *dpy, int *major, int *minor);
extern int glXGetConfig (Display *dpy, XVisualInfo *vis, int attrib, int *value);
extern XVisualInfo* glXChooseVisual (Display *dpy, int screen, int *attribList);
extern GLXPixmap glXCreateGLXPixmap (Display *dpy, XVisualInfo *vis, Pixmap pixmap);
extern void glXDestroyGLXPixmap (Display *dpy, GLXPixmap pix);
extern GLXContext glXCreateContext (Display *dpy, XVisualInfo *vis, GLXContext shareList, Bool direct);
extern void glXDestroyContext (Display *dpy, GLXContext ctx);
extern Bool glXIsDirect (Display *dpy, GLXContext ctx);
extern void glXCopyContext (Display *dpy, GLXContext src, GLXContext dst, GLulong mask);
extern Bool glXMakeCurrent (Display *dpy, GLXDrawable drawable, GLXContext ctx);
extern GLXContext glXGetCurrentContext (void);
extern GLXDrawable glXGetCurrentDrawable (void);
extern void glXWaitGL (void);
extern void glXWaitX (void);
extern void glXSwapBuffers (Display *dpy, GLXDrawable drawable);
extern void glXUseXFont (Font font, int first, int count, int listBase);

#define GLXEW_VERSION_1_0 GLXEW_GET_VAR(__GLXEW_VERSION_1_0)

#endif /* GLX_VERSION_1_0 */

/* ---------------------------- GLX_VERSION_1_1 --------------------------- */

#ifndef GLX_VERSION_1_1
#define GLX_VERSION_1_1

#define GLX_VENDOR 0x1
#define GLX_VERSION 0x2
#define GLX_EXTENSIONS 0x3

extern const char* glXQueryExtensionsString (Display *dpy, int screen);
extern const char* glXGetClientString (Display *dpy, int name);
extern const char* glXQueryServerString (Display *dpy, int screen, int name);

#define GLXEW_VERSION_1_1 GLXEW_GET_VAR(__GLXEW_VERSION_1_1)

#endif /* GLX_VERSION_1_1 */

/* ---------------------------- GLX_VERSION_1_2 ---------------------------- */

#ifndef GLX_VERSION_1_2
#define GLX_VERSION_1_2 1

typedef Display* ( * PFNGLXGETCURRENTDISPLAYPROC) (void);

#define glXGetCurrentDisplay GLXEW_GET_FUN(__glewXGetCurrentDisplay)

#define GLXEW_VERSION_1_2 GLXEW_GET_VAR(__GLXEW_VERSION_1_2)

#endif /* GLX_VERSION_1_2 */

/* ---------------------------- GLX_VERSION_1_3 ---------------------------- */

#ifndef GLX_VERSION_1_3
#define GLX_VERSION_1_3 1

#define GLX_FRONT_LEFT_BUFFER_BIT 0x00000001
#define GLX_RGBA_BIT 0x00000001
#define GLX_WINDOW_BIT 0x00000001
#define GLX_COLOR_INDEX_BIT 0x00000002
#define GLX_FRONT_RIGHT_BUFFER_BIT 0x00000002
#define GLX_PIXMAP_BIT 0x00000002
#define GLX_BACK_LEFT_BUFFER_BIT 0x00000004
#define GLX_PBUFFER_BIT 0x00000004
#define GLX_BACK_RIGHT_BUFFER_BIT 0x00000008
#define GLX_AUX_BUFFERS_BIT 0x00000010
#define GLX_CONFIG_CAVEAT 0x20
#define GLX_DEPTH_BUFFER_BIT 0x00000020
#define GLX_X_VISUAL_TYPE 0x22
#define GLX_TRANSPARENT_TYPE 0x23
#define GLX_TRANSPARENT_INDEX_VALUE 0x24
#define GLX_TRANSPARENT_RED_VALUE 0x25
#define GLX_TRANSPARENT_GREEN_VALUE 0x26
#define GLX_TRANSPARENT_BLUE_VALUE 0x27
#define GLX_TRANSPARENT_ALPHA_VALUE 0x28
#define GLX_STENCIL_BUFFER_BIT 0x00000040
#define GLX_ACCUM_BUFFER_BIT 0x00000080
#define GLX_NONE 0x8000
#define GLX_SLOW_CONFIG 0x8001
#define GLX_TRUE_COLOR 0x8002
#define GLX_DIRECT_COLOR 0x8003
#define GLX_PSEUDO_COLOR 0x8004
#define GLX_STATIC_COLOR 0x8005
#define GLX_GRAY_SCALE 0x8006
#define GLX_STATIC_GRAY 0x8007
#define GLX_TRANSPARENT_RGB 0x8008
#define GLX_TRANSPARENT_INDEX 0x8009
#define GLX_VISUAL_ID 0x800B
#define GLX_SCREEN 0x800C
#define GLX_NON_CONFORMANT_CONFIG 0x800D
#define GLX_DRAWABLE_TYPE 0x8010
#define GLX_RENDER_TYPE 0x8011
#define GLX_X_RENDERABLE 0x8012
#define GLX_FBCONFIG_ID 0x8013
#define GLX_RGBA_TYPE 0x8014
#define GLX_COLOR_INDEX_TYPE 0x8015
#define GLX_MAX_PBUFFER_WIDTH 0x8016
#define GLX_MAX_PBUFFER_HEIGHT 0x8017
#define GLX_MAX_PBUFFER_PIXELS 0x8018
#define GLX_PRESERVED_CONTENTS 0x801B
#define GLX_LARGEST_PBUFFER 0x801C
#define GLX_WIDTH 0x801D
#define GLX_HEIGHT 0x801E
#define GLX_EVENT_MASK 0x801F
#define GLX_DAMAGED 0x8020
#define GLX_SAVED 0x8021
#define GLX_WINDOW 0x8022
#define GLX_PBUFFER 0x8023
#define GLX_PBUFFER_HEIGHT 0x8040
#define GLX_PBUFFER_WIDTH 0x8041
#define GLX_PBUFFER_CLOBBER_MASK 0x08000000
#define GLX_DONT_CARE 0xFFFFFFFF

typedef XID GLXFBConfigID;
typedef XID GLXPbuffer;
typedef XID GLXWindow;
typedef struct __GLXFBConfigRec *GLXFBConfig;

typedef struct {
  int event_type; 
  int draw_type; 
  unsigned long serial; 
  Bool send_event; 
  Display *display; 
  GLXDrawable drawable; 
  unsigned int buffer_mask; 
  unsigned int aux_buffer; 
  int x, y; 
  int width, height; 
  int count; 
} GLXPbufferClobberEvent;
typedef union __GLXEvent {
  GLXPbufferClobberEvent glxpbufferclobber; 
  long pad[24]; 
} GLXEvent;

typedef GLXFBConfig* ( * PFNGLXCHOOSEFBCONFIGPROC) (Display *dpy, int screen, const int *attrib_list, int *nelements);
typedef GLXContext ( * PFNGLXCREATENEWCONTEXTPROC) (Display *dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct);
typedef GLXPbuffer ( * PFNGLXCREATEPBUFFERPROC) (Display *dpy, GLXFBConfig config, const int *attrib_list);
typedef GLXPixmap ( * PFNGLXCREATEPIXMAPPROC) (Display *dpy, GLXFBConfig config, Pixmap pixmap, const int *attrib_list);
typedef GLXWindow ( * PFNGLXCREATEWINDOWPROC) (Display *dpy, GLXFBConfig config, Window win, const int *attrib_list);
typedef void ( * PFNGLXDESTROYPBUFFERPROC) (Display *dpy, GLXPbuffer pbuf);
typedef void ( * PFNGLXDESTROYPIXMAPPROC) (Display *dpy, GLXPixmap pixmap);
typedef void ( * PFNGLXDESTROYWINDOWPROC) (Display *dpy, GLXWindow win);
typedef GLXDrawable ( * PFNGLXGETCURRENTREADDRAWABLEPROC) (void);
typedef int ( * PFNGLXGETFBCONFIGATTRIBPROC) (Display *dpy, GLXFBConfig config, int attribute, int *value);
typedef GLXFBConfig* ( * PFNGLXGETFBCONFIGSPROC) (Display *dpy, int screen, int *nelements);
typedef void ( * PFNGLXGETSELECTEDEVENTPROC) (Display *dpy, GLXDrawable draw, unsigned long *event_mask);
typedef XVisualInfo* ( * PFNGLXGETVISUALFROMFBCONFIGPROC) (Display *dpy, GLXFBConfig config);
typedef Bool ( * PFNGLXMAKECONTEXTCURRENTPROC) (Display *display, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
typedef int ( * PFNGLXQUERYCONTEXTPROC) (Display *dpy, GLXContext ctx, int attribute, int *value);
typedef void ( * PFNGLXQUERYDRAWABLEPROC) (Display *dpy, GLXDrawable draw, int attribute, unsigned int *value);
typedef void ( * PFNGLXSELECTEVENTPROC) (Display *dpy, GLXDrawable draw, unsigned long event_mask);

#define glXChooseFBConfig GLXEW_GET_FUN(__glewXChooseFBConfig)
#define glXCreateNewContext GLXEW_GET_FUN(__glewXCreateNewContext)
#define glXCreatePbuffer GLXEW_GET_FUN(__glewXCreatePbuffer)
#define glXCreatePixmap GLXEW_GET_FUN(__glewXCreatePixmap)
#define glXCreateWindow GLXEW_GET_FUN(__glewXCreateWindow)
#define glXDestroyPbuffer GLXEW_GET_FUN(__glewXDestroyPbuffer)
#define glXDestroyPixmap GLXEW_GET_FUN(__glewXDestroyPixmap)
#define glXDestroyWindow GLXEW_GET_FUN(__glewXDestroyWindow)
#define glXGetCurrentReadDrawable GLXEW_GET_FUN(__glewXGetCurrentReadDrawable)
#define glXGetFBConfigAttrib GLXEW_GET_FUN(__glewXGetFBConfigAttrib)
#define glXGetFBConfigs GLXEW_GET_FUN(__glewXGetFBConfigs)
#define glXGetSelectedEvent GLXEW_GET_FUN(__glewXGetSelectedEvent)
#define glXGetVisualFromFBConfig GLXEW_GET_FUN(__glewXGetVisualFromFBConfig)
#define glXMakeContextCurrent GLXEW_GET_FUN(__glewXMakeContextCurrent)
#define glXQueryContext GLXEW_GET_FUN(__glewXQueryContext)
#define glXQueryDrawable GLXEW_GET_FUN(__glewXQueryDrawable)
#define glXSelectEvent GLXEW_GET_FUN(__glewXSelectEvent)

#define GLXEW_VERSION_1_3 GLXEW_GET_VAR(__GLXEW_VERSION_1_3)

#endif /* GLX_VERSION_1_3 */

/* ---------------------------- GLX_VERSION_1_4 ---------------------------- */

#ifndef GLX_VERSION_1_4
#define GLX_VERSION_1_4 1

#define GLX_SAMPLE_BUFFERS 100000
#define GLX_SAMPLES 100001

extern void ( * glXGetProcAddress (const GLubyte *procName)) (void);

#define GLXEW_VERSION_1_4 GLXEW_GET_VAR(__GLXEW_VERSION_1_4)

#endif /* GLX_VERSION_1_4 */

/* -------------------------- GLX_3DFX_multisample ------------------------- */

#ifndef GLX_3DFX_multisample
#define GLX_3DFX_multisample 1

#define GLX_SAMPLE_BUFFERS_3DFX 0x8050
#define GLX_SAMPLES_3DFX 0x8051

#define GLXEW_3DFX_multisample GLXEW_GET_VAR(__GLXEW_3DFX_multisample)

#endif /* GLX_3DFX_multisample */

/* ------------------------ GLX_AMD_gpu_association ------------------------ */

#ifndef GLX_AMD_gpu_association
#define GLX_AMD_gpu_association 1

#define GLX_GPU_VENDOR_AMD 0x1F00
#define GLX_GPU_RENDERER_STRING_AMD 0x1F01
#define GLX_GPU_OPENGL_VERSION_STRING_AMD 0x1F02
#define GLX_GPU_FASTEST_TARGET_GPUS_AMD 0x21A2
#define GLX_GPU_RAM_AMD 0x21A3
#define GLX_GPU_CLOCK_AMD 0x21A4
#define GLX_GPU_NUM_PIPES_AMD 0x21A5
#define GLX_GPU_NUM_SIMD_AMD 0x21A6
#define GLX_GPU_NUM_RB_AMD 0x21A7
#define GLX_GPU_NUM_SPI_AMD 0x21A8

typedef void ( * PFNGLXBLITCONTEXTFRAMEBUFFERAMDPROC) (GLXContext dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef GLXContext ( * PFNGLXCREATEASSOCIATEDCONTEXTAMDPROC) (unsigned int id, GLXContext share_list);
typedef GLXContext ( * PFNGLXCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC) (unsigned int id, GLXContext share_context, const int* attribList);
typedef Bool ( * PFNGLXDELETEASSOCIATEDCONTEXTAMDPROC) (GLXContext ctx);
typedef unsi