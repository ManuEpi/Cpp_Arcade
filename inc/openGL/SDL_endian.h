e desktop format and refresh rate
 *  are used.
 *
 *  \param window The window for which the display mode should be set.
 *  \param mode The mode to use, or NULL for the default mode.
 *
 *  \return 0 on success, or -1 if setting the display mode failed.
 *
 *  \sa SDL_GetWindowDisplayMode()
 *  \sa SDL_SetWindowFullscreen()
 */
extern DECLSPEC int SDLCALL SDL_SetWindowDisplayMode(SDL_Window * window,
                                                     const SDL_DisplayMode
                                                         * mode);

/**
 *  \brief Fill in information about the display mode used when a fullscreen
 *         window is visible.
 *
 *  \sa SDL_SetWindowDisplayMode()
 *  \sa SDL_SetWindowFullscreen()
 */
extern DECLSPEC int SDLCALL SDL_GetWindowDisplayMode(SDL_Window * window,
                                                     SDL_DisplayMode * mode);

/**
 *  \brief Get the pixel format associated with the window.
 */
extern DECLSPEC Uint32 SDLCALL SDL_GetWindowPixelFormat(SDL_Window * window);

/**
 *  \brief Create a window with the specified position, dimensions, and flags.
 *
 *  \param title The title of the window, in UTF-8 encoding.
 *  \param x     The x position of the window, ::SDL_WINDOWPOS_CENTERED, or
 *               ::SDL_WINDOWPOS_UNDEFINED.
 *  \param y     The y position of the window, ::SDL_WINDOWPOS_CENTERED, or
 *               ::SDL_WINDOWPOS_UNDEFINED.
 *  \param w     The width of the window.
 *  \param h     The height of the window.
 *  \param flags The flags for the window, a mask of any of the following:
 *               ::SDL_WINDOW_FULLSCREEN,    ::SDL_WINDOW_OPENGL,
 *               ::SDL_WINDOW_HIDDEN,        ::SDL_WINDOW_BORDERLESS,
 *               ::SDL_WINDOW_RESIZABLE,     ::SDL_WINDOW_MAXIMIZED,
 *               ::SDL_WINDOW_MINIMIZED,     ::SDL_WINDOW_INPUT_GRABBED,
 *               ::SDL_WINDOW_ALLOW_HIGHDPI.
 *
 *  \return The id of the window created, or zero if window creation failed.
 *
 *  \sa SDL_DestroyWindow()
 */
extern DECLSPEC SDL_Window * SDLCALL SDL_CreateWindow(const char *title,
                                                      int x, int y, int w,
                                                      int h, Uint32 flags);

/**
 *  \brief Create an SDL window from an existing native window.
 *
 *  \param data A pointer to driver-dependent window creation data
 *
 *  \return The id of the window created, or zero if window creation failed.
 *
 *  \sa SDL_DestroyWindow()
 */
extern DECLSPEC SDL_Window * SDLCALL SDL_CreateWindowFrom(const void *data);

/**
 *  \brief Get the numeric ID of a window, for logging purposes.
 */
extern DECLSPEC Uint32 SDLCALL SDL_GetWindowID(SDL_Window * window);

/**
 *  \brief Get a window from a stored ID, or NULL if it doesn't exist.
 */
extern DECLSPEC SDL_Window * SDLCALL SDL_GetWindowFromID(Uint32 id);

/**
 *  \brief Get the window flags.
 */
extern DECLSPEC Uint32 SDLCALL SDL_GetWindowFlags(SDL_Window * window);

/**
 *  \brief Set the title of a window, in UTF-8 format.
 *
 *  \sa SDL_GetWindowTitle()
 */
extern DECLSPEC void SDLCALL SDL_SetWindowTitle(SDL_Window * window,
                                                const char *title);

/**
 *  \brief Get the title of a window, in UTF-8 format.
 *
 *  \sa SDL_SetWindowTitle()
 */
extern DECLSPEC const char *SDLCALL SDL_GetWindowTitle(SDL_Window * window);

/**
 *  \brief Set the icon for a window.
 *
 *  \param window The window for which the icon should be set.
 *  \param icon The icon for the window.
 */
extern DECLSPEC void SDLCALL SDL_SetWindowIcon(SDL_Window * window,
                                               SDL_Surface * icon);

/**
 *  \brief Associate an arbitrary named pointer with a window.
 *
 *  \param window   The window to associate with the pointer.
 *  \param name     The name of the pointer.
 *  \param userdata The associated pointer.
 *
 *  \return The previous value associated with 'name'
 *
 *  \note The name is case-sensitive.
 *
 *  \sa SDL_GetWindowData()
 */
extern DECLSPEC void* SDLCALL SDL_SetWindowData(SDL_Window * window,
                                                const char *name,
                                                void *userdata);

/**
 *  \brief Retrieve the data pointer associated with a window.
 *
 *  \param window   The window to query.
 *  \param name     The name of the pointer.
 *
 *  \return The value associated with 'name'
 *
 *  \sa SDL_SetWindowData()
 */
extern DECLSPEC void *SDLCALL SDL_GetWindowData(SDL_Window * window,
                                                const char *name);

/**
 *  \brief Set the position of a window.
 *
 *  \param window   The window to reposition.
 *  \param x        The x coordinate of the window, ::SDL_WINDOWPOS_CENTERED, or
                    ::SDL_WINDOWPOS_UNDEFINED.
 *  \param y        The y coordinate of the window, ::SDL_WINDOWPOS_CENTERED, or
                    ::SDL_WINDOWPOS_UNDEFINED.
 *
 *  \note The window coordinate origin is the upper left of the display.
 *
 *  \sa SDL_GetWindowPosition()
 */
extern DECLSPEC void SDLCALL SDL_SetWindowPosition(SDL_Window * window,
                                                   int x, int y);

/**
 *  \brief Get the position of a window.
 *
 *  \param window   The window to query.
 *  \param x        Pointer to variable for storing the x position, may be NULL
 *  \param y        Pointer to variable for storing the y position, may be NULL
 *
 *  \sa SDL_SetWindowPosition()
 */
extern DECLSPEC void SDLCALL SDL_GetWindowPosition(SDL_Window * window,
                                                   int *x, int *y);

/**
 *  \brief Set the size of a window's client area.
 *
 *  \param window   The window to resize.
 *  \param w        The width of the window, must be >0
 *  \param h        The height of the window, must be >0
 *
 *  \note You can't change the size of a fullscreen window, it automatically
 *        m