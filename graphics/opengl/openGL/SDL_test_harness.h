ef __eglew_h__
#define __eglew_h__
#define __EGLEW_H__

#ifdef __eglext_h_
#error eglext.h included before eglew.h
#endif

#if defined(__egl_h_)
#error egl.h included before eglew.h
#endif

#define __eglext_h_

#define __egl_h_

#ifndef EGLAPIENTRY
#define EGLAPIENTRY
#endif
#ifndef EGLAPI
#define EGLAPI extern
#endif

/* EGL Types */
#include <sys/types.h>

#include <KHR/khrplatform.h>
#include <EGL/eglplatform.h>

#include <GL/glew.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef int32_t EGLint;

typedef unsigned int EGLBoolean;
typedef void *EGLDisplay;
typedef void *EGLConfig;
typedef void *EGLSurface;
typedef void *EGLContext;
typedef void (*__eglMustCastToProperFunctionPointerType)(void);

typedef unsigned int EGLenum;
typedef void *EGLClientBuffer;

typedef void *EGLSync;
typedef intptr_t EGLAttrib;
typedef khronos_utime_nanoseconds_t EGLTime;
typedef void *EGLImage;

typedef void *EGLSyncKHR;
typedef intptr_t EGLAttribKHR;
typedef void *EGLLabelKHR;
typedef void *EGLObjectKHR;
typedef void (EGLAPIENTRY  *EGLDEBUGPROCKHR)(EGLenum error,const char *command,EGLint messageType,EGLLabelKHR threadLabel,EGLLabelKHR objectLabel,const char* message);
typedef khronos_utime_nanoseconds_t EGLTimeKHR;
typedef void *EGLImageKHR;
typedef void *EGLStreamKHR;
typedef khronos_uint64_t EGLuint64KHR;
typedef int EGLNativeFileDescriptorKHR;
typedef khronos_ssize_t EGLsizeiANDROID;
typedef void (*EGLSetBlobFuncANDROID) (const void *key, EGLsizeiANDROID keySize, const void *value, EGLsizeiANDROID valueSize);
typedef EGLsizeiANDROID (*EGLGetBlobFuncANDROID) (const void *key, EGLsizeiANDROID keySize, void *value, EGLsizeiANDROID valueSize);
typedef void *EGLDeviceEXT;
typedef void *EGLOutputLayerEXT;
typedef void *EGLOutputPortEXT;
typedef void *EGLSyncNV;
typedef khronos_utime_nanoseconds_t EGLTimeNV;
typedef khronos_utime_nanoseconds_t EGLuint64NV;
typedef khronos_stime_nanoseconds_t EGLnsecsANDROID;

struct EGLClientPixmapHI;

#define EGL_DONT_CARE                     ((EGLint)-1)

#define EGL_NO_CONTEXT                    ((EGLContext)0)
#define EGL_NO_DISPLAY                    ((EGLDisplay)0)
#define EGL_NO_IMAGE                      ((EGLImage)0)
#define EGL_NO_SURFACE                    ((EGLSurface)0)
#define EGL_NO_SYNC                       ((EGLSync)0)

#define EGL_UNKNOWN                       ((EGLint)-1)

#define EGL_DEFAULT_DISPLAY               ((EGLNativeDisplayType)0)

EGLAPI __eglMustCastToProperFunctionPointerType EGLAPIENTRY eglGetProcAddress (const char *procname);
/* ---------------------------- EGL_VERSION_1_0 ---------------------------- */

#ifndef EGL_VERSION_1_0
#define EGL_VERSION_1_0 1

#define EGL_FALSE 0
#define EGL_PBUFFER_BIT 0x0001
#define EGL_TRUE 1
#define EGL_PIXMAP_BIT 0x0002
#define EGL_WINDOW_BIT 0x0004
#define EGL_SUCCESS 0x3000
#define EGL_NOT_INITIALIZED 0x3001
#define EGL_BAD_ACCESS 0x3002
#define EGL_BAD_ALLOC 0x3003
#define EGL_BAD_ATTRIBUTE 0x3004
#define EGL_BAD_CONFIG 0x3005
#define EGL_BAD_CONTEXT 0x3006
#define EGL_BAD_CURRENT_SURFACE 0x3007
#define EGL_BAD_DISPLAY 0x3008
#define EGL_BAD_MATCH 0x3009
#define EGL_BAD_NATIVE_PIXMAP 0x300A
#define EGL_BAD_NATIVE_WINDOW 0x300B
#define EGL_BAD_PARAMETER 0x300C
#define EGL_BAD_SURFACE 0x300D
#define EGL_BUFFER_SIZE 0x3020
#define EGL_ALPHA_SIZE 0x3021
#define EGL_BLUE_SIZE 0x3022
#define EGL_GREEN_SIZE 0x3023
#define EGL_RED_SIZE 0x3024
#define EGL_DEPTH_SIZE 0x3025
#define EGL_STENCIL_SIZE 0x3026
#define EGL_CONFIG_CAVEAT 0x3027
#define EGL_CONFIG_ID 0x3028
#define EGL_LEVEL 0x3029
#define EGL_MAX_PBUFFER_HEIGHT 0x302A
#define EGL_MAX_PBUFFER_PIXELS 0x302B
#define EGL_MAX_PBUFFER_WIDTH 0x302C
#define EGL_NATIVE_RENDERABLE 0x302D
#define EGL_NATIVE_VISUAL_ID 0x302E
#define EGL_NATIVE_VISUAL_TYPE 0x302F
#define EGL_SAMPLES 0x3031
#define EGL_SAMPLE_BUFFERS 0x3032
#define EGL_SURFACE_TYPE 0x3033
#define EGL_TRANSPARENT_TYPE 0x3034
#define EGL_TRANSPARENT_BLUE_VALUE 0x3035
#define EGL_TRANSPARENT_GREEN_VALUE 0x3036
#define EGL_TRANSPARENT_RED_VALUE 0x3037
#define EGL_NONE 0x3038
#define EGL_SLOW_CONFIG 0x3050
#define EGL_NON_CONFORMANT_CONFIG 0x3051
#define EGL_TRANSPARENT_RGB 0x3052
#define EGL_VENDOR 0x3053
#define EGL_VERSION 0x3054
#define EGL_EXTENSIONS 0x3055
#define EGL_HEIGHT 0x3056
#de