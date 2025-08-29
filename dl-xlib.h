#if defined (__cplusplus)
# pragma once
#endif /* __cplsuplus */
#if !defined (_dl_x11_h_)
# define _dl_x11_h_
# if !defined (DLAPI)
#  define DLAPI extern
# endif /* DLAPI */
# include <stddef.h>
# include <stdint.h>
# if !defined (__cplusplus)
#  include <stdbool.h>
# endif /* __cplusplus */
# include <X11/X.h>
# include <X11/Xlib.h>
# include <X11/Xutil.h>
# include <X11/XKBlib.h>

/* SECTION:
 *  Public Function Declarations
 * */

DLAPI bool	dl_loadXlib(void);
DLAPI bool	dl_unloadXlib(void);



/* SECTION:
 *  Dynamic API
 * */

/* * MODULE:
 * *  Xlib.h
 * * */
typedef XFontStruct	*(*PFN_XLoadQueryFont) (Display *, _Xconst char *);
typedef XFontStruct	*(*PFN_XQueryFont) (Display *, XID);
typedef XTimeCoord	*(*PFN_XGetMotionEvents) (Display *, Window, Time, Time, int *);
typedef XModifierKeymap	*(*PFN_XDeleteModifiermapEntry) (XModifierKeymap *, KeyCode, int);
typedef XModifierKeymap	*(*PFN_XGetModifierMapping) (Display *);
typedef XModifierKeymap	*(*PFN_XInsertModifiermapEntry) (XModifierKeymap *, KeyCode, int);
typedef XModifierKeymap	*(*PFN_XNewModifiermap) (int);
typedef XImage	*(*PFN_XCreateImage) (Display *, Visual *, unsigned int, int, int, char *, unsigned int, unsigned int, int, int);
typedef Status	(*PFN_XInitImage) (XImage *);
typedef XImage	*(*PFN_XGetImage) (Display *, Drawable, int, int, unsigned int, unsigned int, unsigned long, int);
typedef XImage	*(*PFN_XGetSubImage) (Display *, Drawable, int, int, unsigned int, unsigned int, unsigned long, int, XImage *, int, int);
typedef Display	*(*PFN_XOpenDisplay) (_Xconst char *);
typedef void	(*PFN_XrmInitialize) (void);
typedef char	*(*PFN_XFetchBytes) (Display *, int *);
typedef char	*(*PFN_XFetchBuffer) (Display *, int *, int);
typedef char	*(*PFN_XGetAtomName) (Display *, Atom);
typedef Status	(*PFN_XGetAtomNames) (Display *, Atom *, int, char **);
typedef char	*(*PFN_XGetDefault) (Display *, _Xconst char *, _Xconst char *);
typedef char	*(*PFN_XDisplayName) (_Xconst char *);
typedef char	*(*PFN_XKeysymToString) (KeySym);
typedef int	(*(*PFN_XSynchronize) (Display *, Bool)) (Display *);
typedef int	(*(*PFN_XSetAfterFunction) (Display *, int (*) (Display *))) (Display *);
typedef Atom	(*PFN_XInternAtom) (Display *, _Xconst char *, Bool);
typedef Status	(*PFN_XInternAtoms) (Display *, char **, int, Bool, Atom *);
typedef Colormap	(*PFN_XCopyColormapAndFree) (Display *, Colormap);
typedef Colormap	(*PFN_XCreateColormap) (Display *, Window, Visual *, int);
typedef Cursor	(*PFN_XCreatePixmapCursor) (Display *, Pixmap, Pixmap, XColor *, XColor *, unsigned int, unsigned int);
typedef Cursor	(*PFN_XCreateGlyphCursor) (Display *, Font, Font, unsigned int, unsigned int, XColor _Xconst *, XColor _Xconst *);
typedef Cursor	(*PFN_XCreateFontCursor) (Display *, unsigned int);
typedef Font	(*PFN_XLoadFont) (Display *, _Xconst char *);
typedef GC	(*PFN_XCreateGC) (Display *, Drawable, unsigned long, XGCValues *);
typedef GContext	(*PFN_XGContextFromGC) (GC);
typedef void	(*PFN_XFlushGC) (Display *, GC);
typedef Pixmap	(*PFN_XCreatePixmap) (Display *, Drawable, unsigned int, unsigned int, unsigned int);
typedef Pixmap	(*PFN_XCreateBitmapFromData) (Display *, Drawable, _Xconst char *, unsigned int, unsigned int);
typedef Pixmap	(*PFN_XCreatePixmapFromBitmapData) (Display *, Drawable, char *, unsigned int, unsigned int, unsigned long, unsigned long, unsigned int);
typedef Window	(*PFN_XCreateSimpleWindow) (Display *, Window, int, int, unsigned int, unsigned int, unsigned int, unsigned long, unsigned long);
typedef Window	(*PFN_XGetSelectionOwner) (Display *, Atom);
typedef Window	(*PFN_XCreateWindow) (Display *, Window, int, int, unsigned int, unsigned int, unsigned int, int, unsigned int, Visual *, unsigned long, XSetWindowAttributes *);
typedef Colormap	*(*PFN_XListInstalledColormaps) (Display *, Window, int *);
typedef char	**(*PFN_XListFonts) (Display *, _Xconst char *, int, int *);
typedef char	**(*PFN_XListFontsWithInfo) (Display *, _Xconst char *, int, int *, XFontStruct **);
typedef char	**(*PFN_XGetFontPath) (Display *, int *);
typedef char	**(*PFN_XListExtensions) (Display *, int *);
typedef Atom	*(*PFN_XListProperties) (Display *, Window, int *);
typedef XHostAddress	*(*PFN_XListHosts) (Display *, int *, Bool *);
typedef KeySym	(*PFN_XKeycodeToKeysym) (Display *, KeyCode, int);
typedef KeySym	(*PFN_XLookupKeysym) (XKeyEvent *, int);
typedef KeySym	*(*PFN_XGetKeyboardMapping) (Display *, KeyCode, int, int *);
typedef KeySym	(*PFN_XStringToKeysym) (_Xconst char *);
typedef long	(*PFN_XMaxRequestSize) (Display *);
typedef long	(*PFN_XExtendedMaxRequestSize) (Display *);
typedef char	*(*PFN_XResourceManagerString) (Display *);
typedef char	*(*PFN_XScreenResourceString) (Screen *);
typedef unsigned long	(*PFN_XDisplayMotionBufferSize) (Display *);
typedef VisualID	(*PFN_XVisualIDFromVisual) (Visual *);
typedef Status	(*PFN_XInitThreads) (void);
typedef Status	(*PFN_XFreeThreads) (void);
typedef void	(*PFN_XLockDisplay) (Display *);
typedef void	(*PFN_XUnlockDisplay) (Display *);
typedef XExtCodes	*(*PFN_XInitExtension) (Display *, _Xconst char *);
typedef XExtCodes	*(*PFN_XAddExtension) (Display *);
typedef XExtData	*(*PFN_XFindOnExtensionList) (XExtData **, int);
typedef XExtData	**(*PFN_XEHeadOfExtensionList) (XEDataObject);
typedef Window	(*PFN_XRootWindow) (Display *, int);
typedef Window	(*PFN_XDefaultRootWindow) (Display *);
typedef Window	(*PFN_XRootWindowOfScreen) (Screen *);
typedef Visual	*(*PFN_XDefaultVisual) (Display *, int);
typedef Visual	*(*PFN_XDefaultVisualOfScreen) (Screen *);
typedef GC	(*PFN_XDefaultGC) (Display *, int);
typedef GC	(*PFN_XDefaultGCOfScreen) (Screen *);
typedef unsigned long	(*PFN_XBlackPixel) (Display *, int);
typedef unsigned long	(*PFN_XWhitePixel) (Display *, int);
typedef unsigned long	(*PFN_XAllPlanes) (void);
typedef unsigned long	(*PFN_XBlackPixelOfScreen) (Screen *);
typedef unsigned long	(*PFN_XWhitePixelOfScreen) (Screen *);
typedef unsigned long	(*PFN_XNextRequest) (Display *);
typedef unsigned long	(*PFN_XLastKnownRequestProcessed) (Display *);
typedef char	*(*PFN_XServerVendor) (Display *);
typedef char	*(*PFN_XDisplayString) (Display *);
typedef Colormap	(*PFN_XDefaultColormap) (Display *, int);
typedef Colormap	(*PFN_XDefaultColormapOfScreen) (Screen *);
typedef Display	*(*PFN_XDisplayOfScreen) (Screen *);
typedef Screen	*(*PFN_XScreenOfDisplay) (Display *, int);
typedef Screen	*(*PFN_XDefaultScreenOfDisplay) (Display *);
typedef long	(*PFN_XEventMaskOfScreen) (Screen *);
typedef int	(*PFN_XScreenNumberOfScreen) (Screen *);
typedef XErrorHandler	(*PFN_XSetErrorHandler) (XErrorHandler);
typedef XIOErrorHandler	(*PFN_XSetIOErrorHandler) (XIOErrorHandler);
typedef void	(*PFN_XSetIOErrorExitHandler) (Display *, XIOErrorExitHandler, void *);
typedef XPixmapFormatValues	*(*PFN_XListPixmapFormats) (Display *, int *);
typedef int	*(*PFN_XListDepths) (Display *, int, int *);
typedef Status	(*PFN_XReconfigureWMWindow) (Display *, Window, int, unsigned int, XWindowChanges *);
typedef Status	(*PFN_XGetWMProtocols) (Display *, Window, Atom **, int *);
typedef Status	(*PFN_XSetWMProtocols) (Display *, Window, Atom *, int);
typedef Status	(*PFN_XIconifyWindow) (Display *, Window, int);
typedef Status	(*PFN_XWithdrawWindow) (Display *, Window, int);
typedef Status	(*PFN_XGetCommand) (Display *, Window, char ***, int *);
typedef Status	(*PFN_XGetWMColormapWindows) (Display *, Window, Window **, int *);
typedef Status	(*PFN_XSetWMColormapWindows) (Display *, Window, Window *, int);
typedef void	(*PFN_XFreeStringList) (char **);
typedef int	(*PFN_XSetTransientForHint) (Display *, Window, Window);
typedef int	(*PFN_XActivateScreenSaver) (Display *);
typedef int	(*PFN_XAddHost) (Display *, XHostAddress *);
typedef int	(*PFN_XAddHosts) (Display *, XHostAddress *, int);
typedef int	(*PFN_XAddToExtensionList) (struct _XExtData **, XExtData *);
typedef int	(*PFN_XAddToSaveSet) (Display *, Window);
typedef Status	(*PFN_XAllocColor) (Display *, Colormap, XColor *);
typedef Status	(*PFN_XAllocColorCells) (Display *, Colormap, Bool, unsigned long *, unsigned int, unsigned long *, unsigned int);
typedef Status	(*PFN_XAllocColorPlanes) (Display *, Colormap, Bool, unsigned long *, int, int, int, int, unsigned long *, unsigned long *, unsigned long *);
typedef Status	(*PFN_XAllocNamedColor) (Display *, Colormap, _Xconst char *, XColor *, XColor *);
typedef int	(*PFN_XAllowEvents) (Display *, int, Time);
typedef int	(*PFN_XAutoRepeatOff) (Display *);
typedef int	(*PFN_XAutoRepeatOn) (Display *);
typedef int	(*PFN_XBell) (Display *, int);
typedef int	(*PFN_XBitmapBitOrder) (Display *);
typedef int	(*PFN_XBitmapPad) (Display *);
typedef int	(*PFN_XBitmapUnit) (Display *);
typedef int	(*PFN_XCellsOfScreen) (Screen *);
typedef int	(*PFN_XChangeActivePointerGrab) (Display *, unsigned int, Cursor, Time);
typedef int	(*PFN_XChangeGC) (Display *, GC, unsigned long, XGCValues *);
typedef int	(*PFN_XChangeKeyboardControl) (Display *, unsigned long, XKeyboardControl *);
typedef int	(*PFN_XChangeKeyboardMapping) (Display *, int, int, KeySym *, int);
typedef int	(*PFN_XChangePointerControl) (Display *, Bool, Bool, int, int, int);
typedef int	(*PFN_XChangeProperty) (Display *, Window, Atom, Atom, int, int, _Xconst unsigned char *, int);
typedef int	(*PFN_XChangeSaveSet) (Display *, Window, int);
typedef int	(*PFN_XChangeWindowAttributes) (Display *, Window, unsigned long, XSetWindowAttributes *);
typedef Bool	(*PFN_XCheckIfEvent) (Display *, XEvent *, Bool (*) (Display *, XEvent *, XPointer), XPointer);
typedef Bool	(*PFN_XCheckMaskEvent) (Display *, long, XEvent *);
typedef Bool	(*PFN_XCheckTypedEvent) (Display *, int, XEvent *);
typedef Bool	(*PFN_XCheckTypedWindowEvent) (Display *, Window, int, XEvent *);
typedef Bool	(*PFN_XCheckWindowEvent) (Display *, Window, long, XEvent *);
typedef int	(*PFN_XCirculateSubwindows) (Display *, Window, int);
typedef int	(*PFN_XCirculateSubwindowsDown) (Display *, Window);
typedef int	(*PFN_XCirculateSubwindowsUp) (Display *, Window);
typedef int	(*PFN_XClearArea) (Display *, Window, int, int, unsigned int, unsigned int, Bool);
typedef int	(*PFN_XClearWindow) (Display *, Window);
typedef int	(*PFN_XCloseDisplay) (Display *);
typedef int	(*PFN_XConfigureWindow) (Display *, Window, unsigned int, XWindowChanges *);
typedef int	(*PFN_XConnectionNumber) (Display *);
typedef int	(*PFN_XConvertSelection) (Display *, Atom, Atom, Atom, Window, Time);
typedef int	(*PFN_XCopyArea) (Display *, Drawable, Drawable, GC, int, int, unsigned int, unsigned int, int, int);
typedef int	(*PFN_XCopyGC) (Display *, GC, unsigned long, GC);
typedef int	(*PFN_XCopyPlane) (Display *, Drawable, Drawable, GC, int, int, unsigned int, unsigned int, int, int, unsigned long);
typedef int	(*PFN_XDefaultDepth) (Display *, int);
typedef int	(*PFN_XDefaultDepthOfScreen) (Screen *);
typedef int	(*PFN_XDefaultScreen) (Display *);
typedef int	(*PFN_XDefineCursor) (Display *, Window, Cursor);
typedef int	(*PFN_XDeleteProperty) (Display *, Window, Atom);
typedef int	(*PFN_XDestroyWindow) (Display *, Window);
typedef int	(*PFN_XDestroySubwindows) (Display *, Window);
typedef int	(*PFN_XDoesBackingStore) (Screen *);
typedef Bool	(*PFN_XDoesSaveUnders) (Screen *);
typedef int	(*PFN_XDisableAccessControl) (Display *);
typedef int	(*PFN_XDisplayCells) (Display *, int);
typedef int	(*PFN_XDisplayHeight) (Display *, int);
typedef int	(*PFN_XDisplayHeightMM) (Display *, int);
typedef int	(*PFN_XDisplayKeycodes) (Display *, int *, int *);
typedef int	(*PFN_XDisplayPlanes) (Display *, int);
typedef int	(*PFN_XDisplayWidth) (Display *, int);
typedef int	(*PFN_XDisplayWidthMM) (Display *, int);
typedef int	(*PFN_XDrawArc) (Display *, Drawable, GC, int, int, unsigned int, unsigned int, int, int);
typedef int	(*PFN_XDrawArcs) (Display *, Drawable, GC, XArc *, int);
typedef int	(*PFN_XDrawImageString) (Display *, Drawable, GC, int, int, _Xconst char *, int);
typedef int	(*PFN_XDrawImageString16) (Display *, Drawable, GC, int, int, _Xconst XChar2b *, int);
typedef int	(*PFN_XDrawLine) (Display *, Drawable, GC, int, int, int, int);
typedef int	(*PFN_XDrawLines) (Display *, Drawable, GC, XPoint *, int, int);
typedef int	(*PFN_XDrawPoint) (Display *, Drawable, GC, int, int);
typedef int	(*PFN_XDrawPoints) (Display *, Drawable, GC, XPoint *, int, int);
typedef int	(*PFN_XDrawRectangle) (Display *, Drawable, GC, int, int, unsigned int, unsigned int);
typedef int	(*PFN_XDrawRectangles) (Display *, Drawable, GC, XRectangle *, int);
typedef int	(*PFN_XDrawSegments) (Display *, Drawable, GC, XSegment *, int);
typedef int	(*PFN_XDrawString) (Display *, Drawable, GC, int, int, _Xconst char *, int);
typedef int	(*PFN_XDrawString16) (Display *, Drawable, GC, int, int, _Xconst XChar2b *, int);
typedef int	(*PFN_XDrawText) (Display *, Drawable, GC, int, int, XTextItem *, int);
typedef int	(*PFN_XDrawText16) (Display *, Drawable, GC, int, int, XTextItem16 *, int);
typedef int	(*PFN_XEnableAccessControl) (Display *);
typedef int	(*PFN_XEventsQueued) (Display *, int);
typedef Status	(*PFN_XFetchName) (Display *, Window, char **);
typedef int	(*PFN_XFillArc) (Display *, Drawable, GC, int, int, unsigned int, unsigned int, int, int);
typedef int	(*PFN_XFillArcs) (Display *, Drawable, GC, XArc *, int);
typedef int	(*PFN_XFillPolygon) (Display *, Drawable, GC, XPoint *, int, int, int);
typedef int	(*PFN_XFillRectangle) (Display *, Drawable, GC, int, int, unsigned int, unsigned int);
typedef int	(*PFN_XFillRectangles) (Display *, Drawable, GC, XRectangle *, int);
typedef int	(*PFN_XFlush) (Display *);
typedef int	(*PFN_XForceScreenSaver) (Display *, int);
typedef int	(*PFN_XFree) (void *);
typedef int	(*PFN_XFreeColormap) (Display *, Colormap);
typedef int	(*PFN_XFreeColors) (Display *, Colormap, unsigned long *, int, unsigned long);
typedef int	(*PFN_XFreeCursor) (Display *, Cursor);
typedef int	(*PFN_XFreeExtensionList) (char **);
typedef int	(*PFN_XFreeFont) (Display *, XFontStruct *);
typedef int	(*PFN_XFreeFontInfo) (char **, XFontStruct *, int);
typedef int	(*PFN_XFreeFontNames) (char **);
typedef int	(*PFN_XFreeFontPath) (char **);
typedef int	(*PFN_XFreeGC) (Display *, GC);
typedef int	(*PFN_XFreeModifiermap) (XModifierKeymap *);
typedef int	(*PFN_XFreePixmap) (Display *, Pixmap);
typedef int	(*PFN_XGeometry) (Display *, int, _Xconst char *, _Xconst char *, unsigned int, unsigned int, unsigned int, int, int, int *, int *, int *, int *);
typedef int	(*PFN_XGetErrorDatabaseText) (Display *, _Xconst char *, _Xconst char *, _Xconst char *, char *, int);
typedef int	(*PFN_XGetErrorText) (Display *, int, char *, int);
typedef Bool	(*PFN_XGetFontProperty) (XFontStruct *, Atom, unsigned long *);
typedef Status	(*PFN_XGetGCValues) (Display *, GC, unsigned long, XGCValues *);
typedef Status	(*PFN_XGetGeometry) (Display *, Drawable, Window *, int *, int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *);
typedef Status	(*PFN_XGetIconName) (Display *, Window, char **);
typedef int	(*PFN_XGetInputFocus) (Display *, Window *, int *);
typedef int	(*PFN_XGetKeyboardControl) (Display *, XKeyboardState *);
typedef int	(*PFN_XGetPointerControl) (Display *, int *, int *, int *);
typedef int	(*PFN_XGetPointerMapping) (Display *, unsigned char *, int);
typedef int	(*PFN_XGetScreenSaver) (Display *, int *, int *, int *, int *);
typedef Status	(*PFN_XGetTransientForHint) (Display *, Window, Window *);
typedef int	(*PFN_XGetWindowProperty) (Display *, Window, Atom, long, long, Bool, Atom, Atom *, int *, unsigned long *, unsigned long *, unsigned char **);
typedef Status	(*PFN_XGetWindowAttributes) (Display *, Window, XWindowAttributes *);
typedef int	(*PFN_XGrabButton) (Display *, unsigned int, unsigned int, Window, Bool, unsigned int, int, int, Window, Cursor);
typedef int	(*PFN_XGrabKey) (Display *, int, unsigned int, Window, Bool, int, int);
typedef int	(*PFN_XGrabKeyboard) (Display *, Window, Bool, int, int, Time);
typedef int	(*PFN_XGrabPointer) (Display *, Window, Bool, unsigned int, int, int, Window, Cursor, Time);
typedef int	(*PFN_XGrabServer) (Display *);
typedef int	(*PFN_XHeightMMOfScreen) (Screen *);
typedef int	(*PFN_XHeightOfScreen) (Screen *);
typedef int	(*PFN_XIfEvent) (Display *, XEvent *, Bool (*) (Display *, XEvent *, XPointer), XPointer);
typedef int	(*PFN_XImageByteOrder) (Display *);
typedef int	(*PFN_XInstallColormap) (Display *, Colormap);
typedef KeyCode	(*PFN_XKeysymToKeycode) (Display *, KeySym);
typedef int	(*PFN_XKillClient) (Display *, XID);
typedef Status	(*PFN_XLookupColor) (Display *, Colormap, _Xconst char *, XColor *, XColor *);
typedef int	(*PFN_XLowerWindow) (Display *, Window);
typedef int	(*PFN_XMapRaised) (Display *, Window);
typedef int	(*PFN_XMapSubwindows) (Display *, Window);
typedef int	(*PFN_XMapWindow) (Display *, Window);
typedef int	(*PFN_XMaskEvent) (Display *, long, XEvent *);
typedef int	(*PFN_XMaxCmapsOfScreen) (Screen *);
typedef int	(*PFN_XMinCmapsOfScreen) (Screen *);
typedef int	(*PFN_XMoveResizeWindow) (Display *, Window, int, int, unsigned int, unsigned int);
typedef int	(*PFN_XMoveWindow) (Display *, Window, int, int);
typedef int	(*PFN_XNextEvent) (Display *, XEvent *);
typedef int	(*PFN_XNoOp) (Display *);
typedef Status	(*PFN_XParseColor) (Display *, Colormap, _Xconst char *, XColor *);
typedef int	(*PFN_XParseGeometry) (_Xconst char *, int *, int *, unsigned int *, unsigned int *);
typedef int	(*PFN_XPeekEvent) (Display *, XEvent *);
typedef int	(*PFN_XPeekIfEvent) (Display *, XEvent *, Bool (*) (Display *, XEvent *, XPointer), XPointer);
typedef int	(*PFN_XPending) (Display *);
typedef int	(*PFN_XPlanesOfScreen) (Screen *);
typedef int	(*PFN_XProtocolRevision) (Display *);
typedef int	(*PFN_XProtocolVersion) (Display *);
typedef int	(*PFN_XPutBackEvent) (Display *, XEvent *);
typedef int	(*PFN_XPutImage) (Display *, Drawable, GC, XImage *, int, int, int, int, unsigned int, unsigned int);
typedef int	(*PFN_XQLength) (Display *);
typedef Status	(*PFN_XQueryBestCursor) (Display *, Drawable, unsigned int, unsigned int, unsigned int *, unsigned int *);
typedef Status	(*PFN_XQueryBestSize) (Display *, int, Drawable, unsigned int, unsigned int, unsigned int *, unsigned int *);
typedef Status	(*PFN_XQueryBestStipple) (Display *, Drawable, unsigned int, unsigned int, unsigned int *, unsigned int *);
typedef Status	(*PFN_XQueryBestTile) (Display *, Drawable, unsigned int, unsigned int, unsigned int *, unsigned int *);
typedef int	(*PFN_XQueryColor) (Display *, Colormap, XColor *);
typedef int	(*PFN_XQueryColors) (Display *, Colormap, XColor *, int);
typedef Bool	(*PFN_XQueryExtension) (Display *, _Xconst char *, int *, int *, int *);
typedef int	(*PFN_XQueryKeymap) (Display *, char [32]);
typedef Bool	(*PFN_XQueryPointer) (Display *, Window, Window *, Window *, int *, int *, int *, int *, unsigned int *);
typedef int	(*PFN_XQueryTextExtents) (Display *, XID, _Xconst char *, int, int *, int *, int *, XCharStruct *);
typedef int	(*PFN_XQueryTextExtents16) (Display *, XID, _Xconst XChar2b *, int, int *, int *, int *, XCharStruct *);
typedef Status	(*PFN_XQueryTree) (Display *, Window, Window *, Window *, Window **, unsigned int *);
typedef int	(*PFN_XRaiseWindow) (Display *, Window);
typedef int	(*PFN_XReadBitmapFile) (Display *, Drawable, _Xconst char *, unsigned int *, unsigned int *, Pixmap *, int *, int *);
typedef int	(*PFN_XReadBitmapFileData) (_Xconst char *, unsigned int *, unsigned int *, unsigned char **, int *, int *);
typedef int	(*PFN_XRebindKeysym) (Display *, KeySym, KeySym *, int, _Xconst unsigned char *, int);
typedef int	(*PFN_XRecolorCursor) (Display *, Cursor, XColor *, XColor *);
typedef int	(*PFN_XRefreshKeyboardMapping) (XMappingEvent *);
typedef int	(*PFN_XRemoveFromSaveSet) (Display *, Window);
typedef int	(*PFN_XRemoveHost) (Display *, XHostAddress *);
typedef int	(*PFN_XRemoveHosts) (Display *, XHostAddress *, int);
typedef int	(*PFN_XReparentWindow) (Display *, Window, Window, int, int);
typedef int	(*PFN_XResetScreenSaver) (Display *);
typedef int	(*PFN_XResizeWindow) (Display *, Window, unsigned int, unsigned int);
typedef int	(*PFN_XRestackWindows) (Display *, Window *, int);
typedef int	(*PFN_XRotateBuffers) (Display *, int);
typedef int	(*PFN_XRotateWindowProperties) (Display *, Window, Atom *, int, int);
typedef int	(*PFN_XScreenCount) (Display *);
typedef int	(*PFN_XSelectInput) (Display *, Window, long);
typedef Status	(*PFN_XSendEvent) (Display *, Window, Bool, long, XEvent *);
typedef int	(*PFN_XSetAccessControl) (Display *, int);
typedef int	(*PFN_XSetArcMode) (Display *, GC, int);
typedef int	(*PFN_XSetBackground) (Display *, GC, unsigned long);
typedef int	(*PFN_XSetClipMask) (Display *, GC, Pixmap);
typedef int	(*PFN_XSetClipOrigin) (Display *, GC, int, int);
typedef int	(*PFN_XSetClipRectangles) (Display *, GC, int, int, XRectangle *, int, int);
typedef int	(*PFN_XSetCloseDownMode) (Display *, int);
typedef int	(*PFN_XSetCommand) (Display *, Window, char **, int);
typedef int	(*PFN_XSetDashes) (Display *, GC, int, _Xconst char *, int);
typedef int	(*PFN_XSetFillRule) (Display *, GC, int);
typedef int	(*PFN_XSetFillStyle) (Display *, GC, int);
typedef int	(*PFN_XSetFont) (Display *, GC, Font);
typedef int	(*PFN_XSetFontPath) (Display *, char **, int);
typedef int	(*PFN_XSetForeground) (Display *, GC, unsigned long);
typedef int	(*PFN_XSetFunction) (Display *, GC, int);
typedef int	(*PFN_XSetGraphicsExposures) (Display *, GC, Bool);
typedef int	(*PFN_XSetIconName) (Display *, Window, _Xconst char *);
typedef int	(*PFN_XSetInputFocus) (Display *, Window, int, Time);
typedef int	(*PFN_XSetLineAttributes) (Display *, GC, unsigned int, int, int, int);
typedef int	(*PFN_XSetModifierMapping) (Display *, XModifierKeymap *);
typedef int	(*PFN_XSetPlaneMask) (Display *, GC, unsigned long);
typedef int	(*PFN_XSetPointerMapping) (Display *, _Xconst unsigned char *, int);
typedef int	(*PFN_XSetScreenSaver) (Display *, int, int, int, int);
typedef int	(*PFN_XSetSelectionOwner) (Display *, Atom, Window, Time);
typedef int	(*PFN_XSetState) (Display *, GC, unsigned long, unsigned long, int, unsigned long);
typedef int	(*PFN_XSetStipple) (Display *, GC, Pixmap);
typedef int	(*PFN_XSetSubwindowMode) (Display *, GC, int);
typedef int	(*PFN_XSetTSOrigin) (Display *, GC, int, int);
typedef int	(*PFN_XSetTile) (Display *, GC, Pixmap);
typedef int	(*PFN_XSetWindowBackground) (Display *, Window, unsigned long);
typedef int	(*PFN_XSetWindowBackgroundPixmap) (Display *, Window, Pixmap);
typedef int	(*PFN_XSetWindowBorder) (Display *, Window, unsigned long);
typedef int	(*PFN_XSetWindowBorderPixmap) (Display *, Window, Pixmap);
typedef int	(*PFN_XSetWindowBorderWidth) (Display *, Window, unsigned int);
typedef int	(*PFN_XSetWindowColormap) (Display *, Window, Colormap);
typedef int	(*PFN_XStoreBuffer) (Display *, _Xconst char *, int, int);
typedef int	(*PFN_XStoreBytes) (Display *, _Xconst char *, int);
typedef int	(*PFN_XStoreColor) (Display *, Colormap, XColor *);
typedef int	(*PFN_XStoreColors) (Display *, Colormap, XColor *, int);
typedef int	(*PFN_XStoreName) (Display *, Window, _Xconst char *);
typedef int	(*PFN_XStoreNamedColor) (Display *, Colormap, _Xconst char *, unsigned long, int);
typedef int	(*PFN_XSync) (Display *, Bool);
typedef int	(*PFN_XTextExtents) (XFontStruct *, _Xconst char *, int, int *, int *, int *, XCharStruct *);
typedef int	(*PFN_XTextExtents16) (XFontStruct *, _Xconst XChar2b *, int, int *, int *, int *, XCharStruct *);
typedef int	(*PFN_XTextWidth) (XFontStruct *, _Xconst char *, int);
typedef int	(*PFN_XTextWidth16) (XFontStruct *, _Xconst XChar2b *, int);
typedef Bool	(*PFN_XTranslateCoordinates) (Display *, Window, Window, int, int, int *, int *, Window *);
typedef int	(*PFN_XUndefineCursor) (Display *, Window);
typedef int	(*PFN_XUngrabButton) (Display *, unsigned int, unsigned int, Window);
typedef int	(*PFN_XUngrabKey) (Display *, int, unsigned int, Window);
typedef int	(*PFN_XUngrabKeyboard) (Display *, Time);
typedef int	(*PFN_XUngrabPointer) (Display *, Time);
typedef int	(*PFN_XUngrabServer) (Display *);
typedef int	(*PFN_XUninstallColormap) (Display *, Colormap);
typedef int	(*PFN_XUnloadFont) (Display *, Font);
typedef int	(*PFN_XUnmapSubwindows) (Display *, Window);
typedef int	(*PFN_XUnmapWindow) (Display *, Window);
typedef int	(*PFN_XVendorRelease) (Display *);
typedef int	(*PFN_XWarpPointer) (Display *, Window, Window, int, int, unsigned int, unsigned int, int, int);
typedef int	(*PFN_XWidthMMOfScreen) (Screen *);
typedef int	(*PFN_XWidthOfScreen) (Screen *);
typedef int	(*PFN_XWindowEvent) (Display *, Window, long, XEvent *);
typedef int	(*PFN_XWriteBitmapFile) (Display *, _Xconst char *, Pixmap, unsigned int, unsigned int, int, int);
typedef Bool	(*PFN_XSupportsLocale) (void);
typedef char	*(*PFN_XSetLocaleModifiers) (const char *);
typedef XOM	(*PFN_XOpenOM) (Display *, struct _XrmHashBucketRec *, _Xconst char *, _Xconst char *);
typedef Status	(*PFN_XCloseOM) (XOM);
typedef char	*(*PFN_XSetOMValues) (XOM, ...);
typedef char	*(*PFN_XGetOMValues) (XOM, ...);
typedef Display	*(*PFN_XDisplayOfOM) (XOM);
typedef char	*(*PFN_XLocaleOfOM) (XOM);
typedef XOC	(*PFN_XCreateOC) (XOM, ...);
typedef void	(*PFN_XDestroyOC) (XOC);
typedef XOM	(*PFN_XOMOfOC) (XOC);
typedef char	*(*PFN_XSetOCValues) (XOC, ...);
typedef char	*(*PFN_XGetOCValues) (XOC, ...);
typedef XFontSet	(*PFN_XCreateFontSet) (Display *, _Xconst char *, char ***, int *, char **);
typedef void	(*PFN_XFreeFontSet) (Display *, XFontSet);
typedef int	(*PFN_XFontsOfFontSet) (XFontSet, XFontStruct ***, char ***);
typedef char	*(*PFN_XBaseFontNameListOfFontSet) (XFontSet);
typedef char	*(*PFN_XLocaleOfFontSet) (XFontSet);
typedef Bool	(*PFN_XContextDependentDrawing) (XFontSet);
typedef Bool	(*PFN_XDirectionalDependentDrawing) (XFontSet);
typedef Bool	(*PFN_XContextualDrawing) (XFontSet);
typedef XFontSetExtents	*(*PFN_XExtentsOfFontSet) (XFontSet);
typedef int	(*PFN_XmbTextEscapement) (XFontSet, _Xconst char *, int);
typedef int	(*PFN_XwcTextEscapement) (XFontSet, _Xconst wchar_t *, int);
typedef int	(*PFN_Xutf8TextEscapement) (XFontSet, _Xconst char *, int);
typedef int	(*PFN_XmbTextExtents) (XFontSet, _Xconst char *, int, XRectangle *, XRectangle *);
typedef int	(*PFN_XwcTextExtents) (XFontSet, _Xconst wchar_t *, int, XRectangle *, XRectangle *);
typedef int	(*PFN_Xutf8TextExtents) (XFontSet, _Xconst char *, int, XRectangle *, XRectangle *);
typedef Status	(*PFN_XmbTextPerCharExtents) (XFontSet, _Xconst char *, int, XRectangle *, XRectangle *, int, int *, XRectangle *, XRectangle *);
typedef Status	(*PFN_XwcTextPerCharExtents) (XFontSet, _Xconst wchar_t *, int, XRectangle *, XRectangle *, int, int *, XRectangle *, XRectangle *);
typedef Status	(*PFN_Xutf8TextPerCharExtents) (XFontSet, _Xconst char *, int, XRectangle *, XRectangle *, int, int *, XRectangle *, XRectangle *);
typedef void	(*PFN_XmbDrawText) (Display *, Drawable, GC, int, int, XmbTextItem *, int);
typedef void	(*PFN_XwcDrawText) (Display *, Drawable, GC, int, int, XwcTextItem *, int);
typedef void	(*PFN_Xutf8DrawText) (Display *, Drawable, GC, int, int, XmbTextItem *, int);
typedef void	(*PFN_XmbDrawString) (Display *, Drawable, XFontSet, GC, int, int, _Xconst char *, int);
typedef void	(*PFN_XwcDrawString) (Display *, Drawable, XFontSet, GC, int, int, _Xconst wchar_t *, int);
typedef void	(*PFN_Xutf8DrawString) (Display *, Drawable, XFontSet, GC, int, int, _Xconst char *, int);
typedef void	(*PFN_XmbDrawImageString) (Display *, Drawable, XFontSet, GC, int, int, _Xconst char *, int);
typedef void	(*PFN_XwcDrawImageString) (Display *, Drawable, XFontSet, GC, int, int, _Xconst wchar_t *, int);
typedef void	(*PFN_Xutf8DrawImageString) (Display *, Drawable, XFontSet, GC, int, int, _Xconst char *, int);
typedef XIM	(*PFN_XOpenIM) (Display *, struct _XrmHashBucketRec *, char *, char *);
typedef Status	(*PFN_XCloseIM) (XIM);
typedef char	*(*PFN_XGetIMValues) (XIM, ...);
typedef char	*(*PFN_XSetIMValues) (XIM, ...);
typedef Display	*(*PFN_XDisplayOfIM) (XIM);
typedef char	*(*PFN_XLocaleOfIM) (XIM);
typedef XIC	(*PFN_XCreateIC) (XIM, ...);
typedef void	(*PFN_XDestroyIC) (XIC);
typedef void	(*PFN_XSetICFocus) (XIC);
typedef void	(*PFN_XUnsetICFocus) (XIC);
typedef wchar_t	*(*PFN_XwcResetIC) (XIC);
typedef char	*(*PFN_XmbResetIC) (XIC);
typedef char	*(*PFN_Xutf8ResetIC) (XIC);
typedef char	*(*PFN_XSetICValues) (XIC, ...);
typedef char	*(*PFN_XGetICValues) (XIC, ...);
typedef XIM	(*PFN_XIMOfIC) (XIC);
typedef Bool	(*PFN_XFilterEvent) (XEvent *, Window);
typedef int	(*PFN_XmbLookupString) (XIC, XKeyPressedEvent *, char *, int, KeySym *, Status *);
typedef int	(*PFN_XwcLookupString) (XIC, XKeyPressedEvent *, wchar_t *, int, KeySym *, Status *);
typedef int	(*PFN_Xutf8LookupString) (XIC, XKeyPressedEvent *, char *, int, KeySym *, Status *);
typedef XVaNestedList	(*PFN_XVaCreateNestedList) (int, ...);
typedef Bool	(*PFN_XRegisterIMInstantiateCallback) (Display *, struct _XrmHashBucketRec *, char *, char *, XIDProc, XPointer);
typedef Bool	(*PFN_XUnregisterIMInstantiateCallback) (Display *, struct _XrmHashBucketRec *, char *, char *, XIDProc, XPointer);
typedef Status	(*PFN_XInternalConnectionNumbers) (Display *, int **, int *);
typedef void	(*PFN_XProcessInternalConnection) (Display *, int);
typedef Status	(*PFN_XAddConnectionWatch) (Display *, XConnectionWatchProc, XPointer);
typedef void	(*PFN_XRemoveConnectionWatch) (Display *, XConnectionWatchProc, XPointer);
typedef void	(*PFN_XSetAuthorization) (char *, int, char *, int);
typedef int		(*PFN__Xmbtowc) (wchar_t *, char *, int);
typedef int		(*PFN__Xwctomb) (char *, wchar_t);
typedef Bool	(*PFN_XGetEventData) (Display *, XGenericEventCookie *);
typedef void	(*PFN_XFreeEventData) (Display *, XGenericEventCookie *);

extern PFN_XLoadQueryFont dl_XLoadQueryFont;
extern PFN_XQueryFont dl_XQueryFont;
extern PFN_XGetMotionEvents dl_XGetMotionEvents;
extern PFN_XDeleteModifiermapEntry dl_XDeleteModifiermapEntry;
extern PFN_XGetModifierMapping dl_XGetModifierMapping;
extern PFN_XInsertModifiermapEntry dl_XInsertModifiermapEntry;
extern PFN_XNewModifiermap dl_XNewModifiermap;
extern PFN_XCreateImage dl_XCreateImage;
extern PFN_XInitImage dl_XInitImage;
extern PFN_XGetImage dl_XGetImage;
extern PFN_XGetSubImage dl_XGetSubImage;
extern PFN_XOpenDisplay dl_XOpenDisplay;
extern PFN_XrmInitialize dl_XrmInitialize;
extern PFN_XFetchBytes dl_XFetchBytes;
extern PFN_XFetchBuffer dl_XFetchBuffer;
extern PFN_XGetAtomName dl_XGetAtomName;
extern PFN_XGetAtomNames dl_XGetAtomNames;
extern PFN_XGetDefault dl_XGetDefault;
extern PFN_XDisplayName dl_XDisplayName;
extern PFN_XKeysymToString dl_XKeysymToString;
extern PFN_XSynchronize dl_XSynchronize;
extern PFN_XSetAfterFunction dl_XSetAfterFunction;
extern PFN_XInternAtom dl_XInternAtom;
extern PFN_XInternAtoms dl_XInternAtoms;
extern PFN_XCopyColormapAndFree dl_XCopyColormapAndFree;
extern PFN_XCreateColormap dl_XCreateColormap;
extern PFN_XCreatePixmapCursor dl_XCreatePixmapCursor;
extern PFN_XCreateGlyphCursor dl_XCreateGlyphCursor;
extern PFN_XCreateFontCursor dl_XCreateFontCursor;
extern PFN_XLoadFont dl_XLoadFont;
extern PFN_XCreateGC dl_XCreateGC;
extern PFN_XGContextFromGC dl_XGContextFromGC;
extern PFN_XFlushGC dl_XFlushGC;
extern PFN_XCreatePixmap dl_XCreatePixmap;
extern PFN_XCreateBitmapFromData dl_XCreateBitmapFromData;
extern PFN_XCreatePixmapFromBitmapData dl_XCreatePixmapFromBitmapData;
extern PFN_XCreateSimpleWindow dl_XCreateSimpleWindow;
extern PFN_XGetSelectionOwner dl_XGetSelectionOwner;
extern PFN_XCreateWindow dl_XCreateWindow;
extern PFN_XListInstalledColormaps dl_XListInstalledColormaps;
extern PFN_XListFonts dl_XListFonts;
extern PFN_XListFontsWithInfo dl_XListFontsWithInfo;
extern PFN_XGetFontPath dl_XGetFontPath;
extern PFN_XListExtensions dl_XListExtensions;
extern PFN_XListProperties dl_XListProperties;
extern PFN_XListHosts dl_XListHosts;
extern PFN_XKeycodeToKeysym dl_XKeycodeToKeysym;
extern PFN_XLookupKeysym dl_XLookupKeysym;
extern PFN_XGetKeyboardMapping dl_XGetKeyboardMapping;
extern PFN_XStringToKeysym dl_XStringToKeysym;
extern PFN_XMaxRequestSize dl_XMaxRequestSize;
extern PFN_XExtendedMaxRequestSize dl_XExtendedMaxRequestSize;
extern PFN_XResourceManagerString dl_XResourceManagerString;
extern PFN_XScreenResourceString dl_XScreenResourceString;
extern PFN_XDisplayMotionBufferSize dl_XDisplayMotionBufferSize;
extern PFN_XVisualIDFromVisual dl_XVisualIDFromVisual;
extern PFN_XInitThreads dl_XInitThreads;
extern PFN_XFreeThreads dl_XFreeThreads;
extern PFN_XLockDisplay dl_XLockDisplay;
extern PFN_XUnlockDisplay dl_XUnlockDisplay;
extern PFN_XInitExtension dl_XInitExtension;
extern PFN_XAddExtension dl_XAddExtension;
extern PFN_XFindOnExtensionList dl_XFindOnExtensionList;
extern PFN_XEHeadOfExtensionList dl_XEHeadOfExtensionList;
extern PFN_XRootWindow dl_XRootWindow;
extern PFN_XDefaultRootWindow dl_XDefaultRootWindow;
extern PFN_XRootWindowOfScreen dl_XRootWindowOfScreen;
extern PFN_XDefaultVisual dl_XDefaultVisual;
extern PFN_XDefaultVisualOfScreen dl_XDefaultVisualOfScreen;
extern PFN_XDefaultGC dl_XDefaultGC;
extern PFN_XDefaultGCOfScreen dl_XDefaultGCOfScreen;
extern PFN_XBlackPixel dl_XBlackPixel;
extern PFN_XWhitePixel dl_XWhitePixel;
extern PFN_XAllPlanes dl_XAllPlanes;
extern PFN_XBlackPixelOfScreen dl_XBlackPixelOfScreen;
extern PFN_XWhitePixelOfScreen dl_XWhitePixelOfScreen;
extern PFN_XNextRequest dl_XNextRequest;
extern PFN_XLastKnownRequestProcessed dl_XLastKnownRequestProcessed;
extern PFN_XServerVendor dl_XServerVendor;
extern PFN_XDisplayString dl_XDisplayString;
extern PFN_XDefaultColormap dl_XDefaultColormap;
extern PFN_XDefaultColormapOfScreen dl_XDefaultColormapOfScreen;
extern PFN_XDisplayOfScreen dl_XDisplayOfScreen;
extern PFN_XScreenOfDisplay dl_XScreenOfDisplay;
extern PFN_XDefaultScreenOfDisplay dl_XDefaultScreenOfDisplay;
extern PFN_XEventMaskOfScreen dl_XEventMaskOfScreen;
extern PFN_XScreenNumberOfScreen dl_XScreenNumberOfScreen;
extern PFN_XSetErrorHandler dl_XSetErrorHandler;
extern PFN_XSetIOErrorHandler dl_XSetIOErrorHandler;
extern PFN_XSetIOErrorExitHandler dl_XSetIOErrorExitHandler;
extern PFN_XListPixmapFormats dl_XListPixmapFormats;
extern PFN_XListDepths dl_XListDepths;
extern PFN_XReconfigureWMWindow dl_XReconfigureWMWindow;
extern PFN_XGetWMProtocols dl_XGetWMProtocols;
extern PFN_XSetWMProtocols dl_XSetWMProtocols;
extern PFN_XIconifyWindow dl_XIconifyWindow;
extern PFN_XWithdrawWindow dl_XWithdrawWindow;
extern PFN_XGetCommand dl_XGetCommand;
extern PFN_XGetWMColormapWindows dl_XGetWMColormapWindows;
extern PFN_XSetWMColormapWindows dl_XSetWMColormapWindows;
extern PFN_XFreeStringList dl_XFreeStringList;
extern PFN_XSetTransientForHint dl_XSetTransientForHint;
extern PFN_XActivateScreenSaver dl_XActivateScreenSaver;
extern PFN_XAddHost dl_XAddHost;
extern PFN_XAddHosts dl_XAddHosts;
extern PFN_XAddToExtensionList dl_XAddToExtensionList;
extern PFN_XAddToSaveSet dl_XAddToSaveSet;
extern PFN_XAllocColor dl_XAllocColor;
extern PFN_XAllocColorCells dl_XAllocColorCells;
extern PFN_XAllocColorPlanes dl_XAllocColorPlanes;
extern PFN_XAllocNamedColor dl_XAllocNamedColor;
extern PFN_XAllowEvents dl_XAllowEvents;
extern PFN_XAutoRepeatOff dl_XAutoRepeatOff;
extern PFN_XAutoRepeatOn dl_XAutoRepeatOn;
extern PFN_XBell dl_XBell;
extern PFN_XBitmapBitOrder dl_XBitmapBitOrder;
extern PFN_XBitmapPad dl_XBitmapPad;
extern PFN_XBitmapUnit dl_XBitmapUnit;
extern PFN_XCellsOfScreen dl_XCellsOfScreen;
extern PFN_XChangeActivePointerGrab dl_XChangeActivePointerGrab;
extern PFN_XChangeGC dl_XChangeGC;
extern PFN_XChangeKeyboardControl dl_XChangeKeyboardControl;
extern PFN_XChangeKeyboardMapping dl_XChangeKeyboardMapping;
extern PFN_XChangePointerControl dl_XChangePointerControl;
extern PFN_XChangeProperty dl_XChangeProperty;
extern PFN_XChangeSaveSet dl_XChangeSaveSet;
extern PFN_XChangeWindowAttributes dl_XChangeWindowAttributes;
extern PFN_XCheckIfEvent dl_XCheckIfEvent;
extern PFN_XCheckMaskEvent dl_XCheckMaskEvent;
extern PFN_XCheckTypedEvent dl_XCheckTypedEvent;
extern PFN_XCheckTypedWindowEvent dl_XCheckTypedWindowEvent;
extern PFN_XCheckWindowEvent dl_XCheckWindowEvent;
extern PFN_XCirculateSubwindows dl_XCirculateSubwindows;
extern PFN_XCirculateSubwindowsDown dl_XCirculateSubwindowsDown;
extern PFN_XCirculateSubwindowsUp dl_XCirculateSubwindowsUp;
extern PFN_XClearArea dl_XClearArea;
extern PFN_XClearWindow dl_XClearWindow;
extern PFN_XCloseDisplay dl_XCloseDisplay;
extern PFN_XConfigureWindow dl_XConfigureWindow;
extern PFN_XConnectionNumber dl_XConnectionNumber;
extern PFN_XConvertSelection dl_XConvertSelection;
extern PFN_XCopyArea dl_XCopyArea;
extern PFN_XCopyGC dl_XCopyGC;
extern PFN_XCopyPlane dl_XCopyPlane;
extern PFN_XDefaultDepth dl_XDefaultDepth;
extern PFN_XDefaultDepthOfScreen dl_XDefaultDepthOfScreen;
extern PFN_XDefaultScreen dl_XDefaultScreen;
extern PFN_XDefineCursor dl_XDefineCursor;
extern PFN_XDeleteProperty dl_XDeleteProperty;
extern PFN_XDestroyWindow dl_XDestroyWindow;
extern PFN_XDestroySubwindows dl_XDestroySubwindows;
extern PFN_XDoesBackingStore dl_XDoesBackingStore;
extern PFN_XDoesSaveUnders dl_XDoesSaveUnders;
extern PFN_XDisableAccessControl dl_XDisableAccessControl;
extern PFN_XDisplayCells dl_XDisplayCells;
extern PFN_XDisplayHeight dl_XDisplayHeight;
extern PFN_XDisplayHeightMM dl_XDisplayHeightMM;
extern PFN_XDisplayKeycodes dl_XDisplayKeycodes;
extern PFN_XDisplayPlanes dl_XDisplayPlanes;
extern PFN_XDisplayWidth dl_XDisplayWidth;
extern PFN_XDisplayWidthMM dl_XDisplayWidthMM;
extern PFN_XDrawArc dl_XDrawArc;
extern PFN_XDrawArcs dl_XDrawArcs;
extern PFN_XDrawImageString dl_XDrawImageString;
extern PFN_XDrawImageString16 dl_XDrawImageString16;
extern PFN_XDrawLine dl_XDrawLine;
extern PFN_XDrawLines dl_XDrawLines;
extern PFN_XDrawPoint dl_XDrawPoint;
extern PFN_XDrawPoints dl_XDrawPoints;
extern PFN_XDrawRectangle dl_XDrawRectangle;
extern PFN_XDrawRectangles dl_XDrawRectangles;
extern PFN_XDrawSegments dl_XDrawSegments;
extern PFN_XDrawString dl_XDrawString;
extern PFN_XDrawString16 dl_XDrawString16;
extern PFN_XDrawText dl_XDrawText;
extern PFN_XDrawText16 dl_XDrawText16;
extern PFN_XEnableAccessControl dl_XEnableAccessControl;
extern PFN_XEventsQueued dl_XEventsQueued;
extern PFN_XFetchName dl_XFetchName;
extern PFN_XFillArc dl_XFillArc;
extern PFN_XFillArcs dl_XFillArcs;
extern PFN_XFillPolygon dl_XFillPolygon;
extern PFN_XFillRectangle dl_XFillRectangle;
extern PFN_XFillRectangles dl_XFillRectangles;
extern PFN_XFlush dl_XFlush;
extern PFN_XForceScreenSaver dl_XForceScreenSaver;
extern PFN_XFree dl_XFree;
extern PFN_XFreeColormap dl_XFreeColormap;
extern PFN_XFreeColors dl_XFreeColors;
extern PFN_XFreeCursor dl_XFreeCursor;
extern PFN_XFreeExtensionList dl_XFreeExtensionList;
extern PFN_XFreeFont dl_XFreeFont;
extern PFN_XFreeFontInfo dl_XFreeFontInfo;
extern PFN_XFreeFontNames dl_XFreeFontNames;
extern PFN_XFreeFontPath dl_XFreeFontPath;
extern PFN_XFreeGC dl_XFreeGC;
extern PFN_XFreeModifiermap dl_XFreeModifiermap;
extern PFN_XFreePixmap dl_XFreePixmap;
extern PFN_XGeometry dl_XGeometry;
extern PFN_XGetErrorDatabaseText dl_XGetErrorDatabaseText;
extern PFN_XGetErrorText dl_XGetErrorText;
extern PFN_XGetFontProperty dl_XGetFontProperty;
extern PFN_XGetGCValues dl_XGetGCValues;
extern PFN_XGetGeometry dl_XGetGeometry;
extern PFN_XGetIconName dl_XGetIconName;
extern PFN_XGetInputFocus dl_XGetInputFocus;
extern PFN_XGetKeyboardControl dl_XGetKeyboardControl;
extern PFN_XGetPointerControl dl_XGetPointerControl;
extern PFN_XGetPointerMapping dl_XGetPointerMapping;
extern PFN_XGetScreenSaver dl_XGetScreenSaver;
extern PFN_XGetTransientForHint dl_XGetTransientForHint;
extern PFN_XGetWindowProperty dl_XGetWindowProperty;
extern PFN_XGetWindowAttributes dl_XGetWindowAttributes;
extern PFN_XGrabButton dl_XGrabButton;
extern PFN_XGrabKey dl_XGrabKey;
extern PFN_XGrabKeyboard dl_XGrabKeyboard;
extern PFN_XGrabPointer dl_XGrabPointer;
extern PFN_XGrabServer dl_XGrabServer;
extern PFN_XHeightMMOfScreen dl_XHeightMMOfScreen;
extern PFN_XHeightOfScreen dl_XHeightOfScreen;
extern PFN_XIfEvent dl_XIfEvent;
extern PFN_XImageByteOrder dl_XImageByteOrder;
extern PFN_XInstallColormap dl_XInstallColormap;
extern PFN_XKeysymToKeycode dl_XKeysymToKeycode;
extern PFN_XKillClient dl_XKillClient;
extern PFN_XLookupColor dl_XLookupColor;
extern PFN_XLowerWindow dl_XLowerWindow;
extern PFN_XMapRaised dl_XMapRaised;
extern PFN_XMapSubwindows dl_XMapSubwindows;
extern PFN_XMapWindow dl_XMapWindow;
extern PFN_XMaskEvent dl_XMaskEvent;
extern PFN_XMaxCmapsOfScreen dl_XMaxCmapsOfScreen;
extern PFN_XMinCmapsOfScreen dl_XMinCmapsOfScreen;
extern PFN_XMoveResizeWindow dl_XMoveResizeWindow;
extern PFN_XMoveWindow dl_XMoveWindow;
extern PFN_XNextEvent dl_XNextEvent;
extern PFN_XNoOp dl_XNoOp;
extern PFN_XParseColor dl_XParseColor;
extern PFN_XParseGeometry dl_XParseGeometry;
extern PFN_XPeekEvent dl_XPeekEvent;
extern PFN_XPeekIfEvent dl_XPeekIfEvent;
extern PFN_XPending dl_XPending;
extern PFN_XPlanesOfScreen dl_XPlanesOfScreen;
extern PFN_XProtocolRevision dl_XProtocolRevision;
extern PFN_XProtocolVersion dl_XProtocolVersion;
extern PFN_XPutBackEvent dl_XPutBackEvent;
extern PFN_XPutImage dl_XPutImage;
extern PFN_XQLength dl_XQLength;
extern PFN_XQueryBestCursor dl_XQueryBestCursor;
extern PFN_XQueryBestSize dl_XQueryBestSize;
extern PFN_XQueryBestStipple dl_XQueryBestStipple;
extern PFN_XQueryBestTile dl_XQueryBestTile;
extern PFN_XQueryColor dl_XQueryColor;
extern PFN_XQueryColors dl_XQueryColors;
extern PFN_XQueryExtension dl_XQueryExtension;
extern PFN_XQueryKeymap dl_XQueryKeymap;
extern PFN_XQueryPointer dl_XQueryPointer;
extern PFN_XQueryTextExtents dl_XQueryTextExtents;
extern PFN_XQueryTextExtents16 dl_XQueryTextExtents16;
extern PFN_XQueryTree dl_XQueryTree;
extern PFN_XRaiseWindow dl_XRaiseWindow;
extern PFN_XReadBitmapFile dl_XReadBitmapFile;
extern PFN_XReadBitmapFileData dl_XReadBitmapFileData;
extern PFN_XRebindKeysym dl_XRebindKeysym;
extern PFN_XRecolorCursor dl_XRecolorCursor;
extern PFN_XRefreshKeyboardMapping dl_XRefreshKeyboardMapping;
extern PFN_XRemoveFromSaveSet dl_XRemoveFromSaveSet;
extern PFN_XRemoveHost dl_XRemoveHost;
extern PFN_XRemoveHosts dl_XRemoveHosts;
extern PFN_XReparentWindow dl_XReparentWindow;
extern PFN_XResetScreenSaver dl_XResetScreenSaver;
extern PFN_XResizeWindow dl_XResizeWindow;
extern PFN_XRestackWindows dl_XRestackWindows;
extern PFN_XRotateBuffers dl_XRotateBuffers;
extern PFN_XRotateWindowProperties dl_XRotateWindowProperties;
extern PFN_XScreenCount dl_XScreenCount;
extern PFN_XSelectInput dl_XSelectInput;
extern PFN_XSendEvent dl_XSendEvent;
extern PFN_XSetAccessControl dl_XSetAccessControl;
extern PFN_XSetArcMode dl_XSetArcMode;
extern PFN_XSetBackground dl_XSetBackground;
extern PFN_XSetClipMask dl_XSetClipMask;
extern PFN_XSetClipOrigin dl_XSetClipOrigin;
extern PFN_XSetClipRectangles dl_XSetClipRectangles;
extern PFN_XSetCloseDownMode dl_XSetCloseDownMode;
extern PFN_XSetCommand dl_XSetCommand;
extern PFN_XSetDashes dl_XSetDashes;
extern PFN_XSetFillRule dl_XSetFillRule;
extern PFN_XSetFillStyle dl_XSetFillStyle;
extern PFN_XSetFont dl_XSetFont;
extern PFN_XSetFontPath dl_XSetFontPath;
extern PFN_XSetForeground dl_XSetForeground;
extern PFN_XSetFunction dl_XSetFunction;
extern PFN_XSetGraphicsExposures dl_XSetGraphicsExposures;
extern PFN_XSetIconName dl_XSetIconName;
extern PFN_XSetInputFocus dl_XSetInputFocus;
extern PFN_XSetLineAttributes dl_XSetLineAttributes;
extern PFN_XSetModifierMapping dl_XSetModifierMapping;
extern PFN_XSetPlaneMask dl_XSetPlaneMask;
extern PFN_XSetPointerMapping dl_XSetPointerMapping;
extern PFN_XSetScreenSaver dl_XSetScreenSaver;
extern PFN_XSetSelectionOwner dl_XSetSelectionOwner;
extern PFN_XSetState dl_XSetState;
extern PFN_XSetStipple dl_XSetStipple;
extern PFN_XSetSubwindowMode dl_XSetSubwindowMode;
extern PFN_XSetTSOrigin dl_XSetTSOrigin;
extern PFN_XSetTile dl_XSetTile;
extern PFN_XSetWindowBackground dl_XSetWindowBackground;
extern PFN_XSetWindowBackgroundPixmap dl_XSetWindowBackgroundPixmap;
extern PFN_XSetWindowBorder dl_XSetWindowBorder;
extern PFN_XSetWindowBorderPixmap dl_XSetWindowBorderPixmap;
extern PFN_XSetWindowBorderWidth dl_XSetWindowBorderWidth;
extern PFN_XSetWindowColormap dl_XSetWindowColormap;
extern PFN_XStoreBuffer dl_XStoreBuffer;
extern PFN_XStoreBytes dl_XStoreBytes;
extern PFN_XStoreColor dl_XStoreColor;
extern PFN_XStoreColors dl_XStoreColors;
extern PFN_XStoreName dl_XStoreName;
extern PFN_XStoreNamedColor dl_XStoreNamedColor;
extern PFN_XSync dl_XSync;
extern PFN_XTextExtents dl_XTextExtents;
extern PFN_XTextExtents16 dl_XTextExtents16;
extern PFN_XTextWidth dl_XTextWidth;
extern PFN_XTextWidth16 dl_XTextWidth16;
extern PFN_XTranslateCoordinates dl_XTranslateCoordinates;
extern PFN_XUndefineCursor dl_XUndefineCursor;
extern PFN_XUngrabButton dl_XUngrabButton;
extern PFN_XUngrabKey dl_XUngrabKey;
extern PFN_XUngrabKeyboard dl_XUngrabKeyboard;
extern PFN_XUngrabPointer dl_XUngrabPointer;
extern PFN_XUngrabServer dl_XUngrabServer;
extern PFN_XUninstallColormap dl_XUninstallColormap;
extern PFN_XUnloadFont dl_XUnloadFont;
extern PFN_XUnmapSubwindows dl_XUnmapSubwindows;
extern PFN_XUnmapWindow dl_XUnmapWindow;
extern PFN_XVendorRelease dl_XVendorRelease;
extern PFN_XWarpPointer dl_XWarpPointer;
extern PFN_XWidthMMOfScreen dl_XWidthMMOfScreen;
extern PFN_XWidthOfScreen dl_XWidthOfScreen;
extern PFN_XWindowEvent dl_XWindowEvent;
extern PFN_XWriteBitmapFile dl_XWriteBitmapFile;
extern PFN_XSupportsLocale dl_XSupportsLocale;
extern PFN_XSetLocaleModifiers dl_XSetLocaleModifiers;
extern PFN_XOpenOM dl_XOpenOM;
extern PFN_XCloseOM dl_XCloseOM;
extern PFN_XSetOMValues dl_XSetOMValues;
extern PFN_XGetOMValues dl_XGetOMValues;
extern PFN_XDisplayOfOM dl_XDisplayOfOM;
extern PFN_XLocaleOfOM dl_XLocaleOfOM;
extern PFN_XCreateOC dl_XCreateOC;
extern PFN_XDestroyOC dl_XDestroyOC;
extern PFN_XOMOfOC dl_XOMOfOC;
extern PFN_XSetOCValues dl_XSetOCValues;
extern PFN_XGetOCValues dl_XGetOCValues;
extern PFN_XCreateFontSet dl_XCreateFontSet;
extern PFN_XFreeFontSet dl_XFreeFontSet;
extern PFN_XFontsOfFontSet dl_XFontsOfFontSet;
extern PFN_XBaseFontNameListOfFontSet dl_XBaseFontNameListOfFontSet;
extern PFN_XLocaleOfFontSet dl_XLocaleOfFontSet;
extern PFN_XContextDependentDrawing dl_XContextDependentDrawing;
extern PFN_XDirectionalDependentDrawing dl_XDirectionalDependentDrawing;
extern PFN_XContextualDrawing dl_XContextualDrawing;
extern PFN_XExtentsOfFontSet dl_XExtentsOfFontSet;
extern PFN_XmbTextEscapement dl_XmbTextEscapement;
extern PFN_XwcTextEscapement dl_XwcTextEscapement;
extern PFN_Xutf8TextEscapement dl_Xutf8TextEscapement;
extern PFN_XmbTextExtents dl_XmbTextExtents;
extern PFN_XwcTextExtents dl_XwcTextExtents;
extern PFN_Xutf8TextExtents dl_Xutf8TextExtents;
extern PFN_XmbTextPerCharExtents dl_XmbTextPerCharExtents;
extern PFN_XwcTextPerCharExtents dl_XwcTextPerCharExtents;
extern PFN_Xutf8TextPerCharExtents dl_Xutf8TextPerCharExtents;
extern PFN_XmbDrawText dl_XmbDrawText;
extern PFN_XwcDrawText dl_XwcDrawText;
extern PFN_Xutf8DrawText dl_Xutf8DrawText;
extern PFN_XmbDrawString dl_XmbDrawString;
extern PFN_XwcDrawString dl_XwcDrawString;
extern PFN_Xutf8DrawString dl_Xutf8DrawString;
extern PFN_XmbDrawImageString dl_XmbDrawImageString;
extern PFN_XwcDrawImageString dl_XwcDrawImageString;
extern PFN_Xutf8DrawImageString dl_Xutf8DrawImageString;
extern PFN_XOpenIM dl_XOpenIM;
extern PFN_XCloseIM dl_XCloseIM;
extern PFN_XGetIMValues dl_XGetIMValues;
extern PFN_XSetIMValues dl_XSetIMValues;
extern PFN_XDisplayOfIM dl_XDisplayOfIM;
extern PFN_XLocaleOfIM dl_XLocaleOfIM;
extern PFN_XCreateIC dl_XCreateIC;
extern PFN_XDestroyIC dl_XDestroyIC;
extern PFN_XSetICFocus dl_XSetICFocus;
extern PFN_XUnsetICFocus dl_XUnsetICFocus;
extern PFN_XwcResetIC dl_XwcResetIC;
extern PFN_XmbResetIC dl_XmbResetIC;
extern PFN_Xutf8ResetIC dl_Xutf8ResetIC;
extern PFN_XSetICValues dl_XSetICValues;
extern PFN_XGetICValues dl_XGetICValues;
extern PFN_XIMOfIC dl_XIMOfIC;
extern PFN_XFilterEvent dl_XFilterEvent;
extern PFN_XmbLookupString dl_XmbLookupString;
extern PFN_XwcLookupString dl_XwcLookupString;
extern PFN_Xutf8LookupString dl_Xutf8LookupString;
extern PFN_XVaCreateNestedList dl_XVaCreateNestedList;
extern PFN_XRegisterIMInstantiateCallback dl_XRegisterIMInstantiateCallback;
extern PFN_XUnregisterIMInstantiateCallback dl_XUnregisterIMInstantiateCallback;
extern PFN_XInternalConnectionNumbers dl_XInternalConnectionNumbers;
extern PFN_XProcessInternalConnection dl_XProcessInternalConnection;
extern PFN_XAddConnectionWatch dl_XAddConnectionWatch;
extern PFN_XRemoveConnectionWatch dl_XRemoveConnectionWatch;
extern PFN_XSetAuthorization dl_XSetAuthorization;
extern PFN__Xmbtowc dl__Xmbtowc;
extern PFN__Xwctomb dl__Xwctomb;
extern PFN_XGetEventData dl_XGetEventData;
extern PFN_XFreeEventData dl_XFreeEventData;

# define XLoadQueryFont dl_XLoadQueryFont
# define XQueryFont dl_XQueryFont
# define XGetMotionEvents dl_XGetMotionEvents
# define XDeleteModifiermapEntry dl_XDeleteModifiermapEntry
# define XGetModifierMapping dl_XGetModifierMapping
# define XInsertModifiermapEntry dl_XInsertModifiermapEntry
# define XNewModifiermap dl_XNewModifiermap
# define XCreateImage dl_XCreateImage
# define XInitImage dl_XInitImage
# define XGetImage dl_XGetImage
# define XGetSubImage dl_XGetSubImage
# define XOpenDisplay dl_XOpenDisplay
# define XrmInitialize dl_XrmInitialize
# define XFetchBytes dl_XFetchBytes
# define XFetchBuffer dl_XFetchBuffer
# define XGetAtomName dl_XGetAtomName
# define XGetAtomNames dl_XGetAtomNames
# define XGetDefault dl_XGetDefault
# define XDisplayName dl_XDisplayName
# define XKeysymToString dl_XKeysymToString
# define XSynchronize dl_XSynchronize
# define XSetAfterFunction dl_XSetAfterFunction
# define XInternAtom dl_XInternAtom
# define XInternAtoms dl_XInternAtoms
# define XCopyColormapAndFree dl_XCopyColormapAndFree
# define XCreateColormap dl_XCreateColormap
# define XCreatePixmapCursor dl_XCreatePixmapCursor
# define XCreateGlyphCursor dl_XCreateGlyphCursor
# define XCreateFontCursor dl_XCreateFontCursor
# define XLoadFont dl_XLoadFont
# define XCreateGC dl_XCreateGC
# define XGContextFromGC dl_XGContextFromGC
# define XFlushGC dl_XFlushGC
# define XCreatePixmap dl_XCreatePixmap
# define XCreateBitmapFromData dl_XCreateBitmapFromData
# define XCreatePixmapFromBitmapData dl_XCreatePixmapFromBitmapData
# define XCreateSimpleWindow dl_XCreateSimpleWindow
# define XGetSelectionOwner dl_XGetSelectionOwner
# define XCreateWindow dl_XCreateWindow
# define XListInstalledColormaps dl_XListInstalledColormaps
# define XListFonts dl_XListFonts
# define XListFontsWithInfo dl_XListFontsWithInfo
# define XGetFontPath dl_XGetFontPath
# define XListExtensions dl_XListExtensions
# define XListProperties dl_XListProperties
# define XListHosts dl_XListHosts
# define XKeycodeToKeysym dl_XKeycodeToKeysym
# define XLookupKeysym dl_XLookupKeysym
# define XGetKeyboardMapping dl_XGetKeyboardMapping
# define XStringToKeysym dl_XStringToKeysym
# define XMaxRequestSize dl_XMaxRequestSize
# define XExtendedMaxRequestSize dl_XExtendedMaxRequestSize
# define XResourceManagerString dl_XResourceManagerString
# define XScreenResourceString dl_XScreenResourceString
# define XDisplayMotionBufferSize dl_XDisplayMotionBufferSize
# define XVisualIDFromVisual dl_XVisualIDFromVisual
# define XInitThreads dl_XInitThreads
# define XFreeThreads dl_XFreeThreads
# define XLockDisplay dl_XLockDisplay
# define XUnlockDisplay dl_XUnlockDisplay
# define XInitExtension dl_XInitExtension
# define XAddExtension dl_XAddExtension
# define XFindOnExtensionList dl_XFindOnExtensionList
# define XEHeadOfExtensionList dl_XEHeadOfExtensionList
# define XRootWindow dl_XRootWindow
# define XDefaultRootWindow dl_XDefaultRootWindow
# define XRootWindowOfScreen dl_XRootWindowOfScreen
# define XDefaultVisual dl_XDefaultVisual
# define XDefaultVisualOfScreen dl_XDefaultVisualOfScreen
# define XDefaultGC dl_XDefaultGC
# define XDefaultGCOfScreen dl_XDefaultGCOfScreen
# define XBlackPixel dl_XBlackPixel
# define XWhitePixel dl_XWhitePixel
# define XAllPlanes dl_XAllPlanes
# define XBlackPixelOfScreen dl_XBlackPixelOfScreen
# define XWhitePixelOfScreen dl_XWhitePixelOfScreen
# define XNextRequest dl_XNextRequest
# define XLastKnownRequestProcessed dl_XLastKnownRequestProcessed
# define XServerVendor dl_XServerVendor
# define XDisplayString dl_XDisplayString
# define XDefaultColormap dl_XDefaultColormap
# define XDefaultColormapOfScreen dl_XDefaultColormapOfScreen
# define XDisplayOfScreen dl_XDisplayOfScreen
# define XScreenOfDisplay dl_XScreenOfDisplay
# define XDefaultScreenOfDisplay dl_XDefaultScreenOfDisplay
# define XEventMaskOfScreen dl_XEventMaskOfScreen
# define XScreenNumberOfScreen dl_XScreenNumberOfScreen
# define XSetErrorHandler dl_XSetErrorHandler
# define XSetIOErrorHandler dl_XSetIOErrorHandler
# define XSetIOErrorExitHandler dl_XSetIOErrorExitHandler
# define XListPixmapFormats dl_XListPixmapFormats
# define XListDepths dl_XListDepths
# define XReconfigureWMWindow dl_XReconfigureWMWindow
# define XGetWMProtocols dl_XGetWMProtocols
# define XSetWMProtocols dl_XSetWMProtocols
# define XIconifyWindow dl_XIconifyWindow
# define XWithdrawWindow dl_XWithdrawWindow
# define XGetCommand dl_XGetCommand
# define XGetWMColormapWindows dl_XGetWMColormapWindows
# define XSetWMColormapWindows dl_XSetWMColormapWindows
# define XFreeStringList dl_XFreeStringList
# define XSetTransientForHint dl_XSetTransientForHint
# define XActivateScreenSaver dl_XActivateScreenSaver
# define XAddHost dl_XAddHost
# define XAddHosts dl_XAddHosts
# define XAddToExtensionList dl_XAddToExtensionList
# define XAddToSaveSet dl_XAddToSaveSet
# define XAllocColor dl_XAllocColor
# define XAllocColorCells dl_XAllocColorCells
# define XAllocColorPlanes dl_XAllocColorPlanes
# define XAllocNamedColor dl_XAllocNamedColor
# define XAllowEvents dl_XAllowEvents
# define XAutoRepeatOff dl_XAutoRepeatOff
# define XAutoRepeatOn dl_XAutoRepeatOn
# define XBell dl_XBell
# define XBitmapBitOrder dl_XBitmapBitOrder
# define XBitmapPad dl_XBitmapPad
# define XBitmapUnit dl_XBitmapUnit
# define XCellsOfScreen dl_XCellsOfScreen
# define XChangeActivePointerGrab dl_XChangeActivePointerGrab
# define XChangeGC dl_XChangeGC
# define XChangeKeyboardControl dl_XChangeKeyboardControl
# define XChangeKeyboardMapping dl_XChangeKeyboardMapping
# define XChangePointerControl dl_XChangePointerControl
# define XChangeProperty dl_XChangeProperty
# define XChangeSaveSet dl_XChangeSaveSet
# define XChangeWindowAttributes dl_XChangeWindowAttributes
# define XCheckIfEvent dl_XCheckIfEvent
# define XCheckMaskEvent dl_XCheckMaskEvent
# define XCheckTypedEvent dl_XCheckTypedEvent
# define XCheckTypedWindowEvent dl_XCheckTypedWindowEvent
# define XCheckWindowEvent dl_XCheckWindowEvent
# define XCirculateSubwindows dl_XCirculateSubwindows
# define XCirculateSubwindowsDown dl_XCirculateSubwindowsDown
# define XCirculateSubwindowsUp dl_XCirculateSubwindowsUp
# define XClearArea dl_XClearArea
# define XClearWindow dl_XClearWindow
# define XCloseDisplay dl_XCloseDisplay
# define XConfigureWindow dl_XConfigureWindow
# define XConnectionNumber dl_XConnectionNumber
# define XConvertSelection dl_XConvertSelection
# define XCopyArea dl_XCopyArea
# define XCopyGC dl_XCopyGC
# define XCopyPlane dl_XCopyPlane
# define XDefaultDepth dl_XDefaultDepth
# define XDefaultDepthOfScreen dl_XDefaultDepthOfScreen
# define XDefaultScreen dl_XDefaultScreen
# define XDefineCursor dl_XDefineCursor
# define XDeleteProperty dl_XDeleteProperty
# define XDestroyWindow dl_XDestroyWindow
# define XDestroySubwindows dl_XDestroySubwindows
# define XDoesBackingStore dl_XDoesBackingStore
# define XDoesSaveUnders dl_XDoesSaveUnders
# define XDisableAccessControl dl_XDisableAccessControl
# define XDisplayCells dl_XDisplayCells
# define XDisplayHeight dl_XDisplayHeight
# define XDisplayHeightMM dl_XDisplayHeightMM
# define XDisplayKeycodes dl_XDisplayKeycodes
# define XDisplayPlanes dl_XDisplayPlanes
# define XDisplayWidth dl_XDisplayWidth
# define XDisplayWidthMM dl_XDisplayWidthMM
# define XDrawArc dl_XDrawArc
# define XDrawArcs dl_XDrawArcs
# define XDrawImageString dl_XDrawImageString
# define XDrawImageString16 dl_XDrawImageString16
# define XDrawLine dl_XDrawLine
# define XDrawLines dl_XDrawLines
# define XDrawPoint dl_XDrawPoint
# define XDrawPoints dl_XDrawPoints
# define XDrawRectangle dl_XDrawRectangle
# define XDrawRectangles dl_XDrawRectangles
# define XDrawSegments dl_XDrawSegments
# define XDrawString dl_XDrawString
# define XDrawString16 dl_XDrawString16
# define XDrawText dl_XDrawText
# define XDrawText16 dl_XDrawText16
# define XEnableAccessControl dl_XEnableAccessControl
# define XEventsQueued dl_XEventsQueued
# define XFetchName dl_XFetchName
# define XFillArc dl_XFillArc
# define XFillArcs dl_XFillArcs
# define XFillPolygon dl_XFillPolygon
# define XFillRectangle dl_XFillRectangle
# define XFillRectangles dl_XFillRectangles
# define XFlush dl_XFlush
# define XForceScreenSaver dl_XForceScreenSaver
# define XFree dl_XFree
# define XFreeColormap dl_XFreeColormap
# define XFreeColors dl_XFreeColors
# define XFreeCursor dl_XFreeCursor
# define XFreeExtensionList dl_XFreeExtensionList
# define XFreeFont dl_XFreeFont
# define XFreeFontInfo dl_XFreeFontInfo
# define XFreeFontNames dl_XFreeFontNames
# define XFreeFontPath dl_XFreeFontPath
# define XFreeGC dl_XFreeGC
# define XFreeModifiermap dl_XFreeModifiermap
# define XFreePixmap dl_XFreePixmap
# define XGeometry dl_XGeometry
# define XGetErrorDatabaseText dl_XGetErrorDatabaseText
# define XGetErrorText dl_XGetErrorText
# define XGetFontProperty dl_XGetFontProperty
# define XGetGCValues dl_XGetGCValues
# define XGetGeometry dl_XGetGeometry
# define XGetIconName dl_XGetIconName
# define XGetInputFocus dl_XGetInputFocus
# define XGetKeyboardControl dl_XGetKeyboardControl
# define XGetPointerControl dl_XGetPointerControl
# define XGetPointerMapping dl_XGetPointerMapping
# define XGetScreenSaver dl_XGetScreenSaver
# define XGetTransientForHint dl_XGetTransientForHint
# define XGetWindowProperty dl_XGetWindowProperty
# define XGetWindowAttributes dl_XGetWindowAttributes
# define XGrabButton dl_XGrabButton
# define XGrabKey dl_XGrabKey
# define XGrabKeyboard dl_XGrabKeyboard
# define XGrabPointer dl_XGrabPointer
# define XGrabServer dl_XGrabServer
# define XHeightMMOfScreen dl_XHeightMMOfScreen
# define XHeightOfScreen dl_XHeightOfScreen
# define XIfEvent dl_XIfEvent
# define XImageByteOrder dl_XImageByteOrder
# define XInstallColormap dl_XInstallColormap
# define XKeysymToKeycode dl_XKeysymToKeycode
# define XKillClient dl_XKillClient
# define XLookupColor dl_XLookupColor
# define XLowerWindow dl_XLowerWindow
# define XMapRaised dl_XMapRaised
# define XMapSubwindows dl_XMapSubwindows
# define XMapWindow dl_XMapWindow
# define XMaskEvent dl_XMaskEvent
# define XMaxCmapsOfScreen dl_XMaxCmapsOfScreen
# define XMinCmapsOfScreen dl_XMinCmapsOfScreen
# define XMoveResizeWindow dl_XMoveResizeWindow
# define XMoveWindow dl_XMoveWindow
# define XNextEvent dl_XNextEvent
# define XNoOp dl_XNoOp
# define XParseColor dl_XParseColor
# define XParseGeometry dl_XParseGeometry
# define XPeekEvent dl_XPeekEvent
# define XPeekIfEvent dl_XPeekIfEvent
# define XPending dl_XPending
# define XPlanesOfScreen dl_XPlanesOfScreen
# define XProtocolRevision dl_XProtocolRevision
# define XProtocolVersion dl_XProtocolVersion
# define XPutBackEvent dl_XPutBackEvent
# define XPutImage dl_XPutImage
# define XQLength dl_XQLength
# define XQueryBestCursor dl_XQueryBestCursor
# define XQueryBestSize dl_XQueryBestSize
# define XQueryBestStipple dl_XQueryBestStipple
# define XQueryBestTile dl_XQueryBestTile
# define XQueryColor dl_XQueryColor
# define XQueryColors dl_XQueryColors
# define XQueryExtension dl_XQueryExtension
# define XQueryKeymap dl_XQueryKeymap
# define XQueryPointer dl_XQueryPointer
# define XQueryTextExtents dl_XQueryTextExtents
# define XQueryTextExtents16 dl_XQueryTextExtents16
# define XQueryTree dl_XQueryTree
# define XRaiseWindow dl_XRaiseWindow
# define XReadBitmapFile dl_XReadBitmapFile
# define XReadBitmapFileData dl_XReadBitmapFileData
# define XRebindKeysym dl_XRebindKeysym
# define XRecolorCursor dl_XRecolorCursor
# define XRefreshKeyboardMapping dl_XRefreshKeyboardMapping
# define XRemoveFromSaveSet dl_XRemoveFromSaveSet
# define XRemoveHost dl_XRemoveHost
# define XRemoveHosts dl_XRemoveHosts
# define XReparentWindow dl_XReparentWindow
# define XResetScreenSaver dl_XResetScreenSaver
# define XResizeWindow dl_XResizeWindow
# define XRestackWindows dl_XRestackWindows
# define XRotateBuffers dl_XRotateBuffers
# define XRotateWindowProperties dl_XRotateWindowProperties
# define XScreenCount dl_XScreenCount
# define XSelectInput dl_XSelectInput
# define XSendEvent dl_XSendEvent
# define XSetAccessControl dl_XSetAccessControl
# define XSetArcMode dl_XSetArcMode
# define XSetBackground dl_XSetBackground
# define XSetClipMask dl_XSetClipMask
# define XSetClipOrigin dl_XSetClipOrigin
# define XSetClipRectangles dl_XSetClipRectangles
# define XSetCloseDownMode dl_XSetCloseDownMode
# define XSetCommand dl_XSetCommand
# define XSetDashes dl_XSetDashes
# define XSetFillRule dl_XSetFillRule
# define XSetFillStyle dl_XSetFillStyle
# define XSetFont dl_XSetFont
# define XSetFontPath dl_XSetFontPath
# define XSetForeground dl_XSetForeground
# define XSetFunction dl_XSetFunction
# define XSetGraphicsExposures dl_XSetGraphicsExposures
# define XSetIconName dl_XSetIconName
# define XSetInputFocus dl_XSetInputFocus
# define XSetLineAttributes dl_XSetLineAttributes
# define XSetModifierMapping dl_XSetModifierMapping
# define XSetPlaneMask dl_XSetPlaneMask
# define XSetPointerMapping dl_XSetPointerMapping
# define XSetScreenSaver dl_XSetScreenSaver
# define XSetSelectionOwner dl_XSetSelectionOwner
# define XSetState dl_XSetState
# define XSetStipple dl_XSetStipple
# define XSetSubwindowMode dl_XSetSubwindowMode
# define XSetTSOrigin dl_XSetTSOrigin
# define XSetTile dl_XSetTile
# define XSetWindowBackground dl_XSetWindowBackground
# define XSetWindowBackgroundPixmap dl_XSetWindowBackgroundPixmap
# define XSetWindowBorder dl_XSetWindowBorder
# define XSetWindowBorderPixmap dl_XSetWindowBorderPixmap
# define XSetWindowBorderWidth dl_XSetWindowBorderWidth
# define XSetWindowColormap dl_XSetWindowColormap
# define XStoreBuffer dl_XStoreBuffer
# define XStoreBytes dl_XStoreBytes
# define XStoreColor dl_XStoreColor
# define XStoreColors dl_XStoreColors
# define XStoreName dl_XStoreName
# define XStoreNamedColor dl_XStoreNamedColor
# define XSync dl_XSync
# define XTextExtents dl_XTextExtents
# define XTextExtents16 dl_XTextExtents16
# define XTextWidth dl_XTextWidth
# define XTextWidth16 dl_XTextWidth16
# define XTranslateCoordinates dl_XTranslateCoordinates
# define XUndefineCursor dl_XUndefineCursor
# define XUngrabButton dl_XUngrabButton
# define XUngrabKey dl_XUngrabKey
# define XUngrabKeyboard dl_XUngrabKeyboard
# define XUngrabPointer dl_XUngrabPointer
# define XUngrabServer dl_XUngrabServer
# define XUninstallColormap dl_XUninstallColormap
# define XUnloadFont dl_XUnloadFont
# define XUnmapSubwindows dl_XUnmapSubwindows
# define XUnmapWindow dl_XUnmapWindow
# define XVendorRelease dl_XVendorRelease
# define XWarpPointer dl_XWarpPointer
# define XWidthMMOfScreen dl_XWidthMMOfScreen
# define XWidthOfScreen dl_XWidthOfScreen
# define XWindowEvent dl_XWindowEvent
# define XWriteBitmapFile dl_XWriteBitmapFile
# define XSupportsLocale dl_XSupportsLocale
# define XSetLocaleModifiers dl_XSetLocaleModifiers
# define XOpenOM dl_XOpenOM
# define XCloseOM dl_XCloseOM
# define XSetOMValues dl_XSetOMValues
# define XGetOMValues dl_XGetOMValues
# define XDisplayOfOM dl_XDisplayOfOM
# define XLocaleOfOM dl_XLocaleOfOM
# define XCreateOC dl_XCreateOC
# define XDestroyOC dl_XDestroyOC
# define XOMOfOC dl_XOMOfOC
# define XSetOCValues dl_XSetOCValues
# define XGetOCValues dl_XGetOCValues
# define XCreateFontSet dl_XCreateFontSet
# define XFreeFontSet dl_XFreeFontSet
# define XFontsOfFontSet dl_XFontsOfFontSet
# define XBaseFontNameListOfFontSet dl_XBaseFontNameListOfFontSet
# define XLocaleOfFontSet dl_XLocaleOfFontSet
# define XContextDependentDrawing dl_XContextDependentDrawing
# define XDirectionalDependentDrawing dl_XDirectionalDependentDrawing
# define XContextualDrawing dl_XContextualDrawing
# define XExtentsOfFontSet dl_XExtentsOfFontSet
# define XmbTextEscapement dl_XmbTextEscapement
# define XwcTextEscapement dl_XwcTextEscapement
# define Xutf8TextEscapement dl_Xutf8TextEscapement
# define XmbTextExtents dl_XmbTextExtents
# define XwcTextExtents dl_XwcTextExtents
# define Xutf8TextExtents dl_Xutf8TextExtents
# define XmbTextPerCharExtents dl_XmbTextPerCharExtents
# define XwcTextPerCharExtents dl_XwcTextPerCharExtents
# define Xutf8TextPerCharExtents dl_Xutf8TextPerCharExtents
# define XmbDrawText dl_XmbDrawText
# define XwcDrawText dl_XwcDrawText
# define Xutf8DrawText dl_Xutf8DrawText
# define XmbDrawString dl_XmbDrawString
# define XwcDrawString dl_XwcDrawString
# define Xutf8DrawString dl_Xutf8DrawString
# define XmbDrawImageString dl_XmbDrawImageString
# define XwcDrawImageString dl_XwcDrawImageString
# define Xutf8DrawImageString dl_Xutf8DrawImageString
# define XOpenIM dl_XOpenIM
# define XCloseIM dl_XCloseIM
# define XGetIMValues dl_XGetIMValues
# define XSetIMValues dl_XSetIMValues
# define XDisplayOfIM dl_XDisplayOfIM
# define XLocaleOfIM dl_XLocaleOfIM
# define XCreateIC dl_XCreateIC
# define XDestroyIC dl_XDestroyIC
# define XSetICFocus dl_XSetICFocus
# define XUnsetICFocus dl_XUnsetICFocus
# define XwcResetIC dl_XwcResetIC
# define XmbResetIC dl_XmbResetIC
# define Xutf8ResetIC dl_Xutf8ResetIC
# define XSetICValues dl_XSetICValues
# define XGetICValues dl_XGetICValues
# define XIMOfIC dl_XIMOfIC
# define XFilterEvent dl_XFilterEvent
# define XmbLookupString dl_XmbLookupString
# define XwcLookupString dl_XwcLookupString
# define Xutf8LookupString dl_Xutf8LookupString
# define XVaCreateNestedList dl_XVaCreateNestedList
# define XRegisterIMInstantiateCallback dl_XRegisterIMInstantiateCallback
# define XUnregisterIMInstantiateCallback dl_XUnregisterIMInstantiateCallback
# define XInternalConnectionNumbers dl_XInternalConnectionNumbers
# define XProcessInternalConnection dl_XProcessInternalConnection
# define XAddConnectionWatch dl_XAddConnectionWatch
# define XRemoveConnectionWatch dl_XRemoveConnectionWatch
# define XSetAuthorization dl_XSetAuthorization
# define _Xmbtowc dl__Xmbtowc
# define _Xwctomb dl__Xwctomb
# define XGetEventData dl_XGetEventData
# define XFreeEventData dl_XFreeEventData

/* * MODULE:
 * *  Xutil.h
 * * */

typedef XClassHint*      (*PFN_XAllocClassHint)      (void);
typedef XIconSize*       (*PFN_XAllocIconSize)       (void);
typedef XSizeHints*      (*PFN_XAllocSizeHints)      (void);
typedef XStandardColormap* (*PFN_XAllocStandardColormap) (void);
typedef XWMHints*        (*PFN_XAllocWMHints)        (void);
typedef int              (*PFN_XClipBox)             (Region, XRectangle*);
typedef Region           (*PFN_XCreateRegion)        (void);
typedef const char*      (*PFN_XDefaultString)       (void);
typedef int              (*PFN_XDeleteContext)       (Display*, XID, XContext);
typedef int              (*PFN_XDestroyRegion)       (Region);
typedef int              (*PFN_XEmptyRegion)         (Region);
typedef int              (*PFN_XEqualRegion)         (Region, Region);
typedef int              (*PFN_XFindContext)         (Display*, XID, XContext, XPointer*);
typedef Status           (*PFN_XGetClassHint)        (Display*, Window, XClassHint*);
typedef Status           (*PFN_XGetIconSizes)        (Display*, Window, XIconSize**, int*);
typedef Status           (*PFN_XGetNormalHints)      (Display*, Window, XSizeHints*);
typedef Status           (*PFN_XGetRGBColormaps)     (Display*, Window, XStandardColormap**, int*, Atom);
typedef Status           (*PFN_XGetSizeHints)        (Display*, Window, XSizeHints*, Atom);
typedef Status           (*PFN_XGetStandardColormap) (Display*, Window, XStandardColormap*, Atom);
typedef Status           (*PFN_XGetTextProperty)     (Display*, Window, XTextProperty*, Atom);
typedef XVisualInfo*     (*PFN_XGetVisualInfo)       (Display*, long, XVisualInfo*, int*);
typedef Status           (*PFN_XGetWMClientMachine)  (Display*, Window, XTextProperty*);
typedef XWMHints*        (*PFN_XGetWMHints)         (Display*, Window);
typedef Status           (*PFN_XGetWMIconName)       (Display*, Window, XTextProperty*);
typedef Status           (*PFN_XGetWMName)          (Display*, Window, XTextProperty*);
typedef Status           (*PFN_XGetWMNormalHints)    (Display*, Window, XSizeHints*, long*);
typedef Status           (*PFN_XGetWMSizeHints)      (Display*, Window, XSizeHints*, long*, Atom);
typedef Status           (*PFN_XGetZoomHints)        (Display*, Window, XSizeHints*);
typedef int              (*PFN_XIntersectRegion)     (Region, Region, Region);
typedef void             (*PFN_XConvertCase)         (KeySym, KeySym*, KeySym*);
typedef int              (*PFN_XLookupString)        (XKeyEvent*, char*, int, KeySym*, XComposeStatus*);
typedef Status           (*PFN_XMatchVisualInfo)     (Display*, int, int, int, XVisualInfo*);
typedef int              (*PFN_XOffsetRegion)        (Region, int, int);
typedef Bool             (*PFN_XPointInRegion)       (Region, int, int);
typedef Region           (*PFN_XPolygonRegion)       (XPoint*, int, int);
typedef int              (*PFN_XRectInRegion)        (Region, int, int, unsigned int, unsigned int);
typedef int              (*PFN_XSaveContext)         (Display*, XID, XContext, _Xconst char*);
typedef int              (*PFN_XSetClassHint)        (Display*, Window, XClassHint*);
typedef int              (*PFN_XSetIconSizes)        (Display*, Window, XIconSize*, int);
typedef int              (*PFN_XSetNormalHints)      (Display*, Window, XSizeHints*);
typedef void             (*PFN_XSetRGBColormaps)     (Display*, Window, XStandardColormap*, int, Atom);
typedef int              (*PFN_XSetSizeHints)        (Display*, Window, XSizeHints*, Atom);
typedef int              (*PFN_XSetStandardProperties)(Display*, Window, _Xconst char*, _Xconst char*, Pixmap, char**, int, XSizeHints*);
typedef void             (*PFN_XSetTextProperty)     (Display*, Window, XTextProperty*, Atom);
typedef void             (*PFN_XSetWMClientMachine)  (Display*, Window, XTextProperty*);
typedef int              (*PFN_XSetWMHints)         (Display*, Window, XWMHints*);
typedef void             (*PFN_XSetWMIconName)      (Display*, Window, XTextProperty*);
typedef void             (*PFN_XSetWMName)          (Display*, Window, XTextProperty*);
typedef void             (*PFN_XSetWMNormalHints)    (Display*, Window, XSizeHints*);
typedef void             (*PFN_XSetWMProperties)     (Display*, Window, XTextProperty*, XTextProperty*, char**, int, XSizeHints*, XWMHints*, XClassHint*);
typedef void             (*PFN_XmbSetWMProperties)   (Display*, Window, _Xconst char*, _Xconst char*, char**, int, XSizeHints*, XWMHints*, XClassHint*);
typedef void             (*PFN_Xutf8SetWMProperties) (Display*, Window, _Xconst char*, _Xconst char*, char**, int, XSizeHints*, XWMHints*, XClassHint*);
typedef void             (*PFN_XSetWMSizeHints)      (Display*, Window, XSizeHints*, Atom);
typedef int              (*PFN_XSetRegion)           (Display*, GC, Region);
typedef void             (*PFN_XSetStandardColormap) (Display*, Window, XStandardColormap*, Atom);
typedef int              (*PFN_XSetZoomHints)        (Display*, Window, XSizeHints*);
typedef int              (*PFN_XShrinkRegion)        (Region, int, int);
typedef Status           (*PFN_XStringListToTextProperty)(char**, int, XTextProperty*);
typedef int              (*PFN_XmbTextListToTextProperty)(Display*, char**, int, XICCEncodingStyle, XTextProperty*);
typedef int              (*PFN_XwcTextListToTextProperty)(Display*, wchar_t**, int, XICCEncodingStyle, XTextProperty*);
typedef int              (*PFN_Xutf8TextListToTextProperty)(Display*, char**, int, XICCEncodingStyle, XTextProperty*);
typedef void             (*PFN_XwcFreeStringList)    (wchar_t**);
typedef Status           (*PFN_XTextPropertyToStringList)(XTextProperty*, char***, int*);
typedef int              (*PFN_XmbTextPropertyToTextList)(Display*, const XTextProperty*, char***, int*);
typedef int              (*PFN_XwcTextPropertyToTextList)(Display*, const XTextProperty*, wchar_t***, int*);
typedef int              (*PFN_Xutf8TextPropertyToTextList)(Display*, const XTextProperty*, char***, int*);
typedef int              (*PFN_XUnionRectWithRegion) (XRectangle*, Region, Region);
typedef int              (*PFN_XUnionRegion)         (Region, Region, Region);
typedef int              (*PFN_XWMGeometry)          (Display*, int, _Xconst char*, _Xconst char*, unsigned int, XSizeHints*, int*, int*, int*, int*, int*);
typedef int              (*PFN_XXorRegion)           (Region, Region, Region);

extern PFN_XAllocClassHint          dl_XAllocClassHint;
extern PFN_XAllocIconSize           dl_XAllocIconSize;
extern PFN_XAllocSizeHints          dl_XAllocSizeHints;
extern PFN_XAllocStandardColormap   dl_XAllocStandardColormap;
extern PFN_XAllocWMHints            dl_XAllocWMHints;
extern PFN_XClipBox                 dl_XClipBox;
extern PFN_XCreateRegion            dl_XCreateRegion;
extern PFN_XDefaultString           dl_XDefaultString;
extern PFN_XDeleteContext           dl_XDeleteContext;
extern PFN_XDestroyRegion           dl_XDestroyRegion;
extern PFN_XEmptyRegion             dl_XEmptyRegion;
extern PFN_XEqualRegion             dl_XEqualRegion;
extern PFN_XFindContext             dl_XFindContext;
extern PFN_XGetClassHint            dl_XGetClassHint;
extern PFN_XGetIconSizes            dl_XGetIconSizes;
extern PFN_XGetNormalHints          dl_XGetNormalHints;
extern PFN_XGetRGBColormaps        dl_XGetRGBColormaps;
extern PFN_XGetSizeHints            dl_XGetSizeHints;
extern PFN_XGetStandardColormap     dl_XGetStandardColormap;
extern PFN_XGetTextProperty         dl_XGetTextProperty;
extern PFN_XGetVisualInfo           dl_XGetVisualInfo;
extern PFN_XGetWMClientMachine      dl_XGetWMClientMachine;
extern PFN_XGetWMHints              dl_XGetWMHints;
extern PFN_XGetWMIconName           dl_XGetWMIconName;
extern PFN_XGetWMName               dl_XGetWMName;
extern PFN_XGetWMNormalHints        dl_XGetWMNormalHints;
extern PFN_XGetWMSizeHints          dl_XGetWMSizeHints;
extern PFN_XGetZoomHints            dl_XGetZoomHints;
extern PFN_XIntersectRegion         dl_XIntersectRegion;
extern PFN_XConvertCase             dl_XConvertCase;
extern PFN_XLookupString            dl_XLookupString;
extern PFN_XMatchVisualInfo         dl_XMatchVisualInfo;
extern PFN_XOffsetRegion            dl_XOffsetRegion;
extern PFN_XPointInRegion           dl_XPointInRegion;
extern PFN_XPolygonRegion           dl_XPolygonRegion;
extern PFN_XRectInRegion            dl_XRectInRegion;
extern PFN_XSaveContext             dl_XSaveContext;
extern PFN_XSetClassHint            dl_XSetClassHint;
extern PFN_XSetIconSizes            dl_XSetIconSizes;
extern PFN_XSetNormalHints          dl_XSetNormalHints;
extern PFN_XSetRGBColormaps        dl_XSetRGBColormaps;
extern PFN_XSetSizeHints            dl_XSetSizeHints;
extern PFN_XSetStandardProperties   dl_XSetStandardProperties;
extern PFN_XSetTextProperty         dl_XSetTextProperty;
extern PFN_XSetWMClientMachine      dl_XSetWMClientMachine;
extern PFN_XSetWMHints              dl_XSetWMHints;
extern PFN_XSetWMIconName           dl_XSetWMIconName;
extern PFN_XSetWMName               dl_XSetWMName;
extern PFN_XSetWMNormalHints        dl_XSetWMNormalHints;
extern PFN_XSetWMProperties         dl_XSetWMProperties;
extern PFN_XmbSetWMProperties       dl_XmbSetWMProperties;
extern PFN_Xutf8SetWMProperties     dl_Xutf8SetWMProperties;
extern PFN_XSetWMSizeHints          dl_XSetWMSizeHints;
extern PFN_XSetRegion               dl_XSetRegion;
extern PFN_XSetStandardColormap     dl_XSetStandardColormap;
extern PFN_XSetZoomHints            dl_XSetZoomHints;
extern PFN_XShrinkRegion            dl_XShrinkRegion;
extern PFN_XStringListToTextProperty dl_XStringListToTextProperty;
extern PFN_XmbTextListToTextProperty dl_XmbTextListToTextProperty;
extern PFN_XwcTextListToTextProperty dl_XwcTextListToTextProperty;
extern PFN_Xutf8TextListToTextProperty dl_Xutf8TextListToTextProperty;
extern PFN_XwcFreeStringList        dl_XwcFreeStringList;
extern PFN_XTextPropertyToStringList dl_XTextPropertyToStringList;
extern PFN_XmbTextPropertyToTextList dl_XmbTextPropertyToTextList;
extern PFN_XwcTextPropertyToTextList dl_XwcTextPropertyToTextList;
extern PFN_Xutf8TextPropertyToTextList dl_Xutf8TextPropertyToTextList;
extern PFN_XUnionRectWithRegion     dl_XUnionRectWithRegion;
extern PFN_XUnionRegion             dl_XUnionRegion;
extern PFN_XWMGeometry              dl_XWMGeometry;
extern PFN_XXorRegion               dl_XXorRegion;

# define XAllocClassHint          dl_XAllocClassHint
# define XAllocIconSize           dl_XAllocIconSize
# define XAllocSizeHints          dl_XAllocSizeHints
# define XAllocStandardColormap   dl_XAllocStandardColormap
# define XAllocWMHints            dl_XAllocWMHints
# define XClipBox                 dl_XClipBox
# define XCreateRegion            dl_XCreateRegion
# define XDefaultString           dl_XDefaultString
# define XDeleteContext           dl_XDeleteContext
# define XDestroyRegion           dl_XDestroyRegion
# define XEmptyRegion             dl_XEmptyRegion
# define XEqualRegion             dl_XEqualRegion
# define XFindContext             dl_XFindContext
# define XGetClassHint            dl_XGetClassHint
# define XGetIconSizes            dl_XGetIconSizes
# define XGetNormalHints          dl_XGetNormalHints
# define XGetRGBColormaps        dl_XGetRGBColormaps
# define XGetSizeHints            dl_XGetSizeHints
# define XGetStandardColormap     dl_XGetStandardColormap
# define XGetTextProperty         dl_XGetTextProperty
# define XGetVisualInfo           dl_XGetVisualInfo
# define XGetWMClientMachine      dl_XGetWMClientMachine
# define XGetWMHints              dl_XGetWMHints
# define XGetWMIconName           dl_XGetWMIconName
# define XGetWMName               dl_XGetWMName
# define XGetWMNormalHints        dl_XGetWMNormalHints
# define XGetWMSizeHints          dl_XGetWMSizeHints
# define XGetZoomHints            dl_XGetZoomHints
# define XIntersectRegion         dl_XIntersectRegion
# define XConvertCase             dl_XConvertCase
# define XLookupString            dl_XLookupString
# define XMatchVisualInfo         dl_XMatchVisualInfo
# define XOffsetRegion            dl_XOffsetRegion
# define XPointInRegion           dl_XPointInRegion
# define XPolygonRegion           dl_XPolygonRegion
# define XRectInRegion            dl_XRectInRegion
# define XSaveContext             dl_XSaveContext
# define XSetClassHint            dl_XSetClassHint
# define XSetIconSizes            dl_XSetIconSizes
# define XSetNormalHints          dl_XSetNormalHints
# define XSetRGBColormaps        dl_XSetRGBColormaps
# define XSetSizeHints            dl_XSetSizeHints
# define XSetStandardProperties   dl_XSetStandardProperties
# define XSetTextProperty         dl_XSetTextProperty
# define XSetWMClientMachine      dl_XSetWMClientMachine
# define XSetWMHints              dl_XSetWMHints
# define XSetWMIconName           dl_XSetWMIconName
# define XSetWMName               dl_XSetWMName
# define XSetWMNormalHints        dl_XSetWMNormalHints
# define XSetWMProperties         dl_XSetWMProperties
# define XmbSetWMProperties       dl_XmbSetWMProperties
# define Xutf8SetWMProperties     dl_Xutf8SetWMProperties
# define XSetWMSizeHints          dl_XSetWMSizeHints
# define XSetRegion               dl_XSetRegion
# define XSetStandardColormap     dl_XSetStandardColormap
# define XSetZoomHints            dl_XSetZoomHints
# define XShrinkRegion            dl_XShrinkRegion
# define XStringListToTextProperty dl_XStringListToTextProperty
# define XmbTextListToTextProperty dl_XmbTextListToTextProperty
# define XwcTextListToTextProperty dl_XwcTextListToTextProperty
# define Xutf8TextListToTextProperty dl_Xutf8TextListToTextProperty
# define XwcFreeStringList        dl_XwcFreeStringList
# define XTextPropertyToStringList dl_XTextPropertyToStringList
# define XmbTextPropertyToTextList dl_XmbTextPropertyToTextList
# define XwcTextPropertyToTextList dl_XwcTextPropertyToTextList
# define Xutf8TextPropertyToTextList dl_Xutf8TextPropertyToTextList
# define XUnionRectWithRegion     dl_XUnionRectWithRegion
# define XUnionRegion             dl_XUnionRegion
# define XWMGeometry              dl_XWMGeometry
# define XXorRegion               dl_XXorRegion

/* * MODULE:
 * *  XKBlib.h
 * * */

typedef Bool (*PFN_XkbIgnoreExtension) (Bool);
typedef Display *(*PFN_XkbOpenDisplay) (_Xconst char *, int *, int *, int *, int *, int *);
typedef Bool (*PFN_XkbQueryExtension) (Display *, int *, int *, int *, int *, int *);
typedef Bool (*PFN_XkbUseExtension) (Display *, int *, int *);
typedef Bool (*PFN_XkbLibraryVersion) (int *, int *);
typedef unsigned int (*PFN_XkbSetXlibControls) (Display *, unsigned int, unsigned int);
typedef unsigned int (*PFN_XkbGetXlibControls) (Display *);
typedef unsigned int (*PFN_XkbXlibControlsImplemented) (void);
typedef void (*PFN_XkbSetAtomFuncs) (XkbInternAtomFunc, XkbGetAtomNameFunc);
typedef KeySym (*PFN_XkbKeycodeToKeysym) (Display *, 
#if NeedWidePrototypes
		unsigned int,
#else
		KeyCode,
#endif
		int, int);
typedef unsigned int (*PFN_XkbKeysymToModifiers) (Display *, KeySym);
typedef Bool (*PFN_XkbLookupKeySym) (Display *, KeyCode, unsigned int, unsigned int *, KeySym *);
typedef int (*PFN_XkbLookupKeyBinding) (Display *, KeySym, unsigned int, char *, int, int *);
typedef Bool (*PFN_XkbTranslateKeyCode) (XkbDescPtr, KeyCode, unsigned int, unsigned int *, KeySym *);
typedef int (*PFN_XkbTranslateKeySym) (Display *, KeySym *, unsigned int, char *, int, int *);
typedef Bool (*PFN_XkbSetAutoRepeatRate) (Display *, unsigned int, unsigned int, unsigned int);
typedef Bool (*PFN_XkbGetAutoRepeatRate) (Display *, unsigned int, unsigned int *, unsigned int *);
typedef Bool (*PFN_XkbChangeEnabledControls) (Display *, unsigned int, unsigned int, unsigned int);
typedef Bool (*PFN_XkbDeviceBell) (Display *, Window, int, int, int, int, Atom);
typedef Bool (*PFN_XkbForceDeviceBell) (Display *, int, int, int, int);
typedef Bool (*PFN_XkbDeviceBellEvent) (Display *, Window, int, int, int, int, Atom);
typedef Bool (*PFN_XkbBell) (Display *, Window, int, Atom);
typedef Bool (*PFN_XkbForceBell) (Display *, int);
typedef Bool (*PFN_XkbBellEvent) (Display *, Window, int, Atom);
typedef Bool (*PFN_XkbSelectEvents) (Display *, unsigned int, unsigned int, unsigned int);
typedef Bool (*PFN_XkbSelectEventDetails) (Display *, unsigned int, unsigned int, unsigned long, unsigned long);
typedef void (*PFN_XkbNoteMapChanges) (XkbMapChangesPtr, XkbMapNotifyEvent *, unsigned int);
typedef void (*PFN_XkbNoteNameChanges) (XkbNameChangesPtr, XkbNamesNotifyEvent *, unsigned int);
typedef Status (*PFN_XkbGetIndicatorState) (Display *, unsigned int, unsigned int *);
/* NOTE(yakub):
 *  XkbGetDeviceIndicatorState, even tho is present in XKBlib.h AND being present in official git repository
 *  has no implementation in libX11.so library AND has no implementation in official git repository.
 *
 * typedef Status (*PFN_XkbGetDeviceIndicatorState) (Display *, unsigned int, unsigned int, unsigned int, unsigned int *);
 * */
typedef Status (*PFN_XkbGetIndicatorMap) (Display *, unsigned long, XkbDescPtr);
typedef Bool (*PFN_XkbSetIndicatorMap) (Display *, unsigned long, XkbDescPtr);
typedef Bool (*PFN_XkbGetNamedIndicator) (Display *, Atom, int *, Bool *, XkbIndicatorMapPtr, Bool *);
typedef Bool (*PFN_XkbGetNamedDeviceIndicator) (Display *, unsigned int, unsigned int, unsigned int, Atom, int *, Bool *, XkbIndicatorMapPtr, Bool *);
typedef Bool (*PFN_XkbSetNamedIndicator) (Display *, Atom, Bool, Bool, Bool, XkbIndicatorMapPtr);
typedef Bool (*PFN_XkbSetNamedDeviceIndicator) (Display *, unsigned int, unsigned int, unsigned int, Atom, Bool, Bool, Bool, XkbIndicatorMapPtr);
typedef Bool (*PFN_XkbLockModifiers) (Display *, unsigned int, unsigned int, unsigned int);
typedef Bool (*PFN_XkbLatchModifiers) (Display *, unsigned int, unsigned int, unsigned int);
typedef Bool (*PFN_XkbLockGroup) (Display *, unsigned int, unsigned int);
typedef Bool (*PFN_XkbLatchGroup) (Display *, unsigned int, unsigned int);
typedef Bool (*PFN_XkbSetServerInternalMods) (Display *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
typedef Bool (*PFN_XkbSetIgnoreLockMods) (Display *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
typedef Bool (*PFN_XkbVirtualModsToReal) (XkbDescPtr, unsigned int, unsigned int *);
typedef Bool (*PFN_XkbComputeEffectiveMap) (XkbDescPtr, XkbKeyTypePtr, unsigned char *);
typedef Status (*PFN_XkbInitCanonicalKeyTypes) (XkbDescPtr, unsigned int, int);
typedef XkbDescPtr (*PFN_XkbAllocKeyboard) (void);
typedef void (*PFN_XkbFreeKeyboard) (XkbDescPtr, unsigned int, Bool);
typedef Status (*PFN_XkbAllocClientMap) (XkbDescPtr, unsigned int, unsigned int);
typedef Status (*PFN_XkbAllocServerMap) (XkbDescPtr, unsigned int, unsigned int);
typedef void (*PFN_XkbFreeClientMap) (XkbDescPtr, unsigned int, Bool);
typedef void (*PFN_XkbFreeServerMap) (XkbDescPtr, unsigned int, Bool);
typedef XkbKeyTypePtr (*PFN_XkbAddKeyType) (XkbDescPtr, Atom, int, Bool, int);
typedef Status (*PFN_XkbAllocIndicatorMaps) (XkbDescPtr);
typedef void (*PFN_XkbFreeIndicatorMaps) (XkbDescPtr);
typedef XkbDescPtr (*PFN_XkbGetMap) (Display *, unsigned int, unsigned int);
typedef Status (*PFN_XkbGetUpdatedMap) (Display *, unsigned int, XkbDescPtr);
typedef Status (*PFN_XkbGetMapChanges) (Display *, XkbDescPtr, XkbMapChangesPtr);
typedef Status (*PFN_XkbRefreshKeyboardMapping) (XkbMapNotifyEvent *);
typedef Status (*PFN_XkbGetKeyTypes) (Display *, unsigned int, unsigned int, XkbDescPtr);
typedef Status (*PFN_XkbGetKeySyms) (Display *, unsigned int, unsigned int, XkbDescPtr);
typedef Status (*PFN_XkbGetKeyActions) (Display *, unsigned int, unsigned int, XkbDescPtr);
typedef Status (*PFN_XkbGetKeyBehaviors) (Display *, unsigned int, unsigned int, XkbDescPtr);
typedef Status (*PFN_XkbGetVirtualMods) (Display *, unsigned int, XkbDescPtr);
typedef Status (*PFN_XkbGetKeyExplicitComponents) (Display *, unsigned int, unsigned int, XkbDescPtr);
typedef Status (*PFN_XkbGetKeyModifierMap) (Display *, unsigned int, unsigned int, XkbDescPtr);
typedef Status (*PFN_XkbGetKeyVirtualModMap) (Display *, unsigned int, unsigned int, XkbDescPtr);
typedef Status (*PFN_XkbAllocControls) (XkbDescPtr, unsigned int);
typedef void (*PFN_XkbFreeControls) (XkbDescPtr, unsigned int, Bool);
typedef Status (*PFN_XkbGetControls) (Display *, unsigned long, XkbDescPtr);
typedef Bool (*PFN_XkbSetControls) (Display *, unsigned long, XkbDescPtr);
typedef void (*PFN_XkbNoteControlsChanges) (XkbControlsChangesPtr, XkbControlsNotifyEvent *, unsigned int);
typedef Status (*PFN_XkbAllocCompatMap) (XkbDescPtr, unsigned int, unsigned int);
typedef void (*PFN_XkbFreeCompatMap) (XkbDescPtr, unsigned int, Bool);
typedef Status (*PFN_XkbGetCompatMap) (Display *, unsigned int, XkbDescPtr);
typedef Bool (*PFN_XkbSetCompatMap) (Display *, unsigned int, XkbDescPtr, Bool);
/* NOTE(yakub):
 *  XkbAddSymInterpret, even tho is present in XKBlib.h AND being present in official git repository
 *  has no implementation in libX11.so library AND has no implementation in official git repository.
 *
 * typedef XkbSymInterpretPtr (*PFN_XkbAddSymInterpret) (XkbDescPtr, XkbSymInterpretPtr, Bool, XkbChangesPtr);
 * */
typedef Status (*PFN_XkbAllocNames) (XkbDescPtr, unsigned int, int, int);
typedef Status (*PFN_XkbGetNames) (Display *, unsigned int, XkbDescPtr);
typedef Bool (*PFN_XkbSetNames) (Display *, unsigned int, unsigned int, unsigned int, XkbDescPtr);
typedef Bool (*PFN_XkbChangeNames) (Display *, XkbDescPtr, XkbNameChangesPtr);
typedef void (*PFN_XkbFreeNames) (XkbDescPtr, unsigned int, Bool);
typedef Status (*PFN_XkbGetState) (Display *, unsigned int, XkbStatePtr);
typedef Bool (*PFN_XkbSetMap) (Display *, unsigned int, XkbDescPtr);
typedef Bool (*PFN_XkbChangeMap) (Display *, XkbDescPtr, XkbMapChangesPtr);
typedef Bool (*PFN_XkbSetDetectableAutoRepeat) (Display *, Bool, Bool *);
typedef Bool (*PFN_XkbGetDetectableAutoRepeat) (Display *, Bool *);
typedef Bool (*PFN_XkbSetAutoResetControls) (Display *, unsigned int, unsigned int *, unsigned int *);
typedef Bool (*PFN_XkbGetAutoResetControls) (Display *, unsigned int *, unsigned int *);
typedef Bool (*PFN_XkbSetPerClientControls) (Display *, unsigned int, unsigned int *);
typedef Bool (*PFN_XkbGetPerClientControls) (Display *, unsigned int *);
typedef Status (*PFN_XkbCopyKeyType) (XkbKeyTypePtr, XkbKeyTypePtr);
typedef Status (*PFN_XkbCopyKeyTypes) (XkbKeyTypePtr, XkbKeyTypePtr, int);
typedef Status (*PFN_XkbResizeKeyType) (XkbDescPtr, int, int, Bool, int);
typedef KeySym *(*PFN_XkbResizeKeySyms) (XkbDescPtr, int, int);
typedef XkbAction *(*PFN_XkbResizeKeyActions) (XkbDescPtr, int, int);
typedef Status (*PFN_XkbChangeTypesOfKey) (XkbDescPtr, int, int, unsigned int, int *, XkbMapChangesPtr);
typedef Status (*PFN_XkbChangeKeycodeRange) (XkbDescPtr, int, int, XkbChangesPtr);
typedef XkbComponentListPtr (*PFN_XkbListComponents) (Display *, unsigned int, XkbComponentNamesPtr, int *);
typedef void (*PFN_XkbFreeComponentList) (XkbComponentListPtr);
typedef XkbDescPtr (*PFN_XkbGetKeyboard) (Display *, unsigned int, unsigned int);
typedef XkbDescPtr (*PFN_XkbGetKeyboardByName) (Display *, unsigned int, XkbComponentNamesPtr, unsigned int, unsigned int, Bool);
typedef int (*PFN_XkbKeyTypesForCoreSymbols) (XkbDescPtr, int, KeySym *, unsigned int, int *, KeySym *);
typedef Bool (*PFN_XkbApplyCompatMapToKey) (XkbDescPtr, KeyCode, XkbChangesPtr);
typedef Bool (*PFN_XkbUpdateMapFromCore) (XkbDescPtr, KeyCode, int, int, KeySym *, XkbChangesPtr);
typedef XkbDeviceLedInfoPtr (*PFN_XkbAddDeviceLedInfo) (XkbDeviceInfoPtr, unsigned int, unsigned int);
typedef Status (*PFN_XkbResizeDeviceButtonActions) (XkbDeviceInfoPtr, unsigned int);
typedef XkbDeviceInfoPtr (*PFN_XkbAllocDeviceInfo) (unsigned int, unsigned int, unsigned int);
typedef void (*PFN_XkbFreeDeviceInfo) (XkbDeviceInfoPtr, unsigned int, Bool);
typedef void (*PFN_XkbNoteDeviceChanges) (XkbDeviceChangesPtr, XkbExtensionDeviceNotifyEvent *, unsigned int);
typedef XkbDeviceInfoPtr (*PFN_XkbGetDeviceInfo) (Display *, unsigned int, unsigned int, unsigned int, unsigned int);
typedef Status (*PFN_XkbGetDeviceInfoChanges) (Display *, XkbDeviceInfoPtr, XkbDeviceChangesPtr);
typedef Status (*PFN_XkbGetDeviceButtonActions) (Display *, XkbDeviceInfoPtr, Bool, unsigned int, unsigned int);
typedef Status (*PFN_XkbGetDeviceLedInfo) (Display *, XkbDeviceInfoPtr, unsigned int, unsigned int, unsigned int);
typedef Bool (*PFN_XkbSetDeviceInfo) (Display *, unsigned int, XkbDeviceInfoPtr);
typedef Bool (*PFN_XkbChangeDeviceInfo) (Display *, XkbDeviceInfoPtr, XkbDeviceChangesPtr);
typedef Bool (*PFN_XkbSetDeviceLedInfo) (Display *, XkbDeviceInfoPtr, unsigned int, unsigned int, unsigned int);
typedef Bool (*PFN_XkbSetDeviceButtonActions) (Display *, XkbDeviceInfoPtr, unsigned int, unsigned int);
typedef char (*PFN_XkbToControl) (char);
typedef Bool (*PFN_XkbSetDebuggingFlags) (Display *, unsigned int, unsigned int, char *, unsigned int, unsigned int, unsigned int *, unsigned int *);
typedef Bool (*PFN_XkbApplyVirtualModChanges) (XkbDescPtr, unsigned int, XkbChangesPtr);
typedef Bool (*PFN_XkbUpdateActionVirtualMods) (XkbDescPtr, XkbAction *, unsigned int);
typedef void (*PFN_XkbUpdateKeyTypeVirtualMods) (XkbDescPtr, XkbKeyTypePtr, unsigned int, XkbChangesPtr);

extern PFN_XkbIgnoreExtension dl_XkbIgnoreExtension;
extern PFN_XkbOpenDisplay dl_XkbOpenDisplay;
extern PFN_XkbQueryExtension dl_XkbQueryExtension;
extern PFN_XkbUseExtension dl_XkbUseExtension;
extern PFN_XkbLibraryVersion dl_XkbLibraryVersion;
extern PFN_XkbSetXlibControls dl_XkbSetXlibControls;
extern PFN_XkbGetXlibControls dl_XkbGetXlibControls;
extern PFN_XkbXlibControlsImplemented dl_XkbXlibControlsImplemented;
extern PFN_XkbSetAtomFuncs dl_XkbSetAtomFuncs;
extern PFN_XkbKeycodeToKeysym dl_XkbKeycodeToKeysym;
extern PFN_XkbKeysymToModifiers dl_XkbKeysymToModifiers;
extern PFN_XkbLookupKeySym dl_XkbLookupKeySym;
extern PFN_XkbLookupKeyBinding dl_XkbLookupKeyBinding;
extern PFN_XkbTranslateKeyCode dl_XkbTranslateKeyCode;
extern PFN_XkbTranslateKeySym dl_XkbTranslateKeySym;
extern PFN_XkbSetAutoRepeatRate dl_XkbSetAutoRepeatRate;
extern PFN_XkbGetAutoRepeatRate dl_XkbGetAutoRepeatRate;
extern PFN_XkbChangeEnabledControls dl_XkbChangeEnabledControls;
extern PFN_XkbDeviceBell dl_XkbDeviceBell;
extern PFN_XkbForceDeviceBell dl_XkbForceDeviceBell;
extern PFN_XkbDeviceBellEvent dl_XkbDeviceBellEvent;
extern PFN_XkbBell dl_XkbBell;
extern PFN_XkbForceBell dl_XkbForceBell;
extern PFN_XkbBellEvent dl_XkbBellEvent;
extern PFN_XkbSelectEvents dl_XkbSelectEvents;
extern PFN_XkbSelectEventDetails dl_XkbSelectEventDetails;
extern PFN_XkbNoteMapChanges dl_XkbNoteMapChanges;
extern PFN_XkbNoteNameChanges dl_XkbNoteNameChanges;
extern PFN_XkbGetIndicatorState dl_XkbGetIndicatorState;
/* NOTE(yakub):
 *  XkbGetDeviceIndicatorState, even tho is present in XKBlib.h AND being present in official git repository
 *  has no implementation in libX11.so library AND has no implementation in official git repository.
 *
 * extern PFN_XkbGetDeviceIndicatorState dl_XkbGetDeviceIndicatorState;
 * */
extern PFN_XkbGetIndicatorMap dl_XkbGetIndicatorMap;
extern PFN_XkbSetIndicatorMap dl_XkbSetIndicatorMap;
extern PFN_XkbGetNamedIndicator dl_XkbGetNamedIndicator;
extern PFN_XkbGetNamedDeviceIndicator dl_XkbGetNamedDeviceIndicator;
extern PFN_XkbSetNamedIndicator dl_XkbSetNamedIndicator;
extern PFN_XkbSetNamedDeviceIndicator dl_XkbSetNamedDeviceIndicator;
extern PFN_XkbLockModifiers dl_XkbLockModifiers;
extern PFN_XkbLatchModifiers dl_XkbLatchModifiers;
extern PFN_XkbLockGroup dl_XkbLockGroup;
extern PFN_XkbLatchGroup dl_XkbLatchGroup;
extern PFN_XkbSetServerInternalMods dl_XkbSetServerInternalMods;
extern PFN_XkbSetIgnoreLockMods dl_XkbSetIgnoreLockMods;
extern PFN_XkbVirtualModsToReal dl_XkbVirtualModsToReal;
extern PFN_XkbComputeEffectiveMap dl_XkbComputeEffectiveMap;
extern PFN_XkbInitCanonicalKeyTypes dl_XkbInitCanonicalKeyTypes;
extern PFN_XkbAllocKeyboard dl_XkbAllocKeyboard;
extern PFN_XkbFreeKeyboard dl_XkbFreeKeyboard;
extern PFN_XkbAllocClientMap dl_XkbAllocClientMap;
extern PFN_XkbAllocServerMap dl_XkbAllocServerMap;
extern PFN_XkbFreeClientMap dl_XkbFreeClientMap;
extern PFN_XkbFreeServerMap dl_XkbFreeServerMap;
extern PFN_XkbAddKeyType dl_XkbAddKeyType;
extern PFN_XkbAllocIndicatorMaps dl_XkbAllocIndicatorMaps;
extern PFN_XkbFreeIndicatorMaps dl_XkbFreeIndicatorMaps;
extern PFN_XkbGetMap dl_XkbGetMap;
extern PFN_XkbGetUpdatedMap dl_XkbGetUpdatedMap;
extern PFN_XkbGetMapChanges dl_XkbGetMapChanges;
extern PFN_XkbRefreshKeyboardMapping dl_XkbRefreshKeyboardMapping;
extern PFN_XkbGetKeyTypes dl_XkbGetKeyTypes;
extern PFN_XkbGetKeySyms dl_XkbGetKeySyms;
extern PFN_XkbGetKeyActions dl_XkbGetKeyActions;
extern PFN_XkbGetKeyBehaviors dl_XkbGetKeyBehaviors;
extern PFN_XkbGetVirtualMods dl_XkbGetVirtualMods;
extern PFN_XkbGetKeyExplicitComponents dl_XkbGetKeyExplicitComponents;
extern PFN_XkbGetKeyModifierMap dl_XkbGetKeyModifierMap;
extern PFN_XkbGetKeyVirtualModMap dl_XkbGetKeyVirtualModMap;
extern PFN_XkbAllocControls dl_XkbAllocControls;
extern PFN_XkbFreeControls dl_XkbFreeControls;
extern PFN_XkbGetControls dl_XkbGetControls;
extern PFN_XkbSetControls dl_XkbSetControls;
extern PFN_XkbNoteControlsChanges dl_XkbNoteControlsChanges;
extern PFN_XkbAllocCompatMap dl_XkbAllocCompatMap;
extern PFN_XkbFreeCompatMap dl_XkbFreeCompatMap;
extern PFN_XkbGetCompatMap dl_XkbGetCompatMap;
extern PFN_XkbSetCompatMap dl_XkbSetCompatMap;
/* NOTE(yakub):
 *  XkbAddSymInterpret, even tho is present in XKBlib.h AND being present in official git repository
 *  has no implementation in libX11.so library AND has no implementation in official git repository.
 *
 * extern PFN_XkbAddSymInterpret dl_XkbAddSymInterpret;
 * */
extern PFN_XkbAllocNames dl_XkbAllocNames;
extern PFN_XkbGetNames dl_XkbGetNames;
extern PFN_XkbSetNames dl_XkbSetNames;
extern PFN_XkbChangeNames dl_XkbChangeNames;
extern PFN_XkbFreeNames dl_XkbFreeNames;
extern PFN_XkbGetState dl_XkbGetState;
extern PFN_XkbSetMap dl_XkbSetMap;
extern PFN_XkbChangeMap dl_XkbChangeMap;
extern PFN_XkbSetDetectableAutoRepeat dl_XkbSetDetectableAutoRepeat;
extern PFN_XkbGetDetectableAutoRepeat dl_XkbGetDetectableAutoRepeat;
extern PFN_XkbSetAutoResetControls dl_XkbSetAutoResetControls;
extern PFN_XkbGetAutoResetControls dl_XkbGetAutoResetControls;
extern PFN_XkbSetPerClientControls dl_XkbSetPerClientControls;
extern PFN_XkbGetPerClientControls dl_XkbGetPerClientControls;
extern PFN_XkbCopyKeyType dl_XkbCopyKeyType;
extern PFN_XkbCopyKeyTypes dl_XkbCopyKeyTypes;
extern PFN_XkbResizeKeyType dl_XkbResizeKeyType;
extern PFN_XkbResizeKeySyms dl_XkbResizeKeySyms;
extern PFN_XkbResizeKeyActions dl_XkbResizeKeyActions;
extern PFN_XkbChangeTypesOfKey dl_XkbChangeTypesOfKey;
extern PFN_XkbChangeKeycodeRange dl_XkbChangeKeycodeRange;
extern PFN_XkbListComponents dl_XkbListComponents;
extern PFN_XkbFreeComponentList dl_XkbFreeComponentList;
extern PFN_XkbGetKeyboard dl_XkbGetKeyboard;
extern PFN_XkbGetKeyboardByName dl_XkbGetKeyboardByName;
extern PFN_XkbKeyTypesForCoreSymbols dl_XkbKeyTypesForCoreSymbols;
extern PFN_XkbApplyCompatMapToKey dl_XkbApplyCompatMapToKey;
extern PFN_XkbUpdateMapFromCore dl_XkbUpdateMapFromCore;
extern PFN_XkbAddDeviceLedInfo dl_XkbAddDeviceLedInfo;
extern PFN_XkbResizeDeviceButtonActions dl_XkbResizeDeviceButtonActions;
extern PFN_XkbAllocDeviceInfo dl_XkbAllocDeviceInfo;
extern PFN_XkbFreeDeviceInfo dl_XkbFreeDeviceInfo;
extern PFN_XkbNoteDeviceChanges dl_XkbNoteDeviceChanges;
extern PFN_XkbGetDeviceInfo dl_XkbGetDeviceInfo;
extern PFN_XkbGetDeviceInfoChanges dl_XkbGetDeviceInfoChanges;
extern PFN_XkbGetDeviceButtonActions dl_XkbGetDeviceButtonActions;
extern PFN_XkbGetDeviceLedInfo dl_XkbGetDeviceLedInfo;
extern PFN_XkbSetDeviceInfo dl_XkbSetDeviceInfo;
extern PFN_XkbChangeDeviceInfo dl_XkbChangeDeviceInfo;
extern PFN_XkbSetDeviceLedInfo dl_XkbSetDeviceLedInfo;
extern PFN_XkbSetDeviceButtonActions dl_XkbSetDeviceButtonActions;
extern PFN_XkbToControl dl_XkbToControl;
extern PFN_XkbSetDebuggingFlags dl_XkbSetDebuggingFlags;
extern PFN_XkbApplyVirtualModChanges dl_XkbApplyVirtualModChanges;
extern PFN_XkbUpdateActionVirtualMods dl_XkbUpdateActionVirtualMods;
extern PFN_XkbUpdateKeyTypeVirtualMods dl_XkbUpdateKeyTypeVirtualMods;

# define XkbIgnoreExtension dl_XkbIgnoreExtension
# define XkbOpenDisplay dl_XkbOpenDisplay
# define XkbQueryExtension dl_XkbQueryExtension
# define XkbUseExtension dl_XkbUseExtension
# define XkbLibraryVersion dl_XkbLibraryVersion
# define XkbSetXlibControls dl_XkbSetXlibControls
# define XkbGetXlibControls dl_XkbGetXlibControls
# define XkbXlibControlsImplemented dl_XkbXlibControlsImplemented
# define XkbSetAtomFuncs dl_XkbSetAtomFuncs
# define XkbKeycodeToKeysym dl_XkbKeycodeToKeysym
# define XkbKeysymToModifiers dl_XkbKeysymToModifiers
# define XkbLookupKeySym dl_XkbLookupKeySym
# define XkbLookupKeyBinding dl_XkbLookupKeyBinding
# define XkbTranslateKeyCode dl_XkbTranslateKeyCode
# define XkbTranslateKeySym dl_XkbTranslateKeySym
# define XkbSetAutoRepeatRate dl_XkbSetAutoRepeatRate
# define XkbGetAutoRepeatRate dl_XkbGetAutoRepeatRate
# define XkbChangeEnabledControls dl_XkbChangeEnabledControls
# define XkbDeviceBell dl_XkbDeviceBell
# define XkbForceDeviceBell dl_XkbForceDeviceBell
# define XkbDeviceBellEvent dl_XkbDeviceBellEvent
# define XkbBell dl_XkbBell
# define XkbForceBell dl_XkbForceBell
# define XkbBellEvent dl_XkbBellEvent
# define XkbSelectEvents dl_XkbSelectEvents
# define XkbSelectEventDetails dl_XkbSelectEventDetails
# define XkbNoteMapChanges dl_XkbNoteMapChanges
# define XkbNoteNameChanges dl_XkbNoteNameChanges
# define XkbGetIndicatorState dl_XkbGetIndicatorState
/* NOTE(yakub):
 *  XkbGetDeviceIndicatorState, even tho is present in XKBlib.h AND being present in official git repository
 *  has no implementation in libX11.so library AND has no implementation in official git repository.
 *
 * # define XkbGetDeviceIndicatorState dl_XkbGetDeviceIndicatorState
 * */
# define XkbGetIndicatorMap dl_XkbGetIndicatorMap
# define XkbSetIndicatorMap dl_XkbSetIndicatorMap
# define XkbGetNamedIndicator dl_XkbGetNamedIndicator
# define XkbGetNamedDeviceIndicator dl_XkbGetNamedDeviceIndicator
# define XkbSetNamedIndicator dl_XkbSetNamedIndicator
# define XkbSetNamedDeviceIndicator dl_XkbSetNamedDeviceIndicator
# define XkbLockModifiers dl_XkbLockModifiers
# define XkbLatchModifiers dl_XkbLatchModifiers
# define XkbLockGroup dl_XkbLockGroup
# define XkbLatchGroup dl_XkbLatchGroup
# define XkbSetServerInternalMods dl_XkbSetServerInternalMods
# define XkbSetIgnoreLockMods dl_XkbSetIgnoreLockMods
# define XkbVirtualModsToReal dl_XkbVirtualModsToReal
# define XkbComputeEffectiveMap dl_XkbComputeEffectiveMap
# define XkbInitCanonicalKeyTypes dl_XkbInitCanonicalKeyTypes
# define XkbAllocKeyboard dl_XkbAllocKeyboard
# define XkbFreeKeyboard dl_XkbFreeKeyboard
# define XkbAllocClientMap dl_XkbAllocClientMap
# define XkbAllocServerMap dl_XkbAllocServerMap
# define XkbFreeClientMap dl_XkbFreeClientMap
# define XkbFreeServerMap dl_XkbFreeServerMap
# define XkbAddKeyType dl_XkbAddKeyType
# define XkbAllocIndicatorMaps dl_XkbAllocIndicatorMaps
# define XkbFreeIndicatorMaps dl_XkbFreeIndicatorMaps
# define XkbGetMap dl_XkbGetMap
# define XkbGetUpdatedMap dl_XkbGetUpdatedMap
# define XkbGetMapChanges dl_XkbGetMapChanges
# define XkbRefreshKeyboardMapping dl_XkbRefreshKeyboardMapping
# define XkbGetKeyTypes dl_XkbGetKeyTypes
# define XkbGetKeySyms dl_XkbGetKeySyms
# define XkbGetKeyActions dl_XkbGetKeyActions
# define XkbGetKeyBehaviors dl_XkbGetKeyBehaviors
# define XkbGetVirtualMods dl_XkbGetVirtualMods
# define XkbGetKeyExplicitComponents dl_XkbGetKeyExplicitComponents
# define XkbGetKeyModifierMap dl_XkbGetKeyModifierMap
# define XkbGetKeyVirtualModMap dl_XkbGetKeyVirtualModMap
# define XkbAllocControls dl_XkbAllocControls
# define XkbFreeControls dl_XkbFreeControls
# define XkbGetControls dl_XkbGetControls
# define XkbSetControls dl_XkbSetControls
# define XkbNoteControlsChanges dl_XkbNoteControlsChanges
# define XkbAllocCompatMap dl_XkbAllocCompatMap
# define XkbFreeCompatMap dl_XkbFreeCompatMap
# define XkbGetCompatMap dl_XkbGetCompatMap
# define XkbSetCompatMap dl_XkbSetCompatMap
/* NOTE(yakub):
 *  XkbAddSymInterpret, even tho is present in XKBlib.h AND being present in official git repository
 *  has no implementation in libX11.so library AND has no implementation in official git repository.
 *
 * # define XkbAddSymInterpret dl_XkbAddSymInterpret
 * */
# define XkbAllocNames dl_XkbAllocNames
# define XkbGetNames dl_XkbGetNames
# define XkbSetNames dl_XkbSetNames
# define XkbChangeNames dl_XkbChangeNames
# define XkbFreeNames dl_XkbFreeNames
# define XkbGetState dl_XkbGetState
# define XkbSetMap dl_XkbSetMap
# define XkbChangeMap dl_XkbChangeMap
# define XkbSetDetectableAutoRepeat dl_XkbSetDetectableAutoRepeat
# define XkbGetDetectableAutoRepeat dl_XkbGetDetectableAutoRepeat
# define XkbSetAutoResetControls dl_XkbSetAutoResetControls
# define XkbGetAutoResetControls dl_XkbGetAutoResetControls
# define XkbSetPerClientControls dl_XkbSetPerClientControls
# define XkbGetPerClientControls dl_XkbGetPerClientControls
# define XkbCopyKeyType dl_XkbCopyKeyType
# define XkbCopyKeyTypes dl_XkbCopyKeyTypes
# define XkbResizeKeyType dl_XkbResizeKeyType
# define XkbResizeKeySyms dl_XkbResizeKeySyms
# define XkbResizeKeyActions dl_XkbResizeKeyActions
# define XkbChangeTypesOfKey dl_XkbChangeTypesOfKey
# define XkbChangeKeycodeRange dl_XkbChangeKeycodeRange
# define XkbListComponents dl_XkbListComponents
# define XkbFreeComponentList dl_XkbFreeComponentList
# define XkbGetKeyboard dl_XkbGetKeyboard
# define XkbGetKeyboardByName dl_XkbGetKeyboardByName
# define XkbKeyTypesForCoreSymbols dl_XkbKeyTypesForCoreSymbols
# define XkbApplyCompatMapToKey dl_XkbApplyCompatMapToKey
# define XkbUpdateMapFromCore dl_XkbUpdateMapFromCore
# define XkbAddDeviceLedInfo dl_XkbAddDeviceLedInfo
# define XkbResizeDeviceButtonActions dl_XkbResizeDeviceButtonActions
# define XkbAllocDeviceInfo dl_XkbAllocDeviceInfo
# define XkbFreeDeviceInfo dl_XkbFreeDeviceInfo
# define XkbNoteDeviceChanges dl_XkbNoteDeviceChanges
# define XkbGetDeviceInfo dl_XkbGetDeviceInfo
# define XkbGetDeviceInfoChanges dl_XkbGetDeviceInfoChanges
# define XkbGetDeviceButtonActions dl_XkbGetDeviceButtonActions
# define XkbGetDeviceLedInfo dl_XkbGetDeviceLedInfo
# define XkbSetDeviceInfo dl_XkbSetDeviceInfo
# define XkbChangeDeviceInfo dl_XkbChangeDeviceInfo
# define XkbSetDeviceLedInfo dl_XkbSetDeviceLedInfo
# define XkbSetDeviceButtonActions dl_XkbSetDeviceButtonActions
# define XkbToControl dl_XkbToControl
# define XkbSetDebuggingFlags dl_XkbSetDebuggingFlags
# define XkbApplyVirtualModChanges dl_XkbApplyVirtualModChanges
# define XkbUpdateActionVirtualMods dl_XkbUpdateActionVirtualMods
# define XkbUpdateKeyTypeVirtualMods dl_XkbUpdateKeyTypeVirtualMods

# if defined (DL_IMPL)
#  include <stdio.h>
#  include <stdlib.h>
#  include <errno.h>
#  include <string.h>
#  include <dlfcn.h>
#  include <unistd.h>
#  if !defined dl_logi
#   define dl_logi(...) fprintf(stdout, "\e[1;32m[ INF0 ] \e[0m" __VA_ARGS__)
#  endif /* dl_logi */
#  if !defined dl_logw
#   define dl_logw(...) fprintf(stdout, "\e[1;33m[ WARN ] \e[0m" __VA_ARGS__)
#  endif /* dl_logw */
#  if !defined dl_loge
#   define dl_loge(...) fprintf(stderr, "\e[1;31m[ ERROR ] \e[0m" __VA_ARGS__)
#  endif /* dl_loge */

/* SECTION:
 *  Global static variables
 * */

static void	*g_handle_xlib = 0;



/* SECTION:
 *  Public Function Definitions
 * */

DLAPI bool	dl_loadXlib(void) {
	const char	*_names[] = { "libX11.so", "libX11.so.6", "libX11.so.6.4.0", 0 };

	/* Check if X11 isn't loaded already
	 * */
	if (g_handle_xlib) {
		dl_logw("libX11 handle is already loaded\n");
		return (true);
	}

	for (size_t i = 0; _names[i]; i++) {
		g_handle_xlib = dlopen(_names[i], RTLD_NOW | RTLD_GLOBAL);
		if (g_handle_xlib) {
			break;
		}
	}
	if (!g_handle_xlib) {
		dl_loge("libX11 isn't available on your system\n");
		return (false);
	}

	/* MODULE:
	 *  Xlib.h
	 * */
	if (!(dl_XLoadQueryFont = dlsym(g_handle_xlib, "XLoadQueryFont"))) { dl_loge("Could not load: XLoadQueryFont\n"); return (false); }
	if (!(dl_XQueryFont = dlsym(g_handle_xlib, "XQueryFont"))) { dl_loge("Could not load: XQueryFont\n"); return (false); }
	if (!(dl_XGetMotionEvents = dlsym(g_handle_xlib, "XGetMotionEvents"))) { dl_loge("Could not load: XGetMotionEvents\n"); return (false); }
	if (!(dl_XDeleteModifiermapEntry = dlsym(g_handle_xlib, "XDeleteModifiermapEntry"))) { dl_loge("Could not load: XDeleteModifiermapEntry\n"); return (false); }
	if (!(dl_XGetModifierMapping = dlsym(g_handle_xlib, "XGetModifierMapping"))) { dl_loge("Could not load: XGetModifierMapping\n"); return (false); }
	if (!(dl_XInsertModifiermapEntry = dlsym(g_handle_xlib, "XInsertModifiermapEntry"))) { dl_loge("Could not load: XInsertModifiermapEntry\n"); return (false); }
	if (!(dl_XNewModifiermap = dlsym(g_handle_xlib, "XNewModifiermap"))) { dl_loge("Could not load: XNewModifiermap\n"); return (false); }
	if (!(dl_XCreateImage = dlsym(g_handle_xlib, "XCreateImage"))) { dl_loge("Could not load: XCreateImage\n"); return (false); }
	if (!(dl_XInitImage = dlsym(g_handle_xlib, "XInitImage"))) { dl_loge("Could not load: XInitImage\n"); return (false); }
	if (!(dl_XGetImage = dlsym(g_handle_xlib, "XGetImage"))) { dl_loge("Could not load: XGetImage\n"); return (false); }
	if (!(dl_XGetSubImage = dlsym(g_handle_xlib, "XGetSubImage"))) { dl_loge("Could not load: XGetSubImage\n"); return (false); }
	if (!(dl_XOpenDisplay = dlsym(g_handle_xlib, "XOpenDisplay"))) { dl_loge("Could not load: XOpenDisplay\n"); return (false); }
	if (!(dl_XrmInitialize = dlsym(g_handle_xlib, "XrmInitialize"))) { dl_loge("Could not load: XrmInitialize\n"); return (false); }
	if (!(dl_XFetchBytes = dlsym(g_handle_xlib, "XFetchBytes"))) { dl_loge("Could not load: XFetchBytes\n"); return (false); }
	if (!(dl_XFetchBuffer = dlsym(g_handle_xlib, "XFetchBuffer"))) { dl_loge("Could not load: XFetchBuffer\n"); return (false); }
	if (!(dl_XGetAtomName = dlsym(g_handle_xlib, "XGetAtomName"))) { dl_loge("Could not load: XGetAtomName\n"); return (false); }
	if (!(dl_XGetAtomNames = dlsym(g_handle_xlib, "XGetAtomNames"))) { dl_loge("Could not load: XGetAtomNames\n"); return (false); }
	if (!(dl_XGetDefault = dlsym(g_handle_xlib, "XGetDefault"))) { dl_loge("Could not load: XGetDefault\n"); return (false); }
	if (!(dl_XDisplayName = dlsym(g_handle_xlib, "XDisplayName"))) { dl_loge("Could not load: XDisplayName\n"); return (false); }
	if (!(dl_XKeysymToString = dlsym(g_handle_xlib, "XKeysymToString"))) { dl_loge("Could not load: XKeysymToString\n"); return (false); }
	if (!(dl_XSynchronize = dlsym(g_handle_xlib, "XSynchronize"))) { dl_loge("Could not load: XSynchronize\n"); return (false); }
	if (!(dl_XSetAfterFunction = dlsym(g_handle_xlib, "XSetAfterFunction"))) { dl_loge("Could not load: XSetAfterFunction\n"); return (false); }
	if (!(dl_XInternAtom = dlsym(g_handle_xlib, "XInternAtom"))) { dl_loge("Could not load: XInternAtom\n"); return (false); }
	if (!(dl_XInternAtoms = dlsym(g_handle_xlib, "XInternAtoms"))) { dl_loge("Could not load: XInternAtoms\n"); return (false); }
	if (!(dl_XCopyColormapAndFree = dlsym(g_handle_xlib, "XCopyColormapAndFree"))) { dl_loge("Could not load: XCopyColormapAndFree\n"); return (false); }
	if (!(dl_XCreateColormap = dlsym(g_handle_xlib, "XCreateColormap"))) { dl_loge("Could not load: XCreateColormap\n"); return (false); }
	if (!(dl_XCreatePixmapCursor = dlsym(g_handle_xlib, "XCreatePixmapCursor"))) { dl_loge("Could not load: XCreatePixmapCursor\n"); return (false); }
	if (!(dl_XCreateGlyphCursor = dlsym(g_handle_xlib, "XCreateGlyphCursor"))) { dl_loge("Could not load: XCreateGlyphCursor\n"); return (false); }
	if (!(dl_XCreateFontCursor = dlsym(g_handle_xlib, "XCreateFontCursor"))) { dl_loge("Could not load: XCreateFontCursor\n"); return (false); }
	if (!(dl_XLoadFont = dlsym(g_handle_xlib, "XLoadFont"))) { dl_loge("Could not load: XLoadFont\n"); return (false); }
	if (!(dl_XCreateGC = dlsym(g_handle_xlib, "XCreateGC"))) { dl_loge("Could not load: XCreateGC\n"); return (false); }
	if (!(dl_XGContextFromGC = dlsym(g_handle_xlib, "XGContextFromGC"))) { dl_loge("Could not load: XGContextFromGC\n"); return (false); }
	if (!(dl_XFlushGC = dlsym(g_handle_xlib, "XFlushGC"))) { dl_loge("Could not load: XFlushGC\n"); return (false); }
	if (!(dl_XCreatePixmap = dlsym(g_handle_xlib, "XCreatePixmap"))) { dl_loge("Could not load: XCreatePixmap\n"); return (false); }
	if (!(dl_XCreateBitmapFromData = dlsym(g_handle_xlib, "XCreateBitmapFromData"))) { dl_loge("Could not load: XCreateBitmapFromData\n"); return (false); }
	if (!(dl_XCreatePixmapFromBitmapData = dlsym(g_handle_xlib, "XCreatePixmapFromBitmapData"))) { dl_loge("Could not load: XCreatePixmapFromBitmapData\n"); return (false); }
	if (!(dl_XCreateSimpleWindow = dlsym(g_handle_xlib, "XCreateSimpleWindow"))) { dl_loge("Could not load: XCreateSimpleWindow\n"); return (false); }
	if (!(dl_XGetSelectionOwner = dlsym(g_handle_xlib, "XGetSelectionOwner"))) { dl_loge("Could not load: XGetSelectionOwner\n"); return (false); }
	if (!(dl_XCreateWindow = dlsym(g_handle_xlib, "XCreateWindow"))) { dl_loge("Could not load: XCreateWindow\n"); return (false); }
	if (!(dl_XListInstalledColormaps = dlsym(g_handle_xlib, "XListInstalledColormaps"))) { dl_loge("Could not load: XListInstalledColormaps\n"); return (false); }
	if (!(dl_XListFonts = dlsym(g_handle_xlib, "XListFonts"))) { dl_loge("Could not load: XListFonts\n"); return (false); }
	if (!(dl_XListFontsWithInfo = dlsym(g_handle_xlib, "XListFontsWithInfo"))) { dl_loge("Could not load: XListFontsWithInfo\n"); return (false); }
	if (!(dl_XGetFontPath = dlsym(g_handle_xlib, "XGetFontPath"))) { dl_loge("Could not load: XGetFontPath\n"); return (false); }
	if (!(dl_XListExtensions = dlsym(g_handle_xlib, "XListExtensions"))) { dl_loge("Could not load: XListExtensions\n"); return (false); }
	if (!(dl_XListProperties = dlsym(g_handle_xlib, "XListProperties"))) { dl_loge("Could not load: XListProperties\n"); return (false); }
	if (!(dl_XListHosts = dlsym(g_handle_xlib, "XListHosts"))) { dl_loge("Could not load: XListHosts\n"); return (false); }
	if (!(dl_XKeycodeToKeysym = dlsym(g_handle_xlib, "XKeycodeToKeysym"))) { dl_loge("Could not load: XKeycodeToKeysym\n"); return (false); }
	if (!(dl_XLookupKeysym = dlsym(g_handle_xlib, "XLookupKeysym"))) { dl_loge("Could not load: XLookupKeysym\n"); return (false); }
	if (!(dl_XGetKeyboardMapping = dlsym(g_handle_xlib, "XGetKeyboardMapping"))) { dl_loge("Could not load: XGetKeyboardMapping\n"); return (false); }
	if (!(dl_XStringToKeysym = dlsym(g_handle_xlib, "XStringToKeysym"))) { dl_loge("Could not load: XStringToKeysym\n"); return (false); }
	if (!(dl_XMaxRequestSize = dlsym(g_handle_xlib, "XMaxRequestSize"))) { dl_loge("Could not load: XMaxRequestSize\n"); return (false); }
	if (!(dl_XExtendedMaxRequestSize = dlsym(g_handle_xlib, "XExtendedMaxRequestSize"))) { dl_loge("Could not load: XExtendedMaxRequestSize\n"); return (false); }
	if (!(dl_XResourceManagerString = dlsym(g_handle_xlib, "XResourceManagerString"))) { dl_loge("Could not load: XResourceManagerString\n"); return (false); }
	if (!(dl_XScreenResourceString = dlsym(g_handle_xlib, "XScreenResourceString"))) { dl_loge("Could not load: XScreenResourceString\n"); return (false); }
	if (!(dl_XDisplayMotionBufferSize = dlsym(g_handle_xlib, "XDisplayMotionBufferSize"))) { dl_loge("Could not load: XDisplayMotionBufferSize\n"); return (false); }
	if (!(dl_XVisualIDFromVisual = dlsym(g_handle_xlib, "XVisualIDFromVisual"))) { dl_loge("Could not load: XVisualIDFromVisual\n"); return (false); }
	if (!(dl_XInitThreads = dlsym(g_handle_xlib, "XInitThreads"))) { dl_loge("Could not load: XInitThreads\n"); return (false); }
	if (!(dl_XFreeThreads = dlsym(g_handle_xlib, "XFreeThreads"))) { dl_loge("Could not load: XFreeThreads\n"); return (false); }
	if (!(dl_XLockDisplay = dlsym(g_handle_xlib, "XLockDisplay"))) { dl_loge("Could not load: XLockDisplay\n"); return (false); }
	if (!(dl_XUnlockDisplay = dlsym(g_handle_xlib, "XUnlockDisplay"))) { dl_loge("Could not load: XUnlockDisplay\n"); return (false); }
	if (!(dl_XInitExtension = dlsym(g_handle_xlib, "XInitExtension"))) { dl_loge("Could not load: XInitExtension\n"); return (false); }
	if (!(dl_XAddExtension = dlsym(g_handle_xlib, "XAddExtension"))) { dl_loge("Could not load: XAddExtension\n"); return (false); }
	if (!(dl_XFindOnExtensionList = dlsym(g_handle_xlib, "XFindOnExtensionList"))) { dl_loge("Could not load: XFindOnExtensionList\n"); return (false); }
	if (!(dl_XEHeadOfExtensionList = dlsym(g_handle_xlib, "XEHeadOfExtensionList"))) { dl_loge("Could not load: XEHeadOfExtensionList\n"); return (false); }
	if (!(dl_XRootWindow = dlsym(g_handle_xlib, "XRootWindow"))) { dl_loge("Could not load: XRootWindow\n"); return (false); }
	if (!(dl_XDefaultRootWindow = dlsym(g_handle_xlib, "XDefaultRootWindow"))) { dl_loge("Could not load: XDefaultRootWindow\n"); return (false); }
	if (!(dl_XRootWindowOfScreen = dlsym(g_handle_xlib, "XRootWindowOfScreen"))) { dl_loge("Could not load: XRootWindowOfScreen\n"); return (false); }
	if (!(dl_XDefaultVisual = dlsym(g_handle_xlib, "XDefaultVisual"))) { dl_loge("Could not load: XDefaultVisual\n"); return (false); }
	if (!(dl_XDefaultVisualOfScreen = dlsym(g_handle_xlib, "XDefaultVisualOfScreen"))) { dl_loge("Could not load: XDefaultVisualOfScreen\n"); return (false); }
	if (!(dl_XDefaultGC = dlsym(g_handle_xlib, "XDefaultGC"))) { dl_loge("Could not load: XDefaultGC\n"); return (false); }
	if (!(dl_XDefaultGCOfScreen = dlsym(g_handle_xlib, "XDefaultGCOfScreen"))) { dl_loge("Could not load: XDefaultGCOfScreen\n"); return (false); }
	if (!(dl_XBlackPixel = dlsym(g_handle_xlib, "XBlackPixel"))) { dl_loge("Could not load: XBlackPixel\n"); return (false); }
	if (!(dl_XWhitePixel = dlsym(g_handle_xlib, "XWhitePixel"))) { dl_loge("Could not load: XWhitePixel\n"); return (false); }
	if (!(dl_XAllPlanes = dlsym(g_handle_xlib, "XAllPlanes"))) { dl_loge("Could not load: XAllPlanes\n"); return (false); }
	if (!(dl_XBlackPixelOfScreen = dlsym(g_handle_xlib, "XBlackPixelOfScreen"))) { dl_loge("Could not load: XBlackPixelOfScreen\n"); return (false); }
	if (!(dl_XWhitePixelOfScreen = dlsym(g_handle_xlib, "XWhitePixelOfScreen"))) { dl_loge("Could not load: XWhitePixelOfScreen\n"); return (false); }
	if (!(dl_XNextRequest = dlsym(g_handle_xlib, "XNextRequest"))) { dl_loge("Could not load: XNextRequest\n"); return (false); }
	if (!(dl_XLastKnownRequestProcessed = dlsym(g_handle_xlib, "XLastKnownRequestProcessed"))) { dl_loge("Could not load: XLastKnownRequestProcessed\n"); return (false); }
	if (!(dl_XServerVendor = dlsym(g_handle_xlib, "XServerVendor"))) { dl_loge("Could not load: XServerVendor\n"); return (false); }
	if (!(dl_XDisplayString = dlsym(g_handle_xlib, "XDisplayString"))) { dl_loge("Could not load: XDisplayString\n"); return (false); }
	if (!(dl_XDefaultColormap = dlsym(g_handle_xlib, "XDefaultColormap"))) { dl_loge("Could not load: XDefaultColormap\n"); return (false); }
	if (!(dl_XDefaultColormapOfScreen = dlsym(g_handle_xlib, "XDefaultColormapOfScreen"))) { dl_loge("Could not load: XDefaultColormapOfScreen\n"); return (false); }
	if (!(dl_XDisplayOfScreen = dlsym(g_handle_xlib, "XDisplayOfScreen"))) { dl_loge("Could not load: XDisplayOfScreen\n"); return (false); }
	if (!(dl_XScreenOfDisplay = dlsym(g_handle_xlib, "XScreenOfDisplay"))) { dl_loge("Could not load: XScreenOfDisplay\n"); return (false); }
	if (!(dl_XDefaultScreenOfDisplay = dlsym(g_handle_xlib, "XDefaultScreenOfDisplay"))) { dl_loge("Could not load: XDefaultScreenOfDisplay\n"); return (false); }
	if (!(dl_XEventMaskOfScreen = dlsym(g_handle_xlib, "XEventMaskOfScreen"))) { dl_loge("Could not load: XEventMaskOfScreen\n"); return (false); }
	if (!(dl_XScreenNumberOfScreen = dlsym(g_handle_xlib, "XScreenNumberOfScreen"))) { dl_loge("Could not load: XScreenNumberOfScreen\n"); return (false); }
	if (!(dl_XSetErrorHandler = dlsym(g_handle_xlib, "XSetErrorHandler"))) { dl_loge("Could not load: XSetErrorHandler\n"); return (false); }
	if (!(dl_XSetIOErrorHandler = dlsym(g_handle_xlib, "XSetIOErrorHandler"))) { dl_loge("Could not load: XSetIOErrorHandler\n"); return (false); }
	if (!(dl_XSetIOErrorExitHandler = dlsym(g_handle_xlib, "XSetIOErrorExitHandler"))) { dl_loge("Could not load: XSetIOErrorExitHandler\n"); return (false); }
	if (!(dl_XListPixmapFormats = dlsym(g_handle_xlib, "XListPixmapFormats"))) { dl_loge("Could not load: XListPixmapFormats\n"); return (false); }
	if (!(dl_XListDepths = dlsym(g_handle_xlib, "XListDepths"))) { dl_loge("Could not load: XListDepths\n"); return (false); }
	if (!(dl_XReconfigureWMWindow = dlsym(g_handle_xlib, "XReconfigureWMWindow"))) { dl_loge("Could not load: XReconfigureWMWindow\n"); return (false); }
	if (!(dl_XGetWMProtocols = dlsym(g_handle_xlib, "XGetWMProtocols"))) { dl_loge("Could not load: XGetWMProtocols\n"); return (false); }
	if (!(dl_XSetWMProtocols = dlsym(g_handle_xlib, "XSetWMProtocols"))) { dl_loge("Could not load: XSetWMProtocols\n"); return (false); }
	if (!(dl_XIconifyWindow = dlsym(g_handle_xlib, "XIconifyWindow"))) { dl_loge("Could not load: XIconifyWindow\n"); return (false); }
	if (!(dl_XWithdrawWindow = dlsym(g_handle_xlib, "XWithdrawWindow"))) { dl_loge("Could not load: XWithdrawWindow\n"); return (false); }
	if (!(dl_XGetCommand = dlsym(g_handle_xlib, "XGetCommand"))) { dl_loge("Could not load: XGetCommand\n"); return (false); }
	if (!(dl_XGetWMColormapWindows = dlsym(g_handle_xlib, "XGetWMColormapWindows"))) { dl_loge("Could not load: XGetWMColormapWindows\n"); return (false); }
	if (!(dl_XSetWMColormapWindows = dlsym(g_handle_xlib, "XSetWMColormapWindows"))) { dl_loge("Could not load: XSetWMColormapWindows\n"); return (false); }
	if (!(dl_XFreeStringList = dlsym(g_handle_xlib, "XFreeStringList"))) { dl_loge("Could not load: XFreeStringList\n"); return (false); }
	if (!(dl_XSetTransientForHint = dlsym(g_handle_xlib, "XSetTransientForHint"))) { dl_loge("Could not load: XSetTransientForHint\n"); return (false); }
	if (!(dl_XActivateScreenSaver = dlsym(g_handle_xlib, "XActivateScreenSaver"))) { dl_loge("Could not load: XActivateScreenSaver\n"); return (false); }
	if (!(dl_XAddHost = dlsym(g_handle_xlib, "XAddHost"))) { dl_loge("Could not load: XAddHost\n"); return (false); }
	if (!(dl_XAddHosts = dlsym(g_handle_xlib, "XAddHosts"))) { dl_loge("Could not load: XAddHosts\n"); return (false); }
	if (!(dl_XAddToExtensionList = dlsym(g_handle_xlib, "XAddToExtensionList"))) { dl_loge("Could not load: XAddToExtensionList\n"); return (false); }
	if (!(dl_XAddToSaveSet = dlsym(g_handle_xlib, "XAddToSaveSet"))) { dl_loge("Could not load: XAddToSaveSet\n"); return (false); }
	if (!(dl_XAllocColor = dlsym(g_handle_xlib, "XAllocColor"))) { dl_loge("Could not load: XAllocColor\n"); return (false); }
	if (!(dl_XAllocColorCells = dlsym(g_handle_xlib, "XAllocColorCells"))) { dl_loge("Could not load: XAllocColorCells\n"); return (false); }
	if (!(dl_XAllocColorPlanes = dlsym(g_handle_xlib, "XAllocColorPlanes"))) { dl_loge("Could not load: XAllocColorPlanes\n"); return (false); }
	if (!(dl_XAllocNamedColor = dlsym(g_handle_xlib, "XAllocNamedColor"))) { dl_loge("Could not load: XAllocNamedColor\n"); return (false); }
	if (!(dl_XAllowEvents = dlsym(g_handle_xlib, "XAllowEvents"))) { dl_loge("Could not load: XAllowEvents\n"); return (false); }
	if (!(dl_XAutoRepeatOff = dlsym(g_handle_xlib, "XAutoRepeatOff"))) { dl_loge("Could not load: XAutoRepeatOff\n"); return (false); }
	if (!(dl_XAutoRepeatOn = dlsym(g_handle_xlib, "XAutoRepeatOn"))) { dl_loge("Could not load: XAutoRepeatOn\n"); return (false); }
	if (!(dl_XBell = dlsym(g_handle_xlib, "XBell"))) { dl_loge("Could not load: XBell\n"); return (false); }
	if (!(dl_XBitmapBitOrder = dlsym(g_handle_xlib, "XBitmapBitOrder"))) { dl_loge("Could not load: XBitmapBitOrder\n"); return (false); }
	if (!(dl_XBitmapPad = dlsym(g_handle_xlib, "XBitmapPad"))) { dl_loge("Could not load: XBitmapPad\n"); return (false); }
	if (!(dl_XBitmapUnit = dlsym(g_handle_xlib, "XBitmapUnit"))) { dl_loge("Could not load: XBitmapUnit\n"); return (false); }
	if (!(dl_XCellsOfScreen = dlsym(g_handle_xlib, "XCellsOfScreen"))) { dl_loge("Could not load: XCellsOfScreen\n"); return (false); }
	if (!(dl_XChangeActivePointerGrab = dlsym(g_handle_xlib, "XChangeActivePointerGrab"))) { dl_loge("Could not load: XChangeActivePointerGrab\n"); return (false); }
	if (!(dl_XChangeGC = dlsym(g_handle_xlib, "XChangeGC"))) { dl_loge("Could not load: XChangeGC\n"); return (false); }
	if (!(dl_XChangeKeyboardControl = dlsym(g_handle_xlib, "XChangeKeyboardControl"))) { dl_loge("Could not load: XChangeKeyboardControl\n"); return (false); }
	if (!(dl_XChangeKeyboardMapping = dlsym(g_handle_xlib, "XChangeKeyboardMapping"))) { dl_loge("Could not load: XChangeKeyboardMapping\n"); return (false); }
	if (!(dl_XChangePointerControl = dlsym(g_handle_xlib, "XChangePointerControl"))) { dl_loge("Could not load: XChangePointerControl\n"); return (false); }
	if (!(dl_XChangeProperty = dlsym(g_handle_xlib, "XChangeProperty"))) { dl_loge("Could not load: XChangeProperty\n"); return (false); }
	if (!(dl_XChangeSaveSet = dlsym(g_handle_xlib, "XChangeSaveSet"))) { dl_loge("Could not load: XChangeSaveSet\n"); return (false); }
	if (!(dl_XChangeWindowAttributes = dlsym(g_handle_xlib, "XChangeWindowAttributes"))) { dl_loge("Could not load: XChangeWindowAttributes\n"); return (false); }
	if (!(dl_XCheckIfEvent = dlsym(g_handle_xlib, "XCheckIfEvent"))) { dl_loge("Could not load: XCheckIfEvent\n"); return (false); }
	if (!(dl_XCheckMaskEvent = dlsym(g_handle_xlib, "XCheckMaskEvent"))) { dl_loge("Could not load: XCheckMaskEvent\n"); return (false); }
	if (!(dl_XCheckTypedEvent = dlsym(g_handle_xlib, "XCheckTypedEvent"))) { dl_loge("Could not load: XCheckTypedEvent\n"); return (false); }
	if (!(dl_XCheckTypedWindowEvent = dlsym(g_handle_xlib, "XCheckTypedWindowEvent"))) { dl_loge("Could not load: XCheckTypedWindowEvent\n"); return (false); }
	if (!(dl_XCheckWindowEvent = dlsym(g_handle_xlib, "XCheckWindowEvent"))) { dl_loge("Could not load: XCheckWindowEvent\n"); return (false); }
	if (!(dl_XCirculateSubwindows = dlsym(g_handle_xlib, "XCirculateSubwindows"))) { dl_loge("Could not load: XCirculateSubwindows\n"); return (false); }
	if (!(dl_XCirculateSubwindowsDown = dlsym(g_handle_xlib, "XCirculateSubwindowsDown"))) { dl_loge("Could not load: XCirculateSubwindowsDown\n"); return (false); }
	if (!(dl_XCirculateSubwindowsUp = dlsym(g_handle_xlib, "XCirculateSubwindowsUp"))) { dl_loge("Could not load: XCirculateSubwindowsUp\n"); return (false); }
	if (!(dl_XClearArea = dlsym(g_handle_xlib, "XClearArea"))) { dl_loge("Could not load: XClearArea\n"); return (false); }
	if (!(dl_XClearWindow = dlsym(g_handle_xlib, "XClearWindow"))) { dl_loge("Could not load: XClearWindow\n"); return (false); }
	if (!(dl_XCloseDisplay = dlsym(g_handle_xlib, "XCloseDisplay"))) { dl_loge("Could not load: XCloseDisplay\n"); return (false); }
	if (!(dl_XConfigureWindow = dlsym(g_handle_xlib, "XConfigureWindow"))) { dl_loge("Could not load: XConfigureWindow\n"); return (false); }
	if (!(dl_XConnectionNumber = dlsym(g_handle_xlib, "XConnectionNumber"))) { dl_loge("Could not load: XConnectionNumber\n"); return (false); }
	if (!(dl_XConvertSelection = dlsym(g_handle_xlib, "XConvertSelection"))) { dl_loge("Could not load: XConvertSelection\n"); return (false); }
	if (!(dl_XCopyArea = dlsym(g_handle_xlib, "XCopyArea"))) { dl_loge("Could not load: XCopyArea\n"); return (false); }
	if (!(dl_XCopyGC = dlsym(g_handle_xlib, "XCopyGC"))) { dl_loge("Could not load: XCopyGC\n"); return (false); }
	if (!(dl_XCopyPlane = dlsym(g_handle_xlib, "XCopyPlane"))) { dl_loge("Could not load: XCopyPlane\n"); return (false); }
	if (!(dl_XDefaultDepth = dlsym(g_handle_xlib, "XDefaultDepth"))) { dl_loge("Could not load: XDefaultDepth\n"); return (false); }
	if (!(dl_XDefaultDepthOfScreen = dlsym(g_handle_xlib, "XDefaultDepthOfScreen"))) { dl_loge("Could not load: XDefaultDepthOfScreen\n"); return (false); }
	if (!(dl_XDefaultScreen = dlsym(g_handle_xlib, "XDefaultScreen"))) { dl_loge("Could not load: XDefaultScreen\n"); return (false); }
	if (!(dl_XDefineCursor = dlsym(g_handle_xlib, "XDefineCursor"))) { dl_loge("Could not load: XDefineCursor\n"); return (false); }
	if (!(dl_XDeleteProperty = dlsym(g_handle_xlib, "XDeleteProperty"))) { dl_loge("Could not load: XDeleteProperty\n"); return (false); }
	if (!(dl_XDestroyWindow = dlsym(g_handle_xlib, "XDestroyWindow"))) { dl_loge("Could not load: XDestroyWindow\n"); return (false); }
	if (!(dl_XDestroySubwindows = dlsym(g_handle_xlib, "XDestroySubwindows"))) { dl_loge("Could not load: XDestroySubwindows\n"); return (false); }
	if (!(dl_XDoesBackingStore = dlsym(g_handle_xlib, "XDoesBackingStore"))) { dl_loge("Could not load: XDoesBackingStore\n"); return (false); }
	if (!(dl_XDoesSaveUnders = dlsym(g_handle_xlib, "XDoesSaveUnders"))) { dl_loge("Could not load: XDoesSaveUnders\n"); return (false); }
	if (!(dl_XDisableAccessControl = dlsym(g_handle_xlib, "XDisableAccessControl"))) { dl_loge("Could not load: XDisableAccessControl\n"); return (false); }
	if (!(dl_XDisplayCells = dlsym(g_handle_xlib, "XDisplayCells"))) { dl_loge("Could not load: XDisplayCells\n"); return (false); }
	if (!(dl_XDisplayHeight = dlsym(g_handle_xlib, "XDisplayHeight"))) { dl_loge("Could not load: XDisplayHeight\n"); return (false); }
	if (!(dl_XDisplayHeightMM = dlsym(g_handle_xlib, "XDisplayHeightMM"))) { dl_loge("Could not load: XDisplayHeightMM\n"); return (false); }
	if (!(dl_XDisplayKeycodes = dlsym(g_handle_xlib, "XDisplayKeycodes"))) { dl_loge("Could not load: XDisplayKeycodes\n"); return (false); }
	if (!(dl_XDisplayPlanes = dlsym(g_handle_xlib, "XDisplayPlanes"))) { dl_loge("Could not load: XDisplayPlanes\n"); return (false); }
	if (!(dl_XDisplayWidth = dlsym(g_handle_xlib, "XDisplayWidth"))) { dl_loge("Could not load: XDisplayWidth\n"); return (false); }
	if (!(dl_XDisplayWidthMM = dlsym(g_handle_xlib, "XDisplayWidthMM"))) { dl_loge("Could not load: XDisplayWidthMM\n"); return (false); }
	if (!(dl_XDrawArc = dlsym(g_handle_xlib, "XDrawArc"))) { dl_loge("Could not load: XDrawArc\n"); return (false); }
	if (!(dl_XDrawArcs = dlsym(g_handle_xlib, "XDrawArcs"))) { dl_loge("Could not load: XDrawArcs\n"); return (false); }
	if (!(dl_XDrawImageString = dlsym(g_handle_xlib, "XDrawImageString"))) { dl_loge("Could not load: XDrawImageString\n"); return (false); }
	if (!(dl_XDrawImageString16 = dlsym(g_handle_xlib, "XDrawImageString16"))) { dl_loge("Could not load: XDrawImageString16\n"); return (false); }
	if (!(dl_XDrawLine = dlsym(g_handle_xlib, "XDrawLine"))) { dl_loge("Could not load: XDrawLine\n"); return (false); }
	if (!(dl_XDrawLines = dlsym(g_handle_xlib, "XDrawLines"))) { dl_loge("Could not load: XDrawLines\n"); return (false); }
	if (!(dl_XDrawPoint = dlsym(g_handle_xlib, "XDrawPoint"))) { dl_loge("Could not load: XDrawPoint\n"); return (false); }
	if (!(dl_XDrawPoints = dlsym(g_handle_xlib, "XDrawPoints"))) { dl_loge("Could not load: XDrawPoints\n"); return (false); }
	if (!(dl_XDrawRectangle = dlsym(g_handle_xlib, "XDrawRectangle"))) { dl_loge("Could not load: XDrawRectangle\n"); return (false); }
	if (!(dl_XDrawRectangles = dlsym(g_handle_xlib, "XDrawRectangles"))) { dl_loge("Could not load: XDrawRectangles\n"); return (false); }
	if (!(dl_XDrawSegments = dlsym(g_handle_xlib, "XDrawSegments"))) { dl_loge("Could not load: XDrawSegments\n"); return (false); }
	if (!(dl_XDrawString = dlsym(g_handle_xlib, "XDrawString"))) { dl_loge("Could not load: XDrawString\n"); return (false); }
	if (!(dl_XDrawString16 = dlsym(g_handle_xlib, "XDrawString16"))) { dl_loge("Could not load: XDrawString16\n"); return (false); }
	if (!(dl_XDrawText = dlsym(g_handle_xlib, "XDrawText"))) { dl_loge("Could not load: XDrawText\n"); return (false); }
	if (!(dl_XDrawText16 = dlsym(g_handle_xlib, "XDrawText16"))) { dl_loge("Could not load: XDrawText16\n"); return (false); }
	if (!(dl_XEnableAccessControl = dlsym(g_handle_xlib, "XEnableAccessControl"))) { dl_loge("Could not load: XEnableAccessControl\n"); return (false); }
	if (!(dl_XEventsQueued = dlsym(g_handle_xlib, "XEventsQueued"))) { dl_loge("Could not load: XEventsQueued\n"); return (false); }
	if (!(dl_XFetchName = dlsym(g_handle_xlib, "XFetchName"))) { dl_loge("Could not load: XFetchName\n"); return (false); }
	if (!(dl_XFillArc = dlsym(g_handle_xlib, "XFillArc"))) { dl_loge("Could not load: XFillArc\n"); return (false); }
	if (!(dl_XFillArcs = dlsym(g_handle_xlib, "XFillArcs"))) { dl_loge("Could not load: XFillArcs\n"); return (false); }
	if (!(dl_XFillPolygon = dlsym(g_handle_xlib, "XFillPolygon"))) { dl_loge("Could not load: XFillPolygon\n"); return (false); }
	if (!(dl_XFillRectangle = dlsym(g_handle_xlib, "XFillRectangle"))) { dl_loge("Could not load: XFillRectangle\n"); return (false); }
	if (!(dl_XFillRectangles = dlsym(g_handle_xlib, "XFillRectangles"))) { dl_loge("Could not load: XFillRectangles\n"); return (false); }
	if (!(dl_XFlush = dlsym(g_handle_xlib, "XFlush"))) { dl_loge("Could not load: XFlush\n"); return (false); }
	if (!(dl_XForceScreenSaver = dlsym(g_handle_xlib, "XForceScreenSaver"))) { dl_loge("Could not load: XForceScreenSaver\n"); return (false); }
	if (!(dl_XFree = dlsym(g_handle_xlib, "XFree"))) { dl_loge("Could not load: XFree\n"); return (false); }
	if (!(dl_XFreeColormap = dlsym(g_handle_xlib, "XFreeColormap"))) { dl_loge("Could not load: XFreeColormap\n"); return (false); }
	if (!(dl_XFreeColors = dlsym(g_handle_xlib, "XFreeColors"))) { dl_loge("Could not load: XFreeColors\n"); return (false); }
	if (!(dl_XFreeCursor = dlsym(g_handle_xlib, "XFreeCursor"))) { dl_loge("Could not load: XFreeCursor\n"); return (false); }
	if (!(dl_XFreeExtensionList = dlsym(g_handle_xlib, "XFreeExtensionList"))) { dl_loge("Could not load: XFreeExtensionList\n"); return (false); }
	if (!(dl_XFreeFont = dlsym(g_handle_xlib, "XFreeFont"))) { dl_loge("Could not load: XFreeFont\n"); return (false); }
	if (!(dl_XFreeFontInfo = dlsym(g_handle_xlib, "XFreeFontInfo"))) { dl_loge("Could not load: XFreeFontInfo\n"); return (false); }
	if (!(dl_XFreeFontNames = dlsym(g_handle_xlib, "XFreeFontNames"))) { dl_loge("Could not load: XFreeFontNames\n"); return (false); }
	if (!(dl_XFreeFontPath = dlsym(g_handle_xlib, "XFreeFontPath"))) { dl_loge("Could not load: XFreeFontPath\n"); return (false); }
	if (!(dl_XFreeGC = dlsym(g_handle_xlib, "XFreeGC"))) { dl_loge("Could not load: XFreeGC\n"); return (false); }
	if (!(dl_XFreeModifiermap = dlsym(g_handle_xlib, "XFreeModifiermap"))) { dl_loge("Could not load: XFreeModifiermap\n"); return (false); }
	if (!(dl_XFreePixmap = dlsym(g_handle_xlib, "XFreePixmap"))) { dl_loge("Could not load: XFreePixmap\n"); return (false); }
	if (!(dl_XGeometry = dlsym(g_handle_xlib, "XGeometry"))) { dl_loge("Could not load: XGeometry\n"); return (false); }
	if (!(dl_XGetErrorDatabaseText = dlsym(g_handle_xlib, "XGetErrorDatabaseText"))) { dl_loge("Could not load: XGetErrorDatabaseText\n"); return (false); }
	if (!(dl_XGetErrorText = dlsym(g_handle_xlib, "XGetErrorText"))) { dl_loge("Could not load: XGetErrorText\n"); return (false); }
	if (!(dl_XGetFontProperty = dlsym(g_handle_xlib, "XGetFontProperty"))) { dl_loge("Could not load: XGetFontProperty\n"); return (false); }
	if (!(dl_XGetGCValues = dlsym(g_handle_xlib, "XGetGCValues"))) { dl_loge("Could not load: XGetGCValues\n"); return (false); }
	if (!(dl_XGetGeometry = dlsym(g_handle_xlib, "XGetGeometry"))) { dl_loge("Could not load: XGetGeometry\n"); return (false); }
	if (!(dl_XGetIconName = dlsym(g_handle_xlib, "XGetIconName"))) { dl_loge("Could not load: XGetIconName\n"); return (false); }
	if (!(dl_XGetInputFocus = dlsym(g_handle_xlib, "XGetInputFocus"))) { dl_loge("Could not load: XGetInputFocus\n"); return (false); }
	if (!(dl_XGetKeyboardControl = dlsym(g_handle_xlib, "XGetKeyboardControl"))) { dl_loge("Could not load: XGetKeyboardControl\n"); return (false); }
	if (!(dl_XGetPointerControl = dlsym(g_handle_xlib, "XGetPointerControl"))) { dl_loge("Could not load: XGetPointerControl\n"); return (false); }
	if (!(dl_XGetPointerMapping = dlsym(g_handle_xlib, "XGetPointerMapping"))) { dl_loge("Could not load: XGetPointerMapping\n"); return (false); }
	if (!(dl_XGetScreenSaver = dlsym(g_handle_xlib, "XGetScreenSaver"))) { dl_loge("Could not load: XGetScreenSaver\n"); return (false); }
	if (!(dl_XGetTransientForHint = dlsym(g_handle_xlib, "XGetTransientForHint"))) { dl_loge("Could not load: XGetTransientForHint\n"); return (false); }
	if (!(dl_XGetWindowProperty = dlsym(g_handle_xlib, "XGetWindowProperty"))) { dl_loge("Could not load: XGetWindowProperty\n"); return (false); }
	if (!(dl_XGetWindowAttributes = dlsym(g_handle_xlib, "XGetWindowAttributes"))) { dl_loge("Could not load: XGetWindowAttributes\n"); return (false); }
	if (!(dl_XGrabButton = dlsym(g_handle_xlib, "XGrabButton"))) { dl_loge("Could not load: XGrabButton\n"); return (false); }
	if (!(dl_XGrabKey = dlsym(g_handle_xlib, "XGrabKey"))) { dl_loge("Could not load: XGrabKey\n"); return (false); }
	if (!(dl_XGrabKeyboard = dlsym(g_handle_xlib, "XGrabKeyboard"))) { dl_loge("Could not load: XGrabKeyboard\n"); return (false); }
	if (!(dl_XGrabPointer = dlsym(g_handle_xlib, "XGrabPointer"))) { dl_loge("Could not load: XGrabPointer\n"); return (false); }
	if (!(dl_XGrabServer = dlsym(g_handle_xlib, "XGrabServer"))) { dl_loge("Could not load: XGrabServer\n"); return (false); }
	if (!(dl_XHeightMMOfScreen = dlsym(g_handle_xlib, "XHeightMMOfScreen"))) { dl_loge("Could not load: XHeightMMOfScreen\n"); return (false); }
	if (!(dl_XHeightOfScreen = dlsym(g_handle_xlib, "XHeightOfScreen"))) { dl_loge("Could not load: XHeightOfScreen\n"); return (false); }
	if (!(dl_XIfEvent = dlsym(g_handle_xlib, "XIfEvent"))) { dl_loge("Could not load: XIfEvent\n"); return (false); }
	if (!(dl_XImageByteOrder = dlsym(g_handle_xlib, "XImageByteOrder"))) { dl_loge("Could not load: XImageByteOrder\n"); return (false); }
	if (!(dl_XInstallColormap = dlsym(g_handle_xlib, "XInstallColormap"))) { dl_loge("Could not load: XInstallColormap\n"); return (false); }
	if (!(dl_XKeysymToKeycode = dlsym(g_handle_xlib, "XKeysymToKeycode"))) { dl_loge("Could not load: XKeysymToKeycode\n"); return (false); }
	if (!(dl_XKillClient = dlsym(g_handle_xlib, "XKillClient"))) { dl_loge("Could not load: XKillClient\n"); return (false); }
	if (!(dl_XLookupColor = dlsym(g_handle_xlib, "XLookupColor"))) { dl_loge("Could not load: XLookupColor\n"); return (false); }
	if (!(dl_XLowerWindow = dlsym(g_handle_xlib, "XLowerWindow"))) { dl_loge("Could not load: XLowerWindow\n"); return (false); }
	if (!(dl_XMapRaised = dlsym(g_handle_xlib, "XMapRaised"))) { dl_loge("Could not load: XMapRaised\n"); return (false); }
	if (!(dl_XMapSubwindows = dlsym(g_handle_xlib, "XMapSubwindows"))) { dl_loge("Could not load: XMapSubwindows\n"); return (false); }
	if (!(dl_XMapWindow = dlsym(g_handle_xlib, "XMapWindow"))) { dl_loge("Could not load: XMapWindow\n"); return (false); }
	if (!(dl_XMaskEvent = dlsym(g_handle_xlib, "XMaskEvent"))) { dl_loge("Could not load: XMaskEvent\n"); return (false); }
	if (!(dl_XMaxCmapsOfScreen = dlsym(g_handle_xlib, "XMaxCmapsOfScreen"))) { dl_loge("Could not load: XMaxCmapsOfScreen\n"); return (false); }
	if (!(dl_XMinCmapsOfScreen = dlsym(g_handle_xlib, "XMinCmapsOfScreen"))) { dl_loge("Could not load: XMinCmapsOfScreen\n"); return (false); }
	if (!(dl_XMoveResizeWindow = dlsym(g_handle_xlib, "XMoveResizeWindow"))) { dl_loge("Could not load: XMoveResizeWindow\n"); return (false); }
	if (!(dl_XMoveWindow = dlsym(g_handle_xlib, "XMoveWindow"))) { dl_loge("Could not load: XMoveWindow\n"); return (false); }
	if (!(dl_XNextEvent = dlsym(g_handle_xlib, "XNextEvent"))) { dl_loge("Could not load: XNextEvent\n"); return (false); }
	if (!(dl_XNoOp = dlsym(g_handle_xlib, "XNoOp"))) { dl_loge("Could not load: XNoOp\n"); return (false); }
	if (!(dl_XParseColor = dlsym(g_handle_xlib, "XParseColor"))) { dl_loge("Could not load: XParseColor\n"); return (false); }
	if (!(dl_XParseGeometry = dlsym(g_handle_xlib, "XParseGeometry"))) { dl_loge("Could not load: XParseGeometry\n"); return (false); }
	if (!(dl_XPeekEvent = dlsym(g_handle_xlib, "XPeekEvent"))) { dl_loge("Could not load: XPeekEvent\n"); return (false); }
	if (!(dl_XPeekIfEvent = dlsym(g_handle_xlib, "XPeekIfEvent"))) { dl_loge("Could not load: XPeekIfEvent\n"); return (false); }
	if (!(dl_XPending = dlsym(g_handle_xlib, "XPending"))) { dl_loge("Could not load: XPending\n"); return (false); }
	if (!(dl_XPlanesOfScreen = dlsym(g_handle_xlib, "XPlanesOfScreen"))) { dl_loge("Could not load: XPlanesOfScreen\n"); return (false); }
	if (!(dl_XProtocolRevision = dlsym(g_handle_xlib, "XProtocolRevision"))) { dl_loge("Could not load: XProtocolRevision\n"); return (false); }
	if (!(dl_XProtocolVersion = dlsym(g_handle_xlib, "XProtocolVersion"))) { dl_loge("Could not load: XProtocolVersion\n"); return (false); }
	if (!(dl_XPutBackEvent = dlsym(g_handle_xlib, "XPutBackEvent"))) { dl_loge("Could not load: XPutBackEvent\n"); return (false); }
	if (!(dl_XPutImage = dlsym(g_handle_xlib, "XPutImage"))) { dl_loge("Could not load: XPutImage\n"); return (false); }
	if (!(dl_XQLength = dlsym(g_handle_xlib, "XQLength"))) { dl_loge("Could not load: XQLength\n"); return (false); }
	if (!(dl_XQueryBestCursor = dlsym(g_handle_xlib, "XQueryBestCursor"))) { dl_loge("Could not load: XQueryBestCursor\n"); return (false); }
	if (!(dl_XQueryBestSize = dlsym(g_handle_xlib, "XQueryBestSize"))) { dl_loge("Could not load: XQueryBestSize\n"); return (false); }
	if (!(dl_XQueryBestStipple = dlsym(g_handle_xlib, "XQueryBestStipple"))) { dl_loge("Could not load: XQueryBestStipple\n"); return (false); }
	if (!(dl_XQueryBestTile = dlsym(g_handle_xlib, "XQueryBestTile"))) { dl_loge("Could not load: XQueryBestTile\n"); return (false); }
	if (!(dl_XQueryColor = dlsym(g_handle_xlib, "XQueryColor"))) { dl_loge("Could not load: XQueryColor\n"); return (false); }
	if (!(dl_XQueryColors = dlsym(g_handle_xlib, "XQueryColors"))) { dl_loge("Could not load: XQueryColors\n"); return (false); }
	if (!(dl_XQueryExtension = dlsym(g_handle_xlib, "XQueryExtension"))) { dl_loge("Could not load: XQueryExtension\n"); return (false); }
	if (!(dl_XQueryKeymap = dlsym(g_handle_xlib, "XQueryKeymap"))) { dl_loge("Could not load: XQueryKeymap\n"); return (false); }
	if (!(dl_XQueryPointer = dlsym(g_handle_xlib, "XQueryPointer"))) { dl_loge("Could not load: XQueryPointer\n"); return (false); }
	if (!(dl_XQueryTextExtents = dlsym(g_handle_xlib, "XQueryTextExtents"))) { dl_loge("Could not load: XQueryTextExtents\n"); return (false); }
	if (!(dl_XQueryTextExtents16 = dlsym(g_handle_xlib, "XQueryTextExtents16"))) { dl_loge("Could not load: XQueryTextExtents16\n"); return (false); }
	if (!(dl_XQueryTree = dlsym(g_handle_xlib, "XQueryTree"))) { dl_loge("Could not load: XQueryTree\n"); return (false); }
	if (!(dl_XRaiseWindow = dlsym(g_handle_xlib, "XRaiseWindow"))) { dl_loge("Could not load: XRaiseWindow\n"); return (false); }
	if (!(dl_XReadBitmapFile = dlsym(g_handle_xlib, "XReadBitmapFile"))) { dl_loge("Could not load: XReadBitmapFile\n"); return (false); }
	if (!(dl_XReadBitmapFileData = dlsym(g_handle_xlib, "XReadBitmapFileData"))) { dl_loge("Could not load: XReadBitmapFileData\n"); return (false); }
	if (!(dl_XRebindKeysym = dlsym(g_handle_xlib, "XRebindKeysym"))) { dl_loge("Could not load: XRebindKeysym\n"); return (false); }
	if (!(dl_XRecolorCursor = dlsym(g_handle_xlib, "XRecolorCursor"))) { dl_loge("Could not load: XRecolorCursor\n"); return (false); }
	if (!(dl_XRefreshKeyboardMapping = dlsym(g_handle_xlib, "XRefreshKeyboardMapping"))) { dl_loge("Could not load: XRefreshKeyboardMapping\n"); return (false); }
	if (!(dl_XRemoveFromSaveSet = dlsym(g_handle_xlib, "XRemoveFromSaveSet"))) { dl_loge("Could not load: XRemoveFromSaveSet\n"); return (false); }
	if (!(dl_XRemoveHost = dlsym(g_handle_xlib, "XRemoveHost"))) { dl_loge("Could not load: XRemoveHost\n"); return (false); }
	if (!(dl_XRemoveHosts = dlsym(g_handle_xlib, "XRemoveHosts"))) { dl_loge("Could not load: XRemoveHosts\n"); return (false); }
	if (!(dl_XReparentWindow = dlsym(g_handle_xlib, "XReparentWindow"))) { dl_loge("Could not load: XReparentWindow\n"); return (false); }
	if (!(dl_XResetScreenSaver = dlsym(g_handle_xlib, "XResetScreenSaver"))) { dl_loge("Could not load: XResetScreenSaver\n"); return (false); }
	if (!(dl_XResizeWindow = dlsym(g_handle_xlib, "XResizeWindow"))) { dl_loge("Could not load: XResizeWindow\n"); return (false); }
	if (!(dl_XRestackWindows = dlsym(g_handle_xlib, "XRestackWindows"))) { dl_loge("Could not load: XRestackWindows\n"); return (false); }
	if (!(dl_XRotateBuffers = dlsym(g_handle_xlib, "XRotateBuffers"))) { dl_loge("Could not load: XRotateBuffers\n"); return (false); }
	if (!(dl_XRotateWindowProperties = dlsym(g_handle_xlib, "XRotateWindowProperties"))) { dl_loge("Could not load: XRotateWindowProperties\n"); return (false); }
	if (!(dl_XScreenCount = dlsym(g_handle_xlib, "XScreenCount"))) { dl_loge("Could not load: XScreenCount\n"); return (false); }
	if (!(dl_XSelectInput = dlsym(g_handle_xlib, "XSelectInput"))) { dl_loge("Could not load: XSelectInput\n"); return (false); }
	if (!(dl_XSendEvent = dlsym(g_handle_xlib, "XSendEvent"))) { dl_loge("Could not load: XSendEvent\n"); return (false); }
	if (!(dl_XSetAccessControl = dlsym(g_handle_xlib, "XSetAccessControl"))) { dl_loge("Could not load: XSetAccessControl\n"); return (false); }
	if (!(dl_XSetArcMode = dlsym(g_handle_xlib, "XSetArcMode"))) { dl_loge("Could not load: XSetArcMode\n"); return (false); }
	if (!(dl_XSetBackground = dlsym(g_handle_xlib, "XSetBackground"))) { dl_loge("Could not load: XSetBackground\n"); return (false); }
	if (!(dl_XSetClipMask = dlsym(g_handle_xlib, "XSetClipMask"))) { dl_loge("Could not load: XSetClipMask\n"); return (false); }
	if (!(dl_XSetClipOrigin = dlsym(g_handle_xlib, "XSetClipOrigin"))) { dl_loge("Could not load: XSetClipOrigin\n"); return (false); }
	if (!(dl_XSetClipRectangles = dlsym(g_handle_xlib, "XSetClipRectangles"))) { dl_loge("Could not load: XSetClipRectangles\n"); return (false); }
	if (!(dl_XSetCloseDownMode = dlsym(g_handle_xlib, "XSetCloseDownMode"))) { dl_loge("Could not load: XSetCloseDownMode\n"); return (false); }
	if (!(dl_XSetCommand = dlsym(g_handle_xlib, "XSetCommand"))) { dl_loge("Could not load: XSetCommand\n"); return (false); }
	if (!(dl_XSetDashes = dlsym(g_handle_xlib, "XSetDashes"))) { dl_loge("Could not load: XSetDashes\n"); return (false); }
	if (!(dl_XSetFillRule = dlsym(g_handle_xlib, "XSetFillRule"))) { dl_loge("Could not load: XSetFillRule\n"); return (false); }
	if (!(dl_XSetFillStyle = dlsym(g_handle_xlib, "XSetFillStyle"))) { dl_loge("Could not load: XSetFillStyle\n"); return (false); }
	if (!(dl_XSetFont = dlsym(g_handle_xlib, "XSetFont"))) { dl_loge("Could not load: XSetFont\n"); return (false); }
	if (!(dl_XSetFontPath = dlsym(g_handle_xlib, "XSetFontPath"))) { dl_loge("Could not load: XSetFontPath\n"); return (false); }
	if (!(dl_XSetForeground = dlsym(g_handle_xlib, "XSetForeground"))) { dl_loge("Could not load: XSetForeground\n"); return (false); }
	if (!(dl_XSetFunction = dlsym(g_handle_xlib, "XSetFunction"))) { dl_loge("Could not load: XSetFunction\n"); return (false); }
	if (!(dl_XSetGraphicsExposures = dlsym(g_handle_xlib, "XSetGraphicsExposures"))) { dl_loge("Could not load: XSetGraphicsExposures\n"); return (false); }
	if (!(dl_XSetIconName = dlsym(g_handle_xlib, "XSetIconName"))) { dl_loge("Could not load: XSetIconName\n"); return (false); }
	if (!(dl_XSetInputFocus = dlsym(g_handle_xlib, "XSetInputFocus"))) { dl_loge("Could not load: XSetInputFocus\n"); return (false); }
	if (!(dl_XSetLineAttributes = dlsym(g_handle_xlib, "XSetLineAttributes"))) { dl_loge("Could not load: XSetLineAttributes\n"); return (false); }
	if (!(dl_XSetModifierMapping = dlsym(g_handle_xlib, "XSetModifierMapping"))) { dl_loge("Could not load: XSetModifierMapping\n"); return (false); }
	if (!(dl_XSetPlaneMask = dlsym(g_handle_xlib, "XSetPlaneMask"))) { dl_loge("Could not load: XSetPlaneMask\n"); return (false); }
	if (!(dl_XSetPointerMapping = dlsym(g_handle_xlib, "XSetPointerMapping"))) { dl_loge("Could not load: XSetPointerMapping\n"); return (false); }
	if (!(dl_XSetScreenSaver = dlsym(g_handle_xlib, "XSetScreenSaver"))) { dl_loge("Could not load: XSetScreenSaver\n"); return (false); }
	if (!(dl_XSetSelectionOwner = dlsym(g_handle_xlib, "XSetSelectionOwner"))) { dl_loge("Could not load: XSetSelectionOwner\n"); return (false); }
	if (!(dl_XSetState = dlsym(g_handle_xlib, "XSetState"))) { dl_loge("Could not load: XSetState\n"); return (false); }
	if (!(dl_XSetStipple = dlsym(g_handle_xlib, "XSetStipple"))) { dl_loge("Could not load: XSetStipple\n"); return (false); }
	if (!(dl_XSetSubwindowMode = dlsym(g_handle_xlib, "XSetSubwindowMode"))) { dl_loge("Could not load: XSetSubwindowMode\n"); return (false); }
	if (!(dl_XSetTSOrigin = dlsym(g_handle_xlib, "XSetTSOrigin"))) { dl_loge("Could not load: XSetTSOrigin\n"); return (false); }
	if (!(dl_XSetTile = dlsym(g_handle_xlib, "XSetTile"))) { dl_loge("Could not load: XSetTile\n"); return (false); }
	if (!(dl_XSetWindowBackground = dlsym(g_handle_xlib, "XSetWindowBackground"))) { dl_loge("Could not load: XSetWindowBackground\n"); return (false); }
	if (!(dl_XSetWindowBackgroundPixmap = dlsym(g_handle_xlib, "XSetWindowBackgroundPixmap"))) { dl_loge("Could not load: XSetWindowBackgroundPixmap\n"); return (false); }
	if (!(dl_XSetWindowBorder = dlsym(g_handle_xlib, "XSetWindowBorder"))) { dl_loge("Could not load: XSetWindowBorder\n"); return (false); }
	if (!(dl_XSetWindowBorderPixmap = dlsym(g_handle_xlib, "XSetWindowBorderPixmap"))) { dl_loge("Could not load: XSetWindowBorderPixmap\n"); return (false); }
	if (!(dl_XSetWindowBorderWidth = dlsym(g_handle_xlib, "XSetWindowBorderWidth"))) { dl_loge("Could not load: XSetWindowBorderWidth\n"); return (false); }
	if (!(dl_XSetWindowColormap = dlsym(g_handle_xlib, "XSetWindowColormap"))) { dl_loge("Could not load: XSetWindowColormap\n"); return (false); }
	if (!(dl_XStoreBuffer = dlsym(g_handle_xlib, "XStoreBuffer"))) { dl_loge("Could not load: XStoreBuffer\n"); return (false); }
	if (!(dl_XStoreBytes = dlsym(g_handle_xlib, "XStoreBytes"))) { dl_loge("Could not load: XStoreBytes\n"); return (false); }
	if (!(dl_XStoreColor = dlsym(g_handle_xlib, "XStoreColor"))) { dl_loge("Could not load: XStoreColor\n"); return (false); }
	if (!(dl_XStoreColors = dlsym(g_handle_xlib, "XStoreColors"))) { dl_loge("Could not load: XStoreColors\n"); return (false); }
	if (!(dl_XStoreName = dlsym(g_handle_xlib, "XStoreName"))) { dl_loge("Could not load: XStoreName\n"); return (false); }
	if (!(dl_XStoreNamedColor = dlsym(g_handle_xlib, "XStoreNamedColor"))) { dl_loge("Could not load: XStoreNamedColor\n"); return (false); }
	if (!(dl_XSync = dlsym(g_handle_xlib, "XSync"))) { dl_loge("Could not load: XSync\n"); return (false); }
	if (!(dl_XTextExtents = dlsym(g_handle_xlib, "XTextExtents"))) { dl_loge("Could not load: XTextExtents\n"); return (false); }
	if (!(dl_XTextExtents16 = dlsym(g_handle_xlib, "XTextExtents16"))) { dl_loge("Could not load: XTextExtents16\n"); return (false); }
	if (!(dl_XTextWidth = dlsym(g_handle_xlib, "XTextWidth"))) { dl_loge("Could not load: XTextWidth\n"); return (false); }
	if (!(dl_XTextWidth16 = dlsym(g_handle_xlib, "XTextWidth16"))) { dl_loge("Could not load: XTextWidth16\n"); return (false); }
	if (!(dl_XTranslateCoordinates = dlsym(g_handle_xlib, "XTranslateCoordinates"))) { dl_loge("Could not load: XTranslateCoordinates\n"); return (false); }
	if (!(dl_XUndefineCursor = dlsym(g_handle_xlib, "XUndefineCursor"))) { dl_loge("Could not load: XUndefineCursor\n"); return (false); }
	if (!(dl_XUngrabButton = dlsym(g_handle_xlib, "XUngrabButton"))) { dl_loge("Could not load: XUngrabButton\n"); return (false); }
	if (!(dl_XUngrabKey = dlsym(g_handle_xlib, "XUngrabKey"))) { dl_loge("Could not load: XUngrabKey\n"); return (false); }
	if (!(dl_XUngrabKeyboard = dlsym(g_handle_xlib, "XUngrabKeyboard"))) { dl_loge("Could not load: XUngrabKeyboard\n"); return (false); }
	if (!(dl_XUngrabPointer = dlsym(g_handle_xlib, "XUngrabPointer"))) { dl_loge("Could not load: XUngrabPointer\n"); return (false); }
	if (!(dl_XUngrabServer = dlsym(g_handle_xlib, "XUngrabServer"))) { dl_loge("Could not load: XUngrabServer\n"); return (false); }
	if (!(dl_XUninstallColormap = dlsym(g_handle_xlib, "XUninstallColormap"))) { dl_loge("Could not load: XUninstallColormap\n"); return (false); }
	if (!(dl_XUnloadFont = dlsym(g_handle_xlib, "XUnloadFont"))) { dl_loge("Could not load: XUnloadFont\n"); return (false); }
	if (!(dl_XUnmapSubwindows = dlsym(g_handle_xlib, "XUnmapSubwindows"))) { dl_loge("Could not load: XUnmapSubwindows\n"); return (false); }
	if (!(dl_XUnmapWindow = dlsym(g_handle_xlib, "XUnmapWindow"))) { dl_loge("Could not load: XUnmapWindow\n"); return (false); }
	if (!(dl_XVendorRelease = dlsym(g_handle_xlib, "XVendorRelease"))) { dl_loge("Could not load: XVendorRelease\n"); return (false); }
	if (!(dl_XWarpPointer = dlsym(g_handle_xlib, "XWarpPointer"))) { dl_loge("Could not load: XWarpPointer\n"); return (false); }
	if (!(dl_XWidthMMOfScreen = dlsym(g_handle_xlib, "XWidthMMOfScreen"))) { dl_loge("Could not load: XWidthMMOfScreen\n"); return (false); }
	if (!(dl_XWidthOfScreen = dlsym(g_handle_xlib, "XWidthOfScreen"))) { dl_loge("Could not load: XWidthOfScreen\n"); return (false); }
	if (!(dl_XWindowEvent = dlsym(g_handle_xlib, "XWindowEvent"))) { dl_loge("Could not load: XWindowEvent\n"); return (false); }
	if (!(dl_XWriteBitmapFile = dlsym(g_handle_xlib, "XWriteBitmapFile"))) { dl_loge("Could not load: XWriteBitmapFile\n"); return (false); }
	if (!(dl_XSupportsLocale = dlsym(g_handle_xlib, "XSupportsLocale"))) { dl_loge("Could not load: XSupportsLocale\n"); return (false); }
	if (!(dl_XSetLocaleModifiers = dlsym(g_handle_xlib, "XSetLocaleModifiers"))) { dl_loge("Could not load: XSetLocaleModifiers\n"); return (false); }
	if (!(dl_XOpenOM = dlsym(g_handle_xlib, "XOpenOM"))) { dl_loge("Could not load: XOpenOM\n"); return (false); }
	if (!(dl_XCloseOM = dlsym(g_handle_xlib, "XCloseOM"))) { dl_loge("Could not load: XCloseOM\n"); return (false); }
	if (!(dl_XSetOMValues = dlsym(g_handle_xlib, "XSetOMValues"))) { dl_loge("Could not load: XSetOMValues\n"); return (false); }
	if (!(dl_XGetOMValues = dlsym(g_handle_xlib, "XGetOMValues"))) { dl_loge("Could not load: XGetOMValues\n"); return (false); }
	if (!(dl_XDisplayOfOM = dlsym(g_handle_xlib, "XDisplayOfOM"))) { dl_loge("Could not load: XDisplayOfOM\n"); return (false); }
	if (!(dl_XLocaleOfOM = dlsym(g_handle_xlib, "XLocaleOfOM"))) { dl_loge("Could not load: XLocaleOfOM\n"); return (false); }
	if (!(dl_XCreateOC = dlsym(g_handle_xlib, "XCreateOC"))) { dl_loge("Could not load: XCreateOC\n"); return (false); }
	if (!(dl_XDestroyOC = dlsym(g_handle_xlib, "XDestroyOC"))) { dl_loge("Could not load: XDestroyOC\n"); return (false); }
	if (!(dl_XOMOfOC = dlsym(g_handle_xlib, "XOMOfOC"))) { dl_loge("Could not load: XOMOfOC\n"); return (false); }
	if (!(dl_XSetOCValues = dlsym(g_handle_xlib, "XSetOCValues"))) { dl_loge("Could not load: XSetOCValues\n"); return (false); }
	if (!(dl_XGetOCValues = dlsym(g_handle_xlib, "XGetOCValues"))) { dl_loge("Could not load: XGetOCValues\n"); return (false); }
	if (!(dl_XCreateFontSet = dlsym(g_handle_xlib, "XCreateFontSet"))) { dl_loge("Could not load: XCreateFontSet\n"); return (false); }
	if (!(dl_XFreeFontSet = dlsym(g_handle_xlib, "XFreeFontSet"))) { dl_loge("Could not load: XFreeFontSet\n"); return (false); }
	if (!(dl_XFontsOfFontSet = dlsym(g_handle_xlib, "XFontsOfFontSet"))) { dl_loge("Could not load: XFontsOfFontSet\n"); return (false); }
	if (!(dl_XBaseFontNameListOfFontSet = dlsym(g_handle_xlib, "XBaseFontNameListOfFontSet"))) { dl_loge("Could not load: XBaseFontNameListOfFontSet\n"); return (false); }
	if (!(dl_XLocaleOfFontSet = dlsym(g_handle_xlib, "XLocaleOfFontSet"))) { dl_loge("Could not load: XLocaleOfFontSet\n"); return (false); }
	if (!(dl_XContextDependentDrawing = dlsym(g_handle_xlib, "XContextDependentDrawing"))) { dl_loge("Could not load: XContextDependentDrawing\n"); return (false); }
	if (!(dl_XDirectionalDependentDrawing = dlsym(g_handle_xlib, "XDirectionalDependentDrawing"))) { dl_loge("Could not load: XDirectionalDependentDrawing\n"); return (false); }
	if (!(dl_XContextualDrawing = dlsym(g_handle_xlib, "XContextualDrawing"))) { dl_loge("Could not load: XContextualDrawing\n"); return (false); }
	if (!(dl_XExtentsOfFontSet = dlsym(g_handle_xlib, "XExtentsOfFontSet"))) { dl_loge("Could not load: XExtentsOfFontSet\n"); return (false); }
	if (!(dl_XmbTextEscapement = dlsym(g_handle_xlib, "XmbTextEscapement"))) { dl_loge("Could not load: XmbTextEscapement\n"); return (false); }
	if (!(dl_XwcTextEscapement = dlsym(g_handle_xlib, "XwcTextEscapement"))) { dl_loge("Could not load: XwcTextEscapement\n"); return (false); }
	if (!(dl_Xutf8TextEscapement = dlsym(g_handle_xlib, "Xutf8TextEscapement"))) { dl_loge("Could not load: Xutf8TextEscapement\n"); return (false); }
	if (!(dl_XmbTextExtents = dlsym(g_handle_xlib, "XmbTextExtents"))) { dl_loge("Could not load: XmbTextExtents\n"); return (false); }
	if (!(dl_XwcTextExtents = dlsym(g_handle_xlib, "XwcTextExtents"))) { dl_loge("Could not load: XwcTextExtents\n"); return (false); }
	if (!(dl_Xutf8TextExtents = dlsym(g_handle_xlib, "Xutf8TextExtents"))) { dl_loge("Could not load: Xutf8TextExtents\n"); return (false); }
	if (!(dl_XmbTextPerCharExtents = dlsym(g_handle_xlib, "XmbTextPerCharExtents"))) { dl_loge("Could not load: XmbTextPerCharExtents\n"); return (false); }
	if (!(dl_XwcTextPerCharExtents = dlsym(g_handle_xlib, "XwcTextPerCharExtents"))) { dl_loge("Could not load: XwcTextPerCharExtents\n"); return (false); }
	if (!(dl_Xutf8TextPerCharExtents = dlsym(g_handle_xlib, "Xutf8TextPerCharExtents"))) { dl_loge("Could not load: Xutf8TextPerCharExtents\n"); return (false); }
	if (!(dl_XmbDrawText = dlsym(g_handle_xlib, "XmbDrawText"))) { dl_loge("Could not load: XmbDrawText\n"); return (false); }
	if (!(dl_XwcDrawText = dlsym(g_handle_xlib, "XwcDrawText"))) { dl_loge("Could not load: XwcDrawText\n"); return (false); }
	if (!(dl_Xutf8DrawText = dlsym(g_handle_xlib, "Xutf8DrawText"))) { dl_loge("Could not load: Xutf8DrawText\n"); return (false); }
	if (!(dl_XmbDrawString = dlsym(g_handle_xlib, "XmbDrawString"))) { dl_loge("Could not load: XmbDrawString\n"); return (false); }
	if (!(dl_XwcDrawString = dlsym(g_handle_xlib, "XwcDrawString"))) { dl_loge("Could not load: XwcDrawString\n"); return (false); }
	if (!(dl_Xutf8DrawString = dlsym(g_handle_xlib, "Xutf8DrawString"))) { dl_loge("Could not load: Xutf8DrawString\n"); return (false); }
	if (!(dl_XmbDrawImageString = dlsym(g_handle_xlib, "XmbDrawImageString"))) { dl_loge("Could not load: XmbDrawImageString\n"); return (false); }
	if (!(dl_XwcDrawImageString = dlsym(g_handle_xlib, "XwcDrawImageString"))) { dl_loge("Could not load: XwcDrawImageString\n"); return (false); }
	if (!(dl_Xutf8DrawImageString = dlsym(g_handle_xlib, "Xutf8DrawImageString"))) { dl_loge("Could not load: Xutf8DrawImageString\n"); return (false); }
	if (!(dl_XOpenIM = dlsym(g_handle_xlib, "XOpenIM"))) { dl_loge("Could not load: XOpenIM\n"); return (false); }
	if (!(dl_XCloseIM = dlsym(g_handle_xlib, "XCloseIM"))) { dl_loge("Could not load: XCloseIM\n"); return (false); }
	if (!(dl_XGetIMValues = dlsym(g_handle_xlib, "XGetIMValues"))) { dl_loge("Could not load: XGetIMValues\n"); return (false); }
	if (!(dl_XSetIMValues = dlsym(g_handle_xlib, "XSetIMValues"))) { dl_loge("Could not load: XSetIMValues\n"); return (false); }
	if (!(dl_XDisplayOfIM = dlsym(g_handle_xlib, "XDisplayOfIM"))) { dl_loge("Could not load: XDisplayOfIM\n"); return (false); }
	if (!(dl_XLocaleOfIM = dlsym(g_handle_xlib, "XLocaleOfIM"))) { dl_loge("Could not load: XLocaleOfIM\n"); return (false); }
	if (!(dl_XCreateIC = dlsym(g_handle_xlib, "XCreateIC"))) { dl_loge("Could not load: XCreateIC\n"); return (false); }
	if (!(dl_XDestroyIC = dlsym(g_handle_xlib, "XDestroyIC"))) { dl_loge("Could not load: XDestroyIC\n"); return (false); }
	if (!(dl_XSetICFocus = dlsym(g_handle_xlib, "XSetICFocus"))) { dl_loge("Could not load: XSetICFocus\n"); return (false); }
	if (!(dl_XUnsetICFocus = dlsym(g_handle_xlib, "XUnsetICFocus"))) { dl_loge("Could not load: XUnsetICFocus\n"); return (false); }
	if (!(dl_XwcResetIC = dlsym(g_handle_xlib, "XwcResetIC"))) { dl_loge("Could not load: XwcResetIC\n"); return (false); }
	if (!(dl_XmbResetIC = dlsym(g_handle_xlib, "XmbResetIC"))) { dl_loge("Could not load: XmbResetIC\n"); return (false); }
	if (!(dl_Xutf8ResetIC = dlsym(g_handle_xlib, "Xutf8ResetIC"))) { dl_loge("Could not load: Xutf8ResetIC\n"); return (false); }
	if (!(dl_XSetICValues = dlsym(g_handle_xlib, "XSetICValues"))) { dl_loge("Could not load: XSetICValues\n"); return (false); }
	if (!(dl_XGetICValues = dlsym(g_handle_xlib, "XGetICValues"))) { dl_loge("Could not load: XGetICValues\n"); return (false); }
	if (!(dl_XIMOfIC = dlsym(g_handle_xlib, "XIMOfIC"))) { dl_loge("Could not load: XIMOfIC\n"); return (false); }
	if (!(dl_XFilterEvent = dlsym(g_handle_xlib, "XFilterEvent"))) { dl_loge("Could not load: XFilterEvent\n"); return (false); }
	if (!(dl_XmbLookupString = dlsym(g_handle_xlib, "XmbLookupString"))) { dl_loge("Could not load: XmbLookupString\n"); return (false); }
	if (!(dl_XwcLookupString = dlsym(g_handle_xlib, "XwcLookupString"))) { dl_loge("Could not load: XwcLookupString\n"); return (false); }
	if (!(dl_Xutf8LookupString = dlsym(g_handle_xlib, "Xutf8LookupString"))) { dl_loge("Could not load: Xutf8LookupString\n"); return (false); }
	if (!(dl_XVaCreateNestedList = dlsym(g_handle_xlib, "XVaCreateNestedList"))) { dl_loge("Could not load: XVaCreateNestedList\n"); return (false); }
	if (!(dl_XRegisterIMInstantiateCallback = dlsym(g_handle_xlib, "XRegisterIMInstantiateCallback"))) { dl_loge("Could not load: XRegisterIMInstantiateCallback\n"); return (false); }
	if (!(dl_XUnregisterIMInstantiateCallback = dlsym(g_handle_xlib, "XUnregisterIMInstantiateCallback"))) { dl_loge("Could not load: XUnregisterIMInstantiateCallback\n"); return (false); }
	if (!(dl_XInternalConnectionNumbers = dlsym(g_handle_xlib, "XInternalConnectionNumbers"))) { dl_loge("Could not load: XInternalConnectionNumbers\n"); return (false); }
	if (!(dl_XProcessInternalConnection = dlsym(g_handle_xlib, "XProcessInternalConnection"))) { dl_loge("Could not load: XProcessInternalConnection\n"); return (false); }
	if (!(dl_XAddConnectionWatch = dlsym(g_handle_xlib, "XAddConnectionWatch"))) { dl_loge("Could not load: XAddConnectionWatch\n"); return (false); }
	if (!(dl_XRemoveConnectionWatch = dlsym(g_handle_xlib, "XRemoveConnectionWatch"))) { dl_loge("Could not load: XRemoveConnectionWatch\n"); return (false); }
	if (!(dl_XSetAuthorization = dlsym(g_handle_xlib, "XSetAuthorization"))) { dl_loge("Could not load: XSetAuthorization\n"); return (false); }
	if (!(dl__Xmbtowc = dlsym(g_handle_xlib, "_Xmbtowc"))) { dl_loge("Could not load: _Xmbtowc\n"); return (false); }
	if (!(dl__Xwctomb = dlsym(g_handle_xlib, "_Xwctomb"))) { dl_loge("Could not load: _Xwctomb\n"); return (false); }
	if (!(dl_XGetEventData = dlsym(g_handle_xlib, "XGetEventData"))) { dl_loge("Could not load: XGetEventData\n"); return (false); }
	if (!(dl_XFreeEventData = dlsym(g_handle_xlib, "XFreeEventData"))) { dl_loge("Could not load: XFreeEventData\n"); return (false); }
	
	/* MODULE:
	 *  Xlib.h
	 * */
	if (!(dl_XAllocClassHint = dlsym(g_handle_xlib, "XAllocClassHint"))) { dl_loge("Could not load: XAllocClassHint\n"); return (false); }
	if (!(dl_XAllocIconSize = dlsym(g_handle_xlib, "XAllocIconSize"))) { dl_loge("Could not load: XAllocIconSize\n"); return (false); }
	if (!(dl_XAllocSizeHints = dlsym(g_handle_xlib, "XAllocSizeHints"))) { dl_loge("Could not load: XAllocSizeHints\n"); return (false); }
	if (!(dl_XAllocStandardColormap = dlsym(g_handle_xlib, "XAllocStandardColormap"))) { dl_loge("Could not load: XAllocStandardColormap\n"); return (false); }
	if (!(dl_XAllocWMHints = dlsym(g_handle_xlib, "XAllocWMHints"))) { dl_loge("Could not load: XAllocWMHints\n"); return (false); }
	if (!(dl_XClipBox = dlsym(g_handle_xlib, "XClipBox"))) { dl_loge("Could not load: XClipBox\n"); return (false); }
	if (!(dl_XCreateRegion = dlsym(g_handle_xlib, "XCreateRegion"))) { dl_loge("Could not load: XCreateRegion\n"); return (false); }
	if (!(dl_XDefaultString = dlsym(g_handle_xlib, "XDefaultString"))) { dl_loge("Could not load: XDefaultString\n"); return (false); }
	if (!(dl_XDeleteContext = dlsym(g_handle_xlib, "XDeleteContext"))) { dl_loge("Could not load: XDeleteContext\n"); return (false); }
	if (!(dl_XDestroyRegion = dlsym(g_handle_xlib, "XDestroyRegion"))) { dl_loge("Could not load: XDestroyRegion\n"); return (false); }
	if (!(dl_XEmptyRegion = dlsym(g_handle_xlib, "XEmptyRegion"))) { dl_loge("Could not load: XEmptyRegion\n"); return (false); }
	if (!(dl_XEqualRegion = dlsym(g_handle_xlib, "XEqualRegion"))) { dl_loge("Could not load: XEqualRegion\n"); return (false); }
	if (!(dl_XFindContext = dlsym(g_handle_xlib, "XFindContext"))) { dl_loge("Could not load: XFindContext\n"); return (false); }
	if (!(dl_XGetClassHint = dlsym(g_handle_xlib, "XGetClassHint"))) { dl_loge("Could not load: XGetClassHint\n"); return (false); }
	if (!(dl_XGetIconSizes = dlsym(g_handle_xlib, "XGetIconSizes"))) { dl_loge("Could not load: XGetIconSizes\n"); return (false); }
	if (!(dl_XGetNormalHints = dlsym(g_handle_xlib, "XGetNormalHints"))) { dl_loge("Could not load: XGetNormalHints\n"); return (false); }
	if (!(dl_XGetRGBColormaps = dlsym(g_handle_xlib, "XGetRGBColormaps"))) { dl_loge("Could not load: XGetRGBColormaps\n"); return (false); }
	if (!(dl_XGetSizeHints = dlsym(g_handle_xlib, "XGetSizeHints"))) { dl_loge("Could not load: XGetSizeHints\n"); return (false); }
	if (!(dl_XGetStandardColormap = dlsym(g_handle_xlib, "XGetStandardColormap"))) { dl_loge("Could not load: XGetStandardColormap\n"); return (false); }
	if (!(dl_XGetTextProperty = dlsym(g_handle_xlib, "XGetTextProperty"))) { dl_loge("Could not load: XGetTextProperty\n"); return (false); }
	if (!(dl_XGetVisualInfo = dlsym(g_handle_xlib, "XGetVisualInfo"))) { dl_loge("Could not load: XGetVisualInfo\n"); return (false); }
	if (!(dl_XGetWMClientMachine = dlsym(g_handle_xlib, "XGetWMClientMachine"))) { dl_loge("Could not load: XGetWMClientMachine\n"); return (false); }
	if (!(dl_XGetWMHints = dlsym(g_handle_xlib, "XGetWMHints"))) { dl_loge("Could not load: XGetWMHints\n"); return (false); }
	if (!(dl_XGetWMIconName = dlsym(g_handle_xlib, "XGetWMIconName"))) { dl_loge("Could not load: XGetWMIconName\n"); return (false); }
	if (!(dl_XGetWMName = dlsym(g_handle_xlib, "XGetWMName"))) { dl_loge("Could not load: XGetWMName\n"); return (false); }
	if (!(dl_XGetWMNormalHints = dlsym(g_handle_xlib, "XGetWMNormalHints"))) { dl_loge("Could not load: XGetWMNormalHints\n"); return (false); }
	if (!(dl_XGetWMSizeHints = dlsym(g_handle_xlib, "XGetWMSizeHints"))) { dl_loge("Could not load: XGetWMSizeHints\n"); return (false); }
	if (!(dl_XGetZoomHints = dlsym(g_handle_xlib, "XGetZoomHints"))) { dl_loge("Could not load: XGetZoomHints\n"); return (false); }
	if (!(dl_XIntersectRegion = dlsym(g_handle_xlib, "XIntersectRegion"))) { dl_loge("Could not load: XIntersectRegion\n"); return (false); }
	if (!(dl_XConvertCase = dlsym(g_handle_xlib, "XConvertCase"))) { dl_loge("Could not load: XConvertCase\n"); return (false); }
	if (!(dl_XLookupString = dlsym(g_handle_xlib, "XLookupString"))) { dl_loge("Could not load: XLookupString\n"); return (false); }
	if (!(dl_XMatchVisualInfo = dlsym(g_handle_xlib, "XMatchVisualInfo"))) { dl_loge("Could not load: XMatchVisualInfo\n"); return (false); }
	if (!(dl_XOffsetRegion = dlsym(g_handle_xlib, "XOffsetRegion"))) { dl_loge("Could not load: XOffsetRegion\n"); return (false); }
	if (!(dl_XPointInRegion = dlsym(g_handle_xlib, "XPointInRegion"))) { dl_loge("Could not load: XPointInRegion\n"); return (false); }
	if (!(dl_XPolygonRegion = dlsym(g_handle_xlib, "XPolygonRegion"))) { dl_loge("Could not load: XPolygonRegion\n"); return (false); }
	if (!(dl_XRectInRegion = dlsym(g_handle_xlib, "XRectInRegion"))) { dl_loge("Could not load: XRectInRegion\n"); return (false); }
	if (!(dl_XSaveContext = dlsym(g_handle_xlib, "XSaveContext"))) { dl_loge("Could not load: XSaveContext\n"); return (false); }
	if (!(dl_XSetClassHint = dlsym(g_handle_xlib, "XSetClassHint"))) { dl_loge("Could not load: XSetClassHint\n"); return (false); }
	if (!(dl_XSetIconSizes = dlsym(g_handle_xlib, "XSetIconSizes"))) { dl_loge("Could not load: XSetIconSizes\n"); return (false); }
	if (!(dl_XSetNormalHints = dlsym(g_handle_xlib, "XSetNormalHints"))) { dl_loge("Could not load: XSetNormalHints\n"); return (false); }
	if (!(dl_XSetRGBColormaps = dlsym(g_handle_xlib, "XSetRGBColormaps"))) { dl_loge("Could not load: XSetRGBColormaps\n"); return (false); }
	if (!(dl_XSetSizeHints = dlsym(g_handle_xlib, "XSetSizeHints"))) { dl_loge("Could not load: XSetSizeHints\n"); return (false); }
	if (!(dl_XSetStandardProperties = dlsym(g_handle_xlib, "XSetStandardProperties"))) { dl_loge("Could not load: XSetStandardProperties\n"); return (false); }
	if (!(dl_XSetTextProperty = dlsym(g_handle_xlib, "XSetTextProperty"))) { dl_loge("Could not load: XSetTextProperty\n"); return (false); }
	if (!(dl_XSetWMClientMachine = dlsym(g_handle_xlib, "XSetWMClientMachine"))) { dl_loge("Could not load: XSetWMClientMachine\n"); return (false); }
	if (!(dl_XSetWMHints = dlsym(g_handle_xlib, "XSetWMHints"))) { dl_loge("Could not load: XSetWMHints\n"); return (false); }
	if (!(dl_XSetWMIconName = dlsym(g_handle_xlib, "XSetWMIconName"))) { dl_loge("Could not load: XSetWMIconName\n"); return (false); }
	if (!(dl_XSetWMName = dlsym(g_handle_xlib, "XSetWMName"))) { dl_loge("Could not load: XSetWMName\n"); return (false); }
	if (!(dl_XSetWMNormalHints = dlsym(g_handle_xlib, "XSetWMNormalHints"))) { dl_loge("Could not load: XSetWMNormalHints\n"); return (false); }
	if (!(dl_XSetWMProperties = dlsym(g_handle_xlib, "XSetWMProperties"))) { dl_loge("Could not load: XSetWMProperties\n"); return (false); }
	if (!(dl_XmbSetWMProperties = dlsym(g_handle_xlib, "XmbSetWMProperties"))) { dl_loge("Could not load: XmbSetWMProperties\n"); return (false); }
	if (!(dl_Xutf8SetWMProperties = dlsym(g_handle_xlib, "Xutf8SetWMProperties"))) { dl_loge("Could not load: Xutf8SetWMProperties\n"); return (false); }
	if (!(dl_XSetWMSizeHints = dlsym(g_handle_xlib, "XSetWMSizeHints"))) { dl_loge("Could not load: XSetWMSizeHints\n"); return (false); }
	if (!(dl_XSetRegion = dlsym(g_handle_xlib, "XSetRegion"))) { dl_loge("Could not load: XSetRegion\n"); return (false); }
	if (!(dl_XSetStandardColormap = dlsym(g_handle_xlib, "XSetStandardColormap"))) { dl_loge("Could not load: XSetStandardColormap\n"); return (false); }
	if (!(dl_XSetZoomHints = dlsym(g_handle_xlib, "XSetZoomHints"))) { dl_loge("Could not load: XSetZoomHints\n"); return (false); }
	if (!(dl_XShrinkRegion = dlsym(g_handle_xlib, "XShrinkRegion"))) { dl_loge("Could not load: XShrinkRegion\n"); return (false); }
	if (!(dl_XStringListToTextProperty = dlsym(g_handle_xlib, "XStringListToTextProperty"))) { dl_loge("Could not load: XStringListToTextProperty\n"); return (false); }
	if (!(dl_XmbTextListToTextProperty = dlsym(g_handle_xlib, "XmbTextListToTextProperty"))) { dl_loge("Could not load: XmbTextListToTextProperty\n"); return (false); }
	if (!(dl_XwcTextListToTextProperty = dlsym(g_handle_xlib, "XwcTextListToTextProperty"))) { dl_loge("Could not load: XwcTextListToTextProperty\n"); return (false); }
	if (!(dl_Xutf8TextListToTextProperty = dlsym(g_handle_xlib, "Xutf8TextListToTextProperty"))) { dl_loge("Could not load: Xutf8TextListToTextProperty\n"); return (false); }
	if (!(dl_XwcFreeStringList = dlsym(g_handle_xlib, "XwcFreeStringList"))) { dl_loge("Could not load: XwcFreeStringList\n"); return (false); }
	if (!(dl_XTextPropertyToStringList = dlsym(g_handle_xlib, "XTextPropertyToStringList"))) { dl_loge("Could not load: XTextPropertyToStringList\n"); return (false); }
	if (!(dl_XmbTextPropertyToTextList = dlsym(g_handle_xlib, "XmbTextPropertyToTextList"))) { dl_loge("Could not load: XmbTextPropertyToTextList\n"); return (false); }
	if (!(dl_XwcTextPropertyToTextList = dlsym(g_handle_xlib, "XwcTextPropertyToTextList"))) { dl_loge("Could not load: XwcTextPropertyToTextList\n"); return (false); }
	if (!(dl_Xutf8TextPropertyToTextList = dlsym(g_handle_xlib, "Xutf8TextPropertyToTextList"))) { dl_loge("Could not load: Xutf8TextPropertyToTextList\n"); return (false); }
	if (!(dl_XUnionRectWithRegion = dlsym(g_handle_xlib, "XUnionRectWithRegion"))) { dl_loge("Could not load: XUnionRectWithRegion\n"); return (false); }
	if (!(dl_XUnionRegion = dlsym(g_handle_xlib, "XUnionRegion"))) { dl_loge("Could not load: XUnionRegion\n"); return (false); }
	if (!(dl_XWMGeometry = dlsym(g_handle_xlib, "XWMGeometry"))) { dl_loge("Could not load: XWMGeometry\n"); return (false); }
	if (!(dl_XXorRegion = dlsym(g_handle_xlib, "XXorRegion"))) { dl_loge("Could not load: XXorRegion\n"); return (false); }

	/* MODULE:
	 *  XKBlib.h
	 * */
	if (!(dl_XkbIgnoreExtension = dlsym(g_handle_xlib, "XkbIgnoreExtension"))) { dl_loge("Could not load: XkbIgnoreExtension\n"); return (false); }
	if (!(dl_XkbOpenDisplay = dlsym(g_handle_xlib, "XkbOpenDisplay"))) { dl_loge("Could not load: XkbOpenDisplay\n"); return (false); }
	if (!(dl_XkbQueryExtension = dlsym(g_handle_xlib, "XkbQueryExtension"))) { dl_loge("Could not load: XkbQueryExtension\n"); return (false); }
	if (!(dl_XkbUseExtension = dlsym(g_handle_xlib, "XkbUseExtension"))) { dl_loge("Could not load: XkbUseExtension\n"); return (false); }
	if (!(dl_XkbLibraryVersion = dlsym(g_handle_xlib, "XkbLibraryVersion"))) { dl_loge("Could not load: XkbLibraryVersion\n"); return (false); }
	if (!(dl_XkbSetXlibControls = dlsym(g_handle_xlib, "XkbSetXlibControls"))) { dl_loge("Could not load: XkbSetXlibControls\n"); return (false); }
	if (!(dl_XkbGetXlibControls = dlsym(g_handle_xlib, "XkbGetXlibControls"))) { dl_loge("Could not load: XkbGetXlibControls\n"); return (false); }
	if (!(dl_XkbXlibControlsImplemented = dlsym(g_handle_xlib, "XkbXlibControlsImplemented"))) { dl_loge("Could not load: XkbXlibControlsImplemented\n"); return (false); }
	if (!(dl_XkbSetAtomFuncs = dlsym(g_handle_xlib, "XkbSetAtomFuncs"))) { dl_loge("Could not load: XkbSetAtomFuncs\n"); return (false); }
	if (!(dl_XkbKeycodeToKeysym = dlsym(g_handle_xlib, "XkbKeycodeToKeysym"))) { dl_loge("Could not load: XkbKeycodeToKeysym\n"); return (false); }
	if (!(dl_XkbKeysymToModifiers = dlsym(g_handle_xlib, "XkbKeysymToModifiers"))) { dl_loge("Could not load: XkbKeysymToModifiers\n"); return (false); }
	if (!(dl_XkbLookupKeySym = dlsym(g_handle_xlib, "XkbLookupKeySym"))) { dl_loge("Could not load: XkbLookupKeySym\n"); return (false); }
	if (!(dl_XkbLookupKeyBinding = dlsym(g_handle_xlib, "XkbLookupKeyBinding"))) { dl_loge("Could not load: XkbLookupKeyBinding\n"); return (false); }
	if (!(dl_XkbTranslateKeyCode = dlsym(g_handle_xlib, "XkbTranslateKeyCode"))) { dl_loge("Could not load: XkbTranslateKeyCode\n"); return (false); }
	if (!(dl_XkbTranslateKeySym = dlsym(g_handle_xlib, "XkbTranslateKeySym"))) { dl_loge("Could not load: XkbTranslateKeySym\n"); return (false); }
	if (!(dl_XkbSetAutoRepeatRate = dlsym(g_handle_xlib, "XkbSetAutoRepeatRate"))) { dl_loge("Could not load: XkbSetAutoRepeatRate\n"); return (false); }
	if (!(dl_XkbGetAutoRepeatRate = dlsym(g_handle_xlib, "XkbGetAutoRepeatRate"))) { dl_loge("Could not load: XkbGetAutoRepeatRate\n"); return (false); }
	if (!(dl_XkbChangeEnabledControls = dlsym(g_handle_xlib, "XkbChangeEnabledControls"))) { dl_loge("Could not load: XkbChangeEnabledControls\n"); return (false); }
	if (!(dl_XkbDeviceBell = dlsym(g_handle_xlib, "XkbDeviceBell"))) { dl_loge("Could not load: XkbDeviceBell\n"); return (false); }
	if (!(dl_XkbForceDeviceBell = dlsym(g_handle_xlib, "XkbForceDeviceBell"))) { dl_loge("Could not load: XkbForceDeviceBell\n"); return (false); }
	if (!(dl_XkbDeviceBellEvent = dlsym(g_handle_xlib, "XkbDeviceBellEvent"))) { dl_loge("Could not load: XkbDeviceBellEvent\n"); return (false); }
	if (!(dl_XkbBell = dlsym(g_handle_xlib, "XkbBell"))) { dl_loge("Could not load: XkbBell\n"); return (false); }
	if (!(dl_XkbForceBell = dlsym(g_handle_xlib, "XkbForceBell"))) { dl_loge("Could not load: XkbForceBell\n"); return (false); }
	if (!(dl_XkbBellEvent = dlsym(g_handle_xlib, "XkbBellEvent"))) { dl_loge("Could not load: XkbBellEvent\n"); return (false); }
	if (!(dl_XkbSelectEvents = dlsym(g_handle_xlib, "XkbSelectEvents"))) { dl_loge("Could not load: XkbSelectEvents\n"); return (false); }
	if (!(dl_XkbSelectEventDetails = dlsym(g_handle_xlib, "XkbSelectEventDetails"))) { dl_loge("Could not load: XkbSelectEventDetails\n"); return (false); }
	if (!(dl_XkbNoteMapChanges = dlsym(g_handle_xlib, "XkbNoteMapChanges"))) { dl_loge("Could not load: XkbNoteMapChanges\n"); return (false); }
	if (!(dl_XkbNoteNameChanges = dlsym(g_handle_xlib, "XkbNoteNameChanges"))) { dl_loge("Could not load: XkbNoteNameChanges\n"); return (false); }
	if (!(dl_XkbGetIndicatorState = dlsym(g_handle_xlib, "XkbGetIndicatorState"))) { dl_loge("Could not load: XkbGetIndicatorState\n"); return (false); }
	/* NOTE(yakub):
	 *  XkbGetDeviceIndicatorState, even tho is present in XKBlib.h AND being present in official git repository
	 *  has no implementation in libX11.so library AND has no implementation in official git repository.
	 *
	 * if (!(dl_XkbGetDeviceIndicatorState = dlsym(g_handle_xlib, "XkbGetDeviceIndicatorState"))) { dl_loge("Could not load: XkbGetDeviceIndicatorState\n"); return (false); }
	 * */
	if (!(dl_XkbGetIndicatorMap = dlsym(g_handle_xlib, "XkbGetIndicatorMap"))) { dl_loge("Could not load: XkbGetIndicatorMap\n"); return (false); }
	if (!(dl_XkbSetIndicatorMap = dlsym(g_handle_xlib, "XkbSetIndicatorMap"))) { dl_loge("Could not load: XkbSetIndicatorMap\n"); return (false); }
	if (!(dl_XkbGetNamedIndicator = dlsym(g_handle_xlib, "XkbGetNamedIndicator"))) { dl_loge("Could not load: XkbGetNamedIndicator\n"); return (false); }
	if (!(dl_XkbGetNamedDeviceIndicator = dlsym(g_handle_xlib, "XkbGetNamedDeviceIndicator"))) { dl_loge("Could not load: XkbGetNamedDeviceIndicator\n"); return (false); }
	if (!(dl_XkbSetNamedIndicator = dlsym(g_handle_xlib, "XkbSetNamedIndicator"))) { dl_loge("Could not load: XkbSetNamedIndicator\n"); return (false); }
	if (!(dl_XkbSetNamedDeviceIndicator = dlsym(g_handle_xlib, "XkbSetNamedDeviceIndicator"))) { dl_loge("Could not load: XkbSetNamedDeviceIndicator\n"); return (false); }
	if (!(dl_XkbLockModifiers = dlsym(g_handle_xlib, "XkbLockModifiers"))) { dl_loge("Could not load: XkbLockModifiers\n"); return (false); }
	if (!(dl_XkbLatchModifiers = dlsym(g_handle_xlib, "XkbLatchModifiers"))) { dl_loge("Could not load: XkbLatchModifiers\n"); return (false); }
	if (!(dl_XkbLockGroup = dlsym(g_handle_xlib, "XkbLockGroup"))) { dl_loge("Could not load: XkbLockGroup\n"); return (false); }
	if (!(dl_XkbLatchGroup = dlsym(g_handle_xlib, "XkbLatchGroup"))) { dl_loge("Could not load: XkbLatchGroup\n"); return (false); }
	if (!(dl_XkbSetServerInternalMods = dlsym(g_handle_xlib, "XkbSetServerInternalMods"))) { dl_loge("Could not load: XkbSetServerInternalMods\n"); return (false); }
	if (!(dl_XkbSetIgnoreLockMods = dlsym(g_handle_xlib, "XkbSetIgnoreLockMods"))) { dl_loge("Could not load: XkbSetIgnoreLockMods\n"); return (false); }
	if (!(dl_XkbVirtualModsToReal = dlsym(g_handle_xlib, "XkbVirtualModsToReal"))) { dl_loge("Could not load: XkbVirtualModsToReal\n"); return (false); }
	if (!(dl_XkbComputeEffectiveMap = dlsym(g_handle_xlib, "XkbComputeEffectiveMap"))) { dl_loge("Could not load: XkbComputeEffectiveMap\n"); return (false); }
	if (!(dl_XkbInitCanonicalKeyTypes = dlsym(g_handle_xlib, "XkbInitCanonicalKeyTypes"))) { dl_loge("Could not load: XkbInitCanonicalKeyTypes\n"); return (false); }
	if (!(dl_XkbAllocKeyboard = dlsym(g_handle_xlib, "XkbAllocKeyboard"))) { dl_loge("Could not load: XkbAllocKeyboard\n"); return (false); }
	if (!(dl_XkbFreeKeyboard = dlsym(g_handle_xlib, "XkbFreeKeyboard"))) { dl_loge("Could not load: XkbFreeKeyboard\n"); return (false); }
	if (!(dl_XkbAllocClientMap = dlsym(g_handle_xlib, "XkbAllocClientMap"))) { dl_loge("Could not load: XkbAllocClientMap\n"); return (false); }
	if (!(dl_XkbAllocServerMap = dlsym(g_handle_xlib, "XkbAllocServerMap"))) { dl_loge("Could not load: XkbAllocServerMap\n"); return (false); }
	if (!(dl_XkbFreeClientMap = dlsym(g_handle_xlib, "XkbFreeClientMap"))) { dl_loge("Could not load: XkbFreeClientMap\n"); return (false); }
	if (!(dl_XkbFreeServerMap = dlsym(g_handle_xlib, "XkbFreeServerMap"))) { dl_loge("Could not load: XkbFreeServerMap\n"); return (false); }
	if (!(dl_XkbAddKeyType = dlsym(g_handle_xlib, "XkbAddKeyType"))) { dl_loge("Could not load: XkbAddKeyType\n"); return (false); }
	if (!(dl_XkbAllocIndicatorMaps = dlsym(g_handle_xlib, "XkbAllocIndicatorMaps"))) { dl_loge("Could not load: XkbAllocIndicatorMaps\n"); return (false); }
	if (!(dl_XkbFreeIndicatorMaps = dlsym(g_handle_xlib, "XkbFreeIndicatorMaps"))) { dl_loge("Could not load: XkbFreeIndicatorMaps\n"); return (false); }
	if (!(dl_XkbGetMap = dlsym(g_handle_xlib, "XkbGetMap"))) { dl_loge("Could not load: XkbGetMap\n"); return (false); }
	if (!(dl_XkbGetUpdatedMap = dlsym(g_handle_xlib, "XkbGetUpdatedMap"))) { dl_loge("Could not load: XkbGetUpdatedMap\n"); return (false); }
	if (!(dl_XkbGetMapChanges = dlsym(g_handle_xlib, "XkbGetMapChanges"))) { dl_loge("Could not load: XkbGetMapChanges\n"); return (false); }
	if (!(dl_XkbRefreshKeyboardMapping = dlsym(g_handle_xlib, "XkbRefreshKeyboardMapping"))) { dl_loge("Could not load: XkbRefreshKeyboardMapping\n"); return (false); }
	if (!(dl_XkbGetKeyTypes = dlsym(g_handle_xlib, "XkbGetKeyTypes"))) { dl_loge("Could not load: XkbGetKeyTypes\n"); return (false); }
	if (!(dl_XkbGetKeySyms = dlsym(g_handle_xlib, "XkbGetKeySyms"))) { dl_loge("Could not load: XkbGetKeySyms\n"); return (false); }
	if (!(dl_XkbGetKeyActions = dlsym(g_handle_xlib, "XkbGetKeyActions"))) { dl_loge("Could not load: XkbGetKeyActions\n"); return (false); }
	if (!(dl_XkbGetKeyBehaviors = dlsym(g_handle_xlib, "XkbGetKeyBehaviors"))) { dl_loge("Could not load: XkbGetKeyBehaviors\n"); return (false); }
	if (!(dl_XkbGetVirtualMods = dlsym(g_handle_xlib, "XkbGetVirtualMods"))) { dl_loge("Could not load: XkbGetVirtualMods\n"); return (false); }
	if (!(dl_XkbGetKeyExplicitComponents = dlsym(g_handle_xlib, "XkbGetKeyExplicitComponents"))) { dl_loge("Could not load: XkbGetKeyExplicitComponents\n"); return (false); }
	if (!(dl_XkbGetKeyModifierMap = dlsym(g_handle_xlib, "XkbGetKeyModifierMap"))) { dl_loge("Could not load: XkbGetKeyModifierMap\n"); return (false); }
	if (!(dl_XkbGetKeyVirtualModMap = dlsym(g_handle_xlib, "XkbGetKeyVirtualModMap"))) { dl_loge("Could not load: XkbGetKeyVirtualModMap\n"); return (false); }
	if (!(dl_XkbAllocControls = dlsym(g_handle_xlib, "XkbAllocControls"))) { dl_loge("Could not load: XkbAllocControls\n"); return (false); }
	if (!(dl_XkbFreeControls = dlsym(g_handle_xlib, "XkbFreeControls"))) { dl_loge("Could not load: XkbFreeControls\n"); return (false); }
	if (!(dl_XkbGetControls = dlsym(g_handle_xlib, "XkbGetControls"))) { dl_loge("Could not load: XkbGetControls\n"); return (false); }
	if (!(dl_XkbSetControls = dlsym(g_handle_xlib, "XkbSetControls"))) { dl_loge("Could not load: XkbSetControls\n"); return (false); }
	if (!(dl_XkbNoteControlsChanges = dlsym(g_handle_xlib, "XkbNoteControlsChanges"))) { dl_loge("Could not load: XkbNoteControlsChanges\n"); return (false); }
	if (!(dl_XkbAllocCompatMap = dlsym(g_handle_xlib, "XkbAllocCompatMap"))) { dl_loge("Could not load: XkbAllocCompatMap\n"); return (false); }
	if (!(dl_XkbFreeCompatMap = dlsym(g_handle_xlib, "XkbFreeCompatMap"))) { dl_loge("Could not load: XkbFreeCompatMap\n"); return (false); }
	if (!(dl_XkbGetCompatMap = dlsym(g_handle_xlib, "XkbGetCompatMap"))) { dl_loge("Could not load: XkbGetCompatMap\n"); return (false); }
	if (!(dl_XkbSetCompatMap = dlsym(g_handle_xlib, "XkbSetCompatMap"))) { dl_loge("Could not load: XkbSetCompatMap\n"); return (false); }
	/* NOTE(yakub):
	 *  XkbAddSymInterpret, even tho is present in XKBlib.h AND being present in official git repository
	 *  has no implementation in libX11.so library AND has no implementation in official git repository.
	 *
	 * if (!(dl_XkbAddSymInterpret = dlsym(g_handle_xlib, "XkbAddSymInterpret"))) { dl_loge("Could not load: XkbAddSymInterpret\n"); return (false); }
	 * */
	if (!(dl_XkbAllocNames = dlsym(g_handle_xlib, "XkbAllocNames"))) { dl_loge("Could not load: XkbAllocNames\n"); return (false); }
	if (!(dl_XkbGetNames = dlsym(g_handle_xlib, "XkbGetNames"))) { dl_loge("Could not load: XkbGetNames\n"); return (false); }
	if (!(dl_XkbSetNames = dlsym(g_handle_xlib, "XkbSetNames"))) { dl_loge("Could not load: XkbSetNames\n"); return (false); }
	if (!(dl_XkbChangeNames = dlsym(g_handle_xlib, "XkbChangeNames"))) { dl_loge("Could not load: XkbChangeNames\n"); return (false); }
	if (!(dl_XkbFreeNames = dlsym(g_handle_xlib, "XkbFreeNames"))) { dl_loge("Could not load: XkbFreeNames\n"); return (false); }
	if (!(dl_XkbGetState = dlsym(g_handle_xlib, "XkbGetState"))) { dl_loge("Could not load: XkbGetState\n"); return (false); }
	if (!(dl_XkbSetMap = dlsym(g_handle_xlib, "XkbSetMap"))) { dl_loge("Could not load: XkbSetMap\n"); return (false); }
	if (!(dl_XkbChangeMap = dlsym(g_handle_xlib, "XkbChangeMap"))) { dl_loge("Could not load: XkbChangeMap\n"); return (false); }
	if (!(dl_XkbSetDetectableAutoRepeat = dlsym(g_handle_xlib, "XkbSetDetectableAutoRepeat"))) { dl_loge("Could not load: XkbSetDetectableAutoRepeat\n"); return (false); }
	if (!(dl_XkbGetDetectableAutoRepeat = dlsym(g_handle_xlib, "XkbGetDetectableAutoRepeat"))) { dl_loge("Could not load: XkbGetDetectableAutoRepeat\n"); return (false); }
	if (!(dl_XkbSetAutoResetControls = dlsym(g_handle_xlib, "XkbSetAutoResetControls"))) { dl_loge("Could not load: XkbSetAutoResetControls\n"); return (false); }
	if (!(dl_XkbGetAutoResetControls = dlsym(g_handle_xlib, "XkbGetAutoResetControls"))) { dl_loge("Could not load: XkbGetAutoResetControls\n"); return (false); }
	if (!(dl_XkbSetPerClientControls = dlsym(g_handle_xlib, "XkbSetPerClientControls"))) { dl_loge("Could not load: XkbSetPerClientControls\n"); return (false); }
	if (!(dl_XkbGetPerClientControls = dlsym(g_handle_xlib, "XkbGetPerClientControls"))) { dl_loge("Could not load: XkbGetPerClientControls\n"); return (false); }
	if (!(dl_XkbCopyKeyType = dlsym(g_handle_xlib, "XkbCopyKeyType"))) { dl_loge("Could not load: XkbCopyKeyType\n"); return (false); }
	if (!(dl_XkbCopyKeyTypes = dlsym(g_handle_xlib, "XkbCopyKeyTypes"))) { dl_loge("Could not load: XkbCopyKeyTypes\n"); return (false); }
	if (!(dl_XkbResizeKeyType = dlsym(g_handle_xlib, "XkbResizeKeyType"))) { dl_loge("Could not load: XkbResizeKeyType\n"); return (false); }
	if (!(dl_XkbResizeKeySyms = dlsym(g_handle_xlib, "XkbResizeKeySyms"))) { dl_loge("Could not load: XkbResizeKeySyms\n"); return (false); }
	if (!(dl_XkbResizeKeyActions = dlsym(g_handle_xlib, "XkbResizeKeyActions"))) { dl_loge("Could not load: XkbResizeKeyActions\n"); return (false); }
	if (!(dl_XkbChangeTypesOfKey = dlsym(g_handle_xlib, "XkbChangeTypesOfKey"))) { dl_loge("Could not load: XkbChangeTypesOfKey\n"); return (false); }
	if (!(dl_XkbChangeKeycodeRange = dlsym(g_handle_xlib, "XkbChangeKeycodeRange"))) { dl_loge("Could not load: XkbChangeKeycodeRange\n"); return (false); }
	if (!(dl_XkbListComponents = dlsym(g_handle_xlib, "XkbListComponents"))) { dl_loge("Could not load: XkbListComponents\n"); return (false); }
	if (!(dl_XkbFreeComponentList = dlsym(g_handle_xlib, "XkbFreeComponentList"))) { dl_loge("Could not load: XkbFreeComponentList\n"); return (false); }
	if (!(dl_XkbGetKeyboard = dlsym(g_handle_xlib, "XkbGetKeyboard"))) { dl_loge("Could not load: XkbGetKeyboard\n"); return (false); }
	if (!(dl_XkbGetKeyboardByName = dlsym(g_handle_xlib, "XkbGetKeyboardByName"))) { dl_loge("Could not load: XkbGetKeyboardByName\n"); return (false); }
	if (!(dl_XkbKeyTypesForCoreSymbols = dlsym(g_handle_xlib, "XkbKeyTypesForCoreSymbols"))) { dl_loge("Could not load: XkbKeyTypesForCoreSymbols\n"); return (false); }
	if (!(dl_XkbApplyCompatMapToKey = dlsym(g_handle_xlib, "XkbApplyCompatMapToKey"))) { dl_loge("Could not load: XkbApplyCompatMapToKey\n"); return (false); }
	if (!(dl_XkbUpdateMapFromCore = dlsym(g_handle_xlib, "XkbUpdateMapFromCore"))) { dl_loge("Could not load: XkbUpdateMapFromCore\n"); return (false); }
	if (!(dl_XkbAddDeviceLedInfo = dlsym(g_handle_xlib, "XkbAddDeviceLedInfo"))) { dl_loge("Could not load: XkbAddDeviceLedInfo\n"); return (false); }
	if (!(dl_XkbResizeDeviceButtonActions = dlsym(g_handle_xlib, "XkbResizeDeviceButtonActions"))) { dl_loge("Could not load: XkbResizeDeviceButtonActions\n"); return (false); }
	if (!(dl_XkbAllocDeviceInfo = dlsym(g_handle_xlib, "XkbAllocDeviceInfo"))) { dl_loge("Could not load: XkbAllocDeviceInfo\n"); return (false); }
	if (!(dl_XkbFreeDeviceInfo = dlsym(g_handle_xlib, "XkbFreeDeviceInfo"))) { dl_loge("Could not load: XkbFreeDeviceInfo\n"); return (false); }
	if (!(dl_XkbNoteDeviceChanges = dlsym(g_handle_xlib, "XkbNoteDeviceChanges"))) { dl_loge("Could not load: XkbNoteDeviceChanges\n"); return (false); }
	if (!(dl_XkbGetDeviceInfo = dlsym(g_handle_xlib, "XkbGetDeviceInfo"))) { dl_loge("Could not load: XkbGetDeviceInfo\n"); return (false); }
	if (!(dl_XkbGetDeviceInfoChanges = dlsym(g_handle_xlib, "XkbGetDeviceInfoChanges"))) { dl_loge("Could not load: XkbGetDeviceInfoChanges\n"); return (false); }
	if (!(dl_XkbGetDeviceButtonActions = dlsym(g_handle_xlib, "XkbGetDeviceButtonActions"))) { dl_loge("Could not load: XkbGetDeviceButtonActions\n"); return (false); }
	if (!(dl_XkbGetDeviceLedInfo = dlsym(g_handle_xlib, "XkbGetDeviceLedInfo"))) { dl_loge("Could not load: XkbGetDeviceLedInfo\n"); return (false); }
	if (!(dl_XkbSetDeviceInfo = dlsym(g_handle_xlib, "XkbSetDeviceInfo"))) { dl_loge("Could not load: XkbSetDeviceInfo\n"); return (false); }
	if (!(dl_XkbChangeDeviceInfo = dlsym(g_handle_xlib, "XkbChangeDeviceInfo"))) { dl_loge("Could not load: XkbChangeDeviceInfo\n"); return (false); }
	if (!(dl_XkbSetDeviceLedInfo = dlsym(g_handle_xlib, "XkbSetDeviceLedInfo"))) { dl_loge("Could not load: XkbSetDeviceLedInfo\n"); return (false); }
	if (!(dl_XkbSetDeviceButtonActions = dlsym(g_handle_xlib, "XkbSetDeviceButtonActions"))) { dl_loge("Could not load: XkbSetDeviceButtonActions\n"); return (false); }
	if (!(dl_XkbToControl = dlsym(g_handle_xlib, "XkbToControl"))) { dl_loge("Could not load: XkbToControl\n"); return (false); }
	if (!(dl_XkbSetDebuggingFlags = dlsym(g_handle_xlib, "XkbSetDebuggingFlags"))) { dl_loge("Could not load: XkbSetDebuggingFlags\n"); return (false); }
	if (!(dl_XkbApplyVirtualModChanges = dlsym(g_handle_xlib, "XkbApplyVirtualModChanges"))) { dl_loge("Could not load: XkbApplyVirtualModChanges\n"); return (false); }
	if (!(dl_XkbUpdateActionVirtualMods = dlsym(g_handle_xlib, "XkbUpdateActionVirtualMods"))) { dl_loge("Could not load: XkbUpdateActionVirtualMods\n"); return (false); }
	if (!(dl_XkbUpdateKeyTypeVirtualMods = dlsym(g_handle_xlib, "XkbUpdateKeyTypeVirtualMods"))) { dl_loge("Could not load: XkbUpdateKeyTypeVirtualMods\n"); return (false); }

	return (true);
}

DLAPI bool	dl_unloadXlib(void) {
	if (!g_handle_xlib) {
		dl_logw("libX11 handle is set to NULL\n");
		return (false);
	}
	dlclose(g_handle_xlib);
	return (true);
}



/* SECTION:
 *  Dynamic API
 * */

/* * MODULE:
 * *  Xlib.h
 * * */

PFN_XLoadQueryFont dl_XLoadQueryFont;
PFN_XQueryFont dl_XQueryFont;
PFN_XGetMotionEvents dl_XGetMotionEvents;
PFN_XDeleteModifiermapEntry dl_XDeleteModifiermapEntry;
PFN_XGetModifierMapping dl_XGetModifierMapping;
PFN_XInsertModifiermapEntry dl_XInsertModifiermapEntry;
PFN_XNewModifiermap dl_XNewModifiermap;
PFN_XCreateImage dl_XCreateImage;
PFN_XInitImage dl_XInitImage;
PFN_XGetImage dl_XGetImage;
PFN_XGetSubImage dl_XGetSubImage;
PFN_XOpenDisplay dl_XOpenDisplay;
PFN_XrmInitialize dl_XrmInitialize;
PFN_XFetchBytes dl_XFetchBytes;
PFN_XFetchBuffer dl_XFetchBuffer;
PFN_XGetAtomName dl_XGetAtomName;
PFN_XGetAtomNames dl_XGetAtomNames;
PFN_XGetDefault dl_XGetDefault;
PFN_XDisplayName dl_XDisplayName;
PFN_XKeysymToString dl_XKeysymToString;
PFN_XSynchronize dl_XSynchronize;
PFN_XSetAfterFunction dl_XSetAfterFunction;
PFN_XInternAtom dl_XInternAtom;
PFN_XInternAtoms dl_XInternAtoms;
PFN_XCopyColormapAndFree dl_XCopyColormapAndFree;
PFN_XCreateColormap dl_XCreateColormap;
PFN_XCreatePixmapCursor dl_XCreatePixmapCursor;
PFN_XCreateGlyphCursor dl_XCreateGlyphCursor;
PFN_XCreateFontCursor dl_XCreateFontCursor;
PFN_XLoadFont dl_XLoadFont;
PFN_XCreateGC dl_XCreateGC;
PFN_XGContextFromGC dl_XGContextFromGC;
PFN_XFlushGC dl_XFlushGC;
PFN_XCreatePixmap dl_XCreatePixmap;
PFN_XCreateBitmapFromData dl_XCreateBitmapFromData;
PFN_XCreatePixmapFromBitmapData dl_XCreatePixmapFromBitmapData;
PFN_XCreateSimpleWindow dl_XCreateSimpleWindow;
PFN_XGetSelectionOwner dl_XGetSelectionOwner;
PFN_XCreateWindow dl_XCreateWindow;
PFN_XListInstalledColormaps dl_XListInstalledColormaps;
PFN_XListFonts dl_XListFonts;
PFN_XListFontsWithInfo dl_XListFontsWithInfo;
PFN_XGetFontPath dl_XGetFontPath;
PFN_XListExtensions dl_XListExtensions;
PFN_XListProperties dl_XListProperties;
PFN_XListHosts dl_XListHosts;
PFN_XKeycodeToKeysym dl_XKeycodeToKeysym;
PFN_XLookupKeysym dl_XLookupKeysym;
PFN_XGetKeyboardMapping dl_XGetKeyboardMapping;
PFN_XStringToKeysym dl_XStringToKeysym;
PFN_XMaxRequestSize dl_XMaxRequestSize;
PFN_XExtendedMaxRequestSize dl_XExtendedMaxRequestSize;
PFN_XResourceManagerString dl_XResourceManagerString;
PFN_XScreenResourceString dl_XScreenResourceString;
PFN_XDisplayMotionBufferSize dl_XDisplayMotionBufferSize;
PFN_XVisualIDFromVisual dl_XVisualIDFromVisual;
PFN_XInitThreads dl_XInitThreads;
PFN_XFreeThreads dl_XFreeThreads;
PFN_XLockDisplay dl_XLockDisplay;
PFN_XUnlockDisplay dl_XUnlockDisplay;
PFN_XInitExtension dl_XInitExtension;
PFN_XAddExtension dl_XAddExtension;
PFN_XFindOnExtensionList dl_XFindOnExtensionList;
PFN_XEHeadOfExtensionList dl_XEHeadOfExtensionList;
PFN_XRootWindow dl_XRootWindow;
PFN_XDefaultRootWindow dl_XDefaultRootWindow;
PFN_XRootWindowOfScreen dl_XRootWindowOfScreen;
PFN_XDefaultVisual dl_XDefaultVisual;
PFN_XDefaultVisualOfScreen dl_XDefaultVisualOfScreen;
PFN_XDefaultGC dl_XDefaultGC;
PFN_XDefaultGCOfScreen dl_XDefaultGCOfScreen;
PFN_XBlackPixel dl_XBlackPixel;
PFN_XWhitePixel dl_XWhitePixel;
PFN_XAllPlanes dl_XAllPlanes;
PFN_XBlackPixelOfScreen dl_XBlackPixelOfScreen;
PFN_XWhitePixelOfScreen dl_XWhitePixelOfScreen;
PFN_XNextRequest dl_XNextRequest;
PFN_XLastKnownRequestProcessed dl_XLastKnownRequestProcessed;
PFN_XServerVendor dl_XServerVendor;
PFN_XDisplayString dl_XDisplayString;
PFN_XDefaultColormap dl_XDefaultColormap;
PFN_XDefaultColormapOfScreen dl_XDefaultColormapOfScreen;
PFN_XDisplayOfScreen dl_XDisplayOfScreen;
PFN_XScreenOfDisplay dl_XScreenOfDisplay;
PFN_XDefaultScreenOfDisplay dl_XDefaultScreenOfDisplay;
PFN_XEventMaskOfScreen dl_XEventMaskOfScreen;
PFN_XScreenNumberOfScreen dl_XScreenNumberOfScreen;
PFN_XSetErrorHandler dl_XSetErrorHandler;
PFN_XSetIOErrorHandler dl_XSetIOErrorHandler;
PFN_XSetIOErrorExitHandler dl_XSetIOErrorExitHandler;
PFN_XListPixmapFormats dl_XListPixmapFormats;
PFN_XListDepths dl_XListDepths;
PFN_XReconfigureWMWindow dl_XReconfigureWMWindow;
PFN_XGetWMProtocols dl_XGetWMProtocols;
PFN_XSetWMProtocols dl_XSetWMProtocols;
PFN_XIconifyWindow dl_XIconifyWindow;
PFN_XWithdrawWindow dl_XWithdrawWindow;
PFN_XGetCommand dl_XGetCommand;
PFN_XGetWMColormapWindows dl_XGetWMColormapWindows;
PFN_XSetWMColormapWindows dl_XSetWMColormapWindows;
PFN_XFreeStringList dl_XFreeStringList;
PFN_XSetTransientForHint dl_XSetTransientForHint;
PFN_XActivateScreenSaver dl_XActivateScreenSaver;
PFN_XAddHost dl_XAddHost;
PFN_XAddHosts dl_XAddHosts;
PFN_XAddToExtensionList dl_XAddToExtensionList;
PFN_XAddToSaveSet dl_XAddToSaveSet;
PFN_XAllocColor dl_XAllocColor;
PFN_XAllocColorCells dl_XAllocColorCells;
PFN_XAllocColorPlanes dl_XAllocColorPlanes;
PFN_XAllocNamedColor dl_XAllocNamedColor;
PFN_XAllowEvents dl_XAllowEvents;
PFN_XAutoRepeatOff dl_XAutoRepeatOff;
PFN_XAutoRepeatOn dl_XAutoRepeatOn;
PFN_XBell dl_XBell;
PFN_XBitmapBitOrder dl_XBitmapBitOrder;
PFN_XBitmapPad dl_XBitmapPad;
PFN_XBitmapUnit dl_XBitmapUnit;
PFN_XCellsOfScreen dl_XCellsOfScreen;
PFN_XChangeActivePointerGrab dl_XChangeActivePointerGrab;
PFN_XChangeGC dl_XChangeGC;
PFN_XChangeKeyboardControl dl_XChangeKeyboardControl;
PFN_XChangeKeyboardMapping dl_XChangeKeyboardMapping;
PFN_XChangePointerControl dl_XChangePointerControl;
PFN_XChangeProperty dl_XChangeProperty;
PFN_XChangeSaveSet dl_XChangeSaveSet;
PFN_XChangeWindowAttributes dl_XChangeWindowAttributes;
PFN_XCheckIfEvent dl_XCheckIfEvent;
PFN_XCheckMaskEvent dl_XCheckMaskEvent;
PFN_XCheckTypedEvent dl_XCheckTypedEvent;
PFN_XCheckTypedWindowEvent dl_XCheckTypedWindowEvent;
PFN_XCheckWindowEvent dl_XCheckWindowEvent;
PFN_XCirculateSubwindows dl_XCirculateSubwindows;
PFN_XCirculateSubwindowsDown dl_XCirculateSubwindowsDown;
PFN_XCirculateSubwindowsUp dl_XCirculateSubwindowsUp;
PFN_XClearArea dl_XClearArea;
PFN_XClearWindow dl_XClearWindow;
PFN_XCloseDisplay dl_XCloseDisplay;
PFN_XConfigureWindow dl_XConfigureWindow;
PFN_XConnectionNumber dl_XConnectionNumber;
PFN_XConvertSelection dl_XConvertSelection;
PFN_XCopyArea dl_XCopyArea;
PFN_XCopyGC dl_XCopyGC;
PFN_XCopyPlane dl_XCopyPlane;
PFN_XDefaultDepth dl_XDefaultDepth;
PFN_XDefaultDepthOfScreen dl_XDefaultDepthOfScreen;
PFN_XDefaultScreen dl_XDefaultScreen;
PFN_XDefineCursor dl_XDefineCursor;
PFN_XDeleteProperty dl_XDeleteProperty;
PFN_XDestroyWindow dl_XDestroyWindow;
PFN_XDestroySubwindows dl_XDestroySubwindows;
PFN_XDoesBackingStore dl_XDoesBackingStore;
PFN_XDoesSaveUnders dl_XDoesSaveUnders;
PFN_XDisableAccessControl dl_XDisableAccessControl;
PFN_XDisplayCells dl_XDisplayCells;
PFN_XDisplayHeight dl_XDisplayHeight;
PFN_XDisplayHeightMM dl_XDisplayHeightMM;
PFN_XDisplayKeycodes dl_XDisplayKeycodes;
PFN_XDisplayPlanes dl_XDisplayPlanes;
PFN_XDisplayWidth dl_XDisplayWidth;
PFN_XDisplayWidthMM dl_XDisplayWidthMM;
PFN_XDrawArc dl_XDrawArc;
PFN_XDrawArcs dl_XDrawArcs;
PFN_XDrawImageString dl_XDrawImageString;
PFN_XDrawImageString16 dl_XDrawImageString16;
PFN_XDrawLine dl_XDrawLine;
PFN_XDrawLines dl_XDrawLines;
PFN_XDrawPoint dl_XDrawPoint;
PFN_XDrawPoints dl_XDrawPoints;
PFN_XDrawRectangle dl_XDrawRectangle;
PFN_XDrawRectangles dl_XDrawRectangles;
PFN_XDrawSegments dl_XDrawSegments;
PFN_XDrawString dl_XDrawString;
PFN_XDrawString16 dl_XDrawString16;
PFN_XDrawText dl_XDrawText;
PFN_XDrawText16 dl_XDrawText16;
PFN_XEnableAccessControl dl_XEnableAccessControl;
PFN_XEventsQueued dl_XEventsQueued;
PFN_XFetchName dl_XFetchName;
PFN_XFillArc dl_XFillArc;
PFN_XFillArcs dl_XFillArcs;
PFN_XFillPolygon dl_XFillPolygon;
PFN_XFillRectangle dl_XFillRectangle;
PFN_XFillRectangles dl_XFillRectangles;
PFN_XFlush dl_XFlush;
PFN_XForceScreenSaver dl_XForceScreenSaver;
PFN_XFree dl_XFree;
PFN_XFreeColormap dl_XFreeColormap;
PFN_XFreeColors dl_XFreeColors;
PFN_XFreeCursor dl_XFreeCursor;
PFN_XFreeExtensionList dl_XFreeExtensionList;
PFN_XFreeFont dl_XFreeFont;
PFN_XFreeFontInfo dl_XFreeFontInfo;
PFN_XFreeFontNames dl_XFreeFontNames;
PFN_XFreeFontPath dl_XFreeFontPath;
PFN_XFreeGC dl_XFreeGC;
PFN_XFreeModifiermap dl_XFreeModifiermap;
PFN_XFreePixmap dl_XFreePixmap;
PFN_XGeometry dl_XGeometry;
PFN_XGetErrorDatabaseText dl_XGetErrorDatabaseText;
PFN_XGetErrorText dl_XGetErrorText;
PFN_XGetFontProperty dl_XGetFontProperty;
PFN_XGetGCValues dl_XGetGCValues;
PFN_XGetGeometry dl_XGetGeometry;
PFN_XGetIconName dl_XGetIconName;
PFN_XGetInputFocus dl_XGetInputFocus;
PFN_XGetKeyboardControl dl_XGetKeyboardControl;
PFN_XGetPointerControl dl_XGetPointerControl;
PFN_XGetPointerMapping dl_XGetPointerMapping;
PFN_XGetScreenSaver dl_XGetScreenSaver;
PFN_XGetTransientForHint dl_XGetTransientForHint;
PFN_XGetWindowProperty dl_XGetWindowProperty;
PFN_XGetWindowAttributes dl_XGetWindowAttributes;
PFN_XGrabButton dl_XGrabButton;
PFN_XGrabKey dl_XGrabKey;
PFN_XGrabKeyboard dl_XGrabKeyboard;
PFN_XGrabPointer dl_XGrabPointer;
PFN_XGrabServer dl_XGrabServer;
PFN_XHeightMMOfScreen dl_XHeightMMOfScreen;
PFN_XHeightOfScreen dl_XHeightOfScreen;
PFN_XIfEvent dl_XIfEvent;
PFN_XImageByteOrder dl_XImageByteOrder;
PFN_XInstallColormap dl_XInstallColormap;
PFN_XKeysymToKeycode dl_XKeysymToKeycode;
PFN_XKillClient dl_XKillClient;
PFN_XLookupColor dl_XLookupColor;
PFN_XLowerWindow dl_XLowerWindow;
PFN_XMapRaised dl_XMapRaised;
PFN_XMapSubwindows dl_XMapSubwindows;
PFN_XMapWindow dl_XMapWindow;
PFN_XMaskEvent dl_XMaskEvent;
PFN_XMaxCmapsOfScreen dl_XMaxCmapsOfScreen;
PFN_XMinCmapsOfScreen dl_XMinCmapsOfScreen;
PFN_XMoveResizeWindow dl_XMoveResizeWindow;
PFN_XMoveWindow dl_XMoveWindow;
PFN_XNextEvent dl_XNextEvent;
PFN_XNoOp dl_XNoOp;
PFN_XParseColor dl_XParseColor;
PFN_XParseGeometry dl_XParseGeometry;
PFN_XPeekEvent dl_XPeekEvent;
PFN_XPeekIfEvent dl_XPeekIfEvent;
PFN_XPending dl_XPending;
PFN_XPlanesOfScreen dl_XPlanesOfScreen;
PFN_XProtocolRevision dl_XProtocolRevision;
PFN_XProtocolVersion dl_XProtocolVersion;
PFN_XPutBackEvent dl_XPutBackEvent;
PFN_XPutImage dl_XPutImage;
PFN_XQLength dl_XQLength;
PFN_XQueryBestCursor dl_XQueryBestCursor;
PFN_XQueryBestSize dl_XQueryBestSize;
PFN_XQueryBestStipple dl_XQueryBestStipple;
PFN_XQueryBestTile dl_XQueryBestTile;
PFN_XQueryColor dl_XQueryColor;
PFN_XQueryColors dl_XQueryColors;
PFN_XQueryExtension dl_XQueryExtension;
PFN_XQueryKeymap dl_XQueryKeymap;
PFN_XQueryPointer dl_XQueryPointer;
PFN_XQueryTextExtents dl_XQueryTextExtents;
PFN_XQueryTextExtents16 dl_XQueryTextExtents16;
PFN_XQueryTree dl_XQueryTree;
PFN_XRaiseWindow dl_XRaiseWindow;
PFN_XReadBitmapFile dl_XReadBitmapFile;
PFN_XReadBitmapFileData dl_XReadBitmapFileData;
PFN_XRebindKeysym dl_XRebindKeysym;
PFN_XRecolorCursor dl_XRecolorCursor;
PFN_XRefreshKeyboardMapping dl_XRefreshKeyboardMapping;
PFN_XRemoveFromSaveSet dl_XRemoveFromSaveSet;
PFN_XRemoveHost dl_XRemoveHost;
PFN_XRemoveHosts dl_XRemoveHosts;
PFN_XReparentWindow dl_XReparentWindow;
PFN_XResetScreenSaver dl_XResetScreenSaver;
PFN_XResizeWindow dl_XResizeWindow;
PFN_XRestackWindows dl_XRestackWindows;
PFN_XRotateBuffers dl_XRotateBuffers;
PFN_XRotateWindowProperties dl_XRotateWindowProperties;
PFN_XScreenCount dl_XScreenCount;
PFN_XSelectInput dl_XSelectInput;
PFN_XSendEvent dl_XSendEvent;
PFN_XSetAccessControl dl_XSetAccessControl;
PFN_XSetArcMode dl_XSetArcMode;
PFN_XSetBackground dl_XSetBackground;
PFN_XSetClipMask dl_XSetClipMask;
PFN_XSetClipOrigin dl_XSetClipOrigin;
PFN_XSetClipRectangles dl_XSetClipRectangles;
PFN_XSetCloseDownMode dl_XSetCloseDownMode;
PFN_XSetCommand dl_XSetCommand;
PFN_XSetDashes dl_XSetDashes;
PFN_XSetFillRule dl_XSetFillRule;
PFN_XSetFillStyle dl_XSetFillStyle;
PFN_XSetFont dl_XSetFont;
PFN_XSetFontPath dl_XSetFontPath;
PFN_XSetForeground dl_XSetForeground;
PFN_XSetFunction dl_XSetFunction;
PFN_XSetGraphicsExposures dl_XSetGraphicsExposures;
PFN_XSetIconName dl_XSetIconName;
PFN_XSetInputFocus dl_XSetInputFocus;
PFN_XSetLineAttributes dl_XSetLineAttributes;
PFN_XSetModifierMapping dl_XSetModifierMapping;
PFN_XSetPlaneMask dl_XSetPlaneMask;
PFN_XSetPointerMapping dl_XSetPointerMapping;
PFN_XSetScreenSaver dl_XSetScreenSaver;
PFN_XSetSelectionOwner dl_XSetSelectionOwner;
PFN_XSetState dl_XSetState;
PFN_XSetStipple dl_XSetStipple;
PFN_XSetSubwindowMode dl_XSetSubwindowMode;
PFN_XSetTSOrigin dl_XSetTSOrigin;
PFN_XSetTile dl_XSetTile;
PFN_XSetWindowBackground dl_XSetWindowBackground;
PFN_XSetWindowBackgroundPixmap dl_XSetWindowBackgroundPixmap;
PFN_XSetWindowBorder dl_XSetWindowBorder;
PFN_XSetWindowBorderPixmap dl_XSetWindowBorderPixmap;
PFN_XSetWindowBorderWidth dl_XSetWindowBorderWidth;
PFN_XSetWindowColormap dl_XSetWindowColormap;
PFN_XStoreBuffer dl_XStoreBuffer;
PFN_XStoreBytes dl_XStoreBytes;
PFN_XStoreColor dl_XStoreColor;
PFN_XStoreColors dl_XStoreColors;
PFN_XStoreName dl_XStoreName;
PFN_XStoreNamedColor dl_XStoreNamedColor;
PFN_XSync dl_XSync;
PFN_XTextExtents dl_XTextExtents;
PFN_XTextExtents16 dl_XTextExtents16;
PFN_XTextWidth dl_XTextWidth;
PFN_XTextWidth16 dl_XTextWidth16;
PFN_XTranslateCoordinates dl_XTranslateCoordinates;
PFN_XUndefineCursor dl_XUndefineCursor;
PFN_XUngrabButton dl_XUngrabButton;
PFN_XUngrabKey dl_XUngrabKey;
PFN_XUngrabKeyboard dl_XUngrabKeyboard;
PFN_XUngrabPointer dl_XUngrabPointer;
PFN_XUngrabServer dl_XUngrabServer;
PFN_XUninstallColormap dl_XUninstallColormap;
PFN_XUnloadFont dl_XUnloadFont;
PFN_XUnmapSubwindows dl_XUnmapSubwindows;
PFN_XUnmapWindow dl_XUnmapWindow;
PFN_XVendorRelease dl_XVendorRelease;
PFN_XWarpPointer dl_XWarpPointer;
PFN_XWidthMMOfScreen dl_XWidthMMOfScreen;
PFN_XWidthOfScreen dl_XWidthOfScreen;
PFN_XWindowEvent dl_XWindowEvent;
PFN_XWriteBitmapFile dl_XWriteBitmapFile;
PFN_XSupportsLocale dl_XSupportsLocale;
PFN_XSetLocaleModifiers dl_XSetLocaleModifiers;
PFN_XOpenOM dl_XOpenOM;
PFN_XCloseOM dl_XCloseOM;
PFN_XSetOMValues dl_XSetOMValues;
PFN_XGetOMValues dl_XGetOMValues;
PFN_XDisplayOfOM dl_XDisplayOfOM;
PFN_XLocaleOfOM dl_XLocaleOfOM;
PFN_XCreateOC dl_XCreateOC;
PFN_XDestroyOC dl_XDestroyOC;
PFN_XOMOfOC dl_XOMOfOC;
PFN_XSetOCValues dl_XSetOCValues;
PFN_XGetOCValues dl_XGetOCValues;
PFN_XCreateFontSet dl_XCreateFontSet;
PFN_XFreeFontSet dl_XFreeFontSet;
PFN_XFontsOfFontSet dl_XFontsOfFontSet;
PFN_XBaseFontNameListOfFontSet dl_XBaseFontNameListOfFontSet;
PFN_XLocaleOfFontSet dl_XLocaleOfFontSet;
PFN_XContextDependentDrawing dl_XContextDependentDrawing;
PFN_XDirectionalDependentDrawing dl_XDirectionalDependentDrawing;
PFN_XContextualDrawing dl_XContextualDrawing;
PFN_XExtentsOfFontSet dl_XExtentsOfFontSet;
PFN_XmbTextEscapement dl_XmbTextEscapement;
PFN_XwcTextEscapement dl_XwcTextEscapement;
PFN_Xutf8TextEscapement dl_Xutf8TextEscapement;
PFN_XmbTextExtents dl_XmbTextExtents;
PFN_XwcTextExtents dl_XwcTextExtents;
PFN_Xutf8TextExtents dl_Xutf8TextExtents;
PFN_XmbTextPerCharExtents dl_XmbTextPerCharExtents;
PFN_XwcTextPerCharExtents dl_XwcTextPerCharExtents;
PFN_Xutf8TextPerCharExtents dl_Xutf8TextPerCharExtents;
PFN_XmbDrawText dl_XmbDrawText;
PFN_XwcDrawText dl_XwcDrawText;
PFN_Xutf8DrawText dl_Xutf8DrawText;
PFN_XmbDrawString dl_XmbDrawString;
PFN_XwcDrawString dl_XwcDrawString;
PFN_Xutf8DrawString dl_Xutf8DrawString;
PFN_XmbDrawImageString dl_XmbDrawImageString;
PFN_XwcDrawImageString dl_XwcDrawImageString;
PFN_Xutf8DrawImageString dl_Xutf8DrawImageString;
PFN_XOpenIM dl_XOpenIM;
PFN_XCloseIM dl_XCloseIM;
PFN_XGetIMValues dl_XGetIMValues;
PFN_XSetIMValues dl_XSetIMValues;
PFN_XDisplayOfIM dl_XDisplayOfIM;
PFN_XLocaleOfIM dl_XLocaleOfIM;
PFN_XCreateIC dl_XCreateIC;
PFN_XDestroyIC dl_XDestroyIC;
PFN_XSetICFocus dl_XSetICFocus;
PFN_XUnsetICFocus dl_XUnsetICFocus;
PFN_XwcResetIC dl_XwcResetIC;
PFN_XmbResetIC dl_XmbResetIC;
PFN_Xutf8ResetIC dl_Xutf8ResetIC;
PFN_XSetICValues dl_XSetICValues;
PFN_XGetICValues dl_XGetICValues;
PFN_XIMOfIC dl_XIMOfIC;
PFN_XFilterEvent dl_XFilterEvent;
PFN_XmbLookupString dl_XmbLookupString;
PFN_XwcLookupString dl_XwcLookupString;
PFN_Xutf8LookupString dl_Xutf8LookupString;
PFN_XVaCreateNestedList dl_XVaCreateNestedList;
PFN_XRegisterIMInstantiateCallback dl_XRegisterIMInstantiateCallback;
PFN_XUnregisterIMInstantiateCallback dl_XUnregisterIMInstantiateCallback;
PFN_XInternalConnectionNumbers dl_XInternalConnectionNumbers;
PFN_XProcessInternalConnection dl_XProcessInternalConnection;
PFN_XAddConnectionWatch dl_XAddConnectionWatch;
PFN_XRemoveConnectionWatch dl_XRemoveConnectionWatch;
PFN_XSetAuthorization dl_XSetAuthorization;
PFN__Xmbtowc dl__Xmbtowc;
PFN__Xwctomb dl__Xwctomb;
PFN_XGetEventData dl_XGetEventData;
PFN_XFreeEventData dl_XFreeEventData;

/* * MODULE:
 * *  Xutil.h
 * * */

PFN_XAllocClassHint          dl_XAllocClassHint;
PFN_XAllocIconSize           dl_XAllocIconSize;
PFN_XAllocSizeHints          dl_XAllocSizeHints;
PFN_XAllocStandardColormap   dl_XAllocStandardColormap;
PFN_XAllocWMHints            dl_XAllocWMHints;
PFN_XClipBox                 dl_XClipBox;
PFN_XCreateRegion            dl_XCreateRegion;
PFN_XDefaultString           dl_XDefaultString;
PFN_XDeleteContext           dl_XDeleteContext;
PFN_XDestroyRegion           dl_XDestroyRegion;
PFN_XEmptyRegion             dl_XEmptyRegion;
PFN_XEqualRegion             dl_XEqualRegion;
PFN_XFindContext             dl_XFindContext;
PFN_XGetClassHint            dl_XGetClassHint;
PFN_XGetIconSizes            dl_XGetIconSizes;
PFN_XGetNormalHints          dl_XGetNormalHints;
PFN_XGetRGBColormaps        dl_XGetRGBColormaps;
PFN_XGetSizeHints            dl_XGetSizeHints;
PFN_XGetStandardColormap     dl_XGetStandardColormap;
PFN_XGetTextProperty         dl_XGetTextProperty;
PFN_XGetVisualInfo           dl_XGetVisualInfo;
PFN_XGetWMClientMachine      dl_XGetWMClientMachine;
PFN_XGetWMHints              dl_XGetWMHints;
PFN_XGetWMIconName           dl_XGetWMIconName;
PFN_XGetWMName               dl_XGetWMName;
PFN_XGetWMNormalHints        dl_XGetWMNormalHints;
PFN_XGetWMSizeHints          dl_XGetWMSizeHints;
PFN_XGetZoomHints            dl_XGetZoomHints;
PFN_XIntersectRegion         dl_XIntersectRegion;
PFN_XConvertCase             dl_XConvertCase;
PFN_XLookupString            dl_XLookupString;
PFN_XMatchVisualInfo         dl_XMatchVisualInfo;
PFN_XOffsetRegion            dl_XOffsetRegion;
PFN_XPointInRegion           dl_XPointInRegion;
PFN_XPolygonRegion           dl_XPolygonRegion;
PFN_XRectInRegion            dl_XRectInRegion;
PFN_XSaveContext             dl_XSaveContext;
PFN_XSetClassHint            dl_XSetClassHint;
PFN_XSetIconSizes            dl_XSetIconSizes;
PFN_XSetNormalHints          dl_XSetNormalHints;
PFN_XSetRGBColormaps        dl_XSetRGBColormaps;
PFN_XSetSizeHints            dl_XSetSizeHints;
PFN_XSetStandardProperties   dl_XSetStandardProperties;
PFN_XSetTextProperty         dl_XSetTextProperty;
PFN_XSetWMClientMachine      dl_XSetWMClientMachine;
PFN_XSetWMHints              dl_XSetWMHints;
PFN_XSetWMIconName           dl_XSetWMIconName;
PFN_XSetWMName               dl_XSetWMName;
PFN_XSetWMNormalHints        dl_XSetWMNormalHints;
PFN_XSetWMProperties         dl_XSetWMProperties;
PFN_XmbSetWMProperties       dl_XmbSetWMProperties;
PFN_Xutf8SetWMProperties     dl_Xutf8SetWMProperties;
PFN_XSetWMSizeHints          dl_XSetWMSizeHints;
PFN_XSetRegion               dl_XSetRegion;
PFN_XSetStandardColormap     dl_XSetStandardColormap;
PFN_XSetZoomHints            dl_XSetZoomHints;
PFN_XShrinkRegion            dl_XShrinkRegion;
PFN_XStringListToTextProperty dl_XStringListToTextProperty;
PFN_XmbTextListToTextProperty dl_XmbTextListToTextProperty;
PFN_XwcTextListToTextProperty dl_XwcTextListToTextProperty;
PFN_Xutf8TextListToTextProperty dl_Xutf8TextListToTextProperty;
PFN_XwcFreeStringList        dl_XwcFreeStringList;
PFN_XTextPropertyToStringList dl_XTextPropertyToStringList;
PFN_XmbTextPropertyToTextList dl_XmbTextPropertyToTextList;
PFN_XwcTextPropertyToTextList dl_XwcTextPropertyToTextList;
PFN_Xutf8TextPropertyToTextList dl_Xutf8TextPropertyToTextList;
PFN_XUnionRectWithRegion     dl_XUnionRectWithRegion;
PFN_XUnionRegion             dl_XUnionRegion;
PFN_XWMGeometry              dl_XWMGeometry;
PFN_XXorRegion               dl_XXorRegion;

/* * MODULE:
 * *  XKBlib.h
 * * */

PFN_XkbIgnoreExtension dl_XkbIgnoreExtension;
PFN_XkbOpenDisplay dl_XkbOpenDisplay;
PFN_XkbQueryExtension dl_XkbQueryExtension;
PFN_XkbUseExtension dl_XkbUseExtension;
PFN_XkbLibraryVersion dl_XkbLibraryVersion;
PFN_XkbSetXlibControls dl_XkbSetXlibControls;
PFN_XkbGetXlibControls dl_XkbGetXlibControls;
PFN_XkbXlibControlsImplemented dl_XkbXlibControlsImplemented;
PFN_XkbSetAtomFuncs dl_XkbSetAtomFuncs;
PFN_XkbKeycodeToKeysym dl_XkbKeycodeToKeysym;
PFN_XkbKeysymToModifiers dl_XkbKeysymToModifiers;
PFN_XkbLookupKeySym dl_XkbLookupKeySym;
PFN_XkbLookupKeyBinding dl_XkbLookupKeyBinding;
PFN_XkbTranslateKeyCode dl_XkbTranslateKeyCode;
PFN_XkbTranslateKeySym dl_XkbTranslateKeySym;
PFN_XkbSetAutoRepeatRate dl_XkbSetAutoRepeatRate;
PFN_XkbGetAutoRepeatRate dl_XkbGetAutoRepeatRate;
PFN_XkbChangeEnabledControls dl_XkbChangeEnabledControls;
PFN_XkbDeviceBell dl_XkbDeviceBell;
PFN_XkbForceDeviceBell dl_XkbForceDeviceBell;
PFN_XkbDeviceBellEvent dl_XkbDeviceBellEvent;
PFN_XkbBell dl_XkbBell;
PFN_XkbForceBell dl_XkbForceBell;
PFN_XkbBellEvent dl_XkbBellEvent;
PFN_XkbSelectEvents dl_XkbSelectEvents;
PFN_XkbSelectEventDetails dl_XkbSelectEventDetails;
PFN_XkbNoteMapChanges dl_XkbNoteMapChanges;
PFN_XkbNoteNameChanges dl_XkbNoteNameChanges;
PFN_XkbGetIndicatorState dl_XkbGetIndicatorState;
/* NOTE(yakub):
 *  XkbGetDeviceIndicatorState, even tho is present in XKBlib.h AND being present in official git repository
 *  has no implementation in libX11.so library AND has no implementation in official git repository.
 *
 * PFN_XkbGetDeviceIndicatorState dl_XkbGetDeviceIndicatorState;
 * */
PFN_XkbGetIndicatorMap dl_XkbGetIndicatorMap;
PFN_XkbSetIndicatorMap dl_XkbSetIndicatorMap;
PFN_XkbGetNamedIndicator dl_XkbGetNamedIndicator;
PFN_XkbGetNamedDeviceIndicator dl_XkbGetNamedDeviceIndicator;
PFN_XkbSetNamedIndicator dl_XkbSetNamedIndicator;
PFN_XkbSetNamedDeviceIndicator dl_XkbSetNamedDeviceIndicator;
PFN_XkbLockModifiers dl_XkbLockModifiers;
PFN_XkbLatchModifiers dl_XkbLatchModifiers;
PFN_XkbLockGroup dl_XkbLockGroup;
PFN_XkbLatchGroup dl_XkbLatchGroup;
PFN_XkbSetServerInternalMods dl_XkbSetServerInternalMods;
PFN_XkbSetIgnoreLockMods dl_XkbSetIgnoreLockMods;
PFN_XkbVirtualModsToReal dl_XkbVirtualModsToReal;
PFN_XkbComputeEffectiveMap dl_XkbComputeEffectiveMap;
PFN_XkbInitCanonicalKeyTypes dl_XkbInitCanonicalKeyTypes;
PFN_XkbAllocKeyboard dl_XkbAllocKeyboard;
PFN_XkbFreeKeyboard dl_XkbFreeKeyboard;
PFN_XkbAllocClientMap dl_XkbAllocClientMap;
PFN_XkbAllocServerMap dl_XkbAllocServerMap;
PFN_XkbFreeClientMap dl_XkbFreeClientMap;
PFN_XkbFreeServerMap dl_XkbFreeServerMap;
PFN_XkbAddKeyType dl_XkbAddKeyType;
PFN_XkbAllocIndicatorMaps dl_XkbAllocIndicatorMaps;
PFN_XkbFreeIndicatorMaps dl_XkbFreeIndicatorMaps;
PFN_XkbGetMap dl_XkbGetMap;
PFN_XkbGetUpdatedMap dl_XkbGetUpdatedMap;
PFN_XkbGetMapChanges dl_XkbGetMapChanges;
PFN_XkbRefreshKeyboardMapping dl_XkbRefreshKeyboardMapping;
PFN_XkbGetKeyTypes dl_XkbGetKeyTypes;
PFN_XkbGetKeySyms dl_XkbGetKeySyms;
PFN_XkbGetKeyActions dl_XkbGetKeyActions;
PFN_XkbGetKeyBehaviors dl_XkbGetKeyBehaviors;
PFN_XkbGetVirtualMods dl_XkbGetVirtualMods;
PFN_XkbGetKeyExplicitComponents dl_XkbGetKeyExplicitComponents;
PFN_XkbGetKeyModifierMap dl_XkbGetKeyModifierMap;
PFN_XkbGetKeyVirtualModMap dl_XkbGetKeyVirtualModMap;
PFN_XkbAllocControls dl_XkbAllocControls;
PFN_XkbFreeControls dl_XkbFreeControls;
PFN_XkbGetControls dl_XkbGetControls;
PFN_XkbSetControls dl_XkbSetControls;
PFN_XkbNoteControlsChanges dl_XkbNoteControlsChanges;
PFN_XkbAllocCompatMap dl_XkbAllocCompatMap;
PFN_XkbFreeCompatMap dl_XkbFreeCompatMap;
PFN_XkbGetCompatMap dl_XkbGetCompatMap;
PFN_XkbSetCompatMap dl_XkbSetCompatMap;
/* NOTE(yakub):
 *  XkbAddSymInterpret, even tho is present in XKBlib.h AND being present in official git repository
 *  has no implementation in libX11.so library AND has no implementation in official git repository.
 *
 * PFN_XkbAddSymInterpret dl_XkbAddSymInterpret;
 * */
PFN_XkbAllocNames dl_XkbAllocNames;
PFN_XkbGetNames dl_XkbGetNames;
PFN_XkbSetNames dl_XkbSetNames;
PFN_XkbChangeNames dl_XkbChangeNames;
PFN_XkbFreeNames dl_XkbFreeNames;
PFN_XkbGetState dl_XkbGetState;
PFN_XkbSetMap dl_XkbSetMap;
PFN_XkbChangeMap dl_XkbChangeMap;
PFN_XkbSetDetectableAutoRepeat dl_XkbSetDetectableAutoRepeat;
PFN_XkbGetDetectableAutoRepeat dl_XkbGetDetectableAutoRepeat;
PFN_XkbSetAutoResetControls dl_XkbSetAutoResetControls;
PFN_XkbGetAutoResetControls dl_XkbGetAutoResetControls;
PFN_XkbSetPerClientControls dl_XkbSetPerClientControls;
PFN_XkbGetPerClientControls dl_XkbGetPerClientControls;
PFN_XkbCopyKeyType dl_XkbCopyKeyType;
PFN_XkbCopyKeyTypes dl_XkbCopyKeyTypes;
PFN_XkbResizeKeyType dl_XkbResizeKeyType;
PFN_XkbResizeKeySyms dl_XkbResizeKeySyms;
PFN_XkbResizeKeyActions dl_XkbResizeKeyActions;
PFN_XkbChangeTypesOfKey dl_XkbChangeTypesOfKey;
PFN_XkbChangeKeycodeRange dl_XkbChangeKeycodeRange;
PFN_XkbListComponents dl_XkbListComponents;
PFN_XkbFreeComponentList dl_XkbFreeComponentList;
PFN_XkbGetKeyboard dl_XkbGetKeyboard;
PFN_XkbGetKeyboardByName dl_XkbGetKeyboardByName;
PFN_XkbKeyTypesForCoreSymbols dl_XkbKeyTypesForCoreSymbols;
PFN_XkbApplyCompatMapToKey dl_XkbApplyCompatMapToKey;
PFN_XkbUpdateMapFromCore dl_XkbUpdateMapFromCore;
PFN_XkbAddDeviceLedInfo dl_XkbAddDeviceLedInfo;
PFN_XkbResizeDeviceButtonActions dl_XkbResizeDeviceButtonActions;
PFN_XkbAllocDeviceInfo dl_XkbAllocDeviceInfo;
PFN_XkbFreeDeviceInfo dl_XkbFreeDeviceInfo;
PFN_XkbNoteDeviceChanges dl_XkbNoteDeviceChanges;
PFN_XkbGetDeviceInfo dl_XkbGetDeviceInfo;
PFN_XkbGetDeviceInfoChanges dl_XkbGetDeviceInfoChanges;
PFN_XkbGetDeviceButtonActions dl_XkbGetDeviceButtonActions;
PFN_XkbGetDeviceLedInfo dl_XkbGetDeviceLedInfo;
PFN_XkbSetDeviceInfo dl_XkbSetDeviceInfo;
PFN_XkbChangeDeviceInfo dl_XkbChangeDeviceInfo;
PFN_XkbSetDeviceLedInfo dl_XkbSetDeviceLedInfo;
PFN_XkbSetDeviceButtonActions dl_XkbSetDeviceButtonActions;
PFN_XkbToControl dl_XkbToControl;
PFN_XkbSetDebuggingFlags dl_XkbSetDebuggingFlags;
PFN_XkbApplyVirtualModChanges dl_XkbApplyVirtualModChanges;
PFN_XkbUpdateActionVirtualMods dl_XkbUpdateActionVirtualMods;
PFN_XkbUpdateKeyTypeVirtualMods dl_XkbUpdateKeyTypeVirtualMods;

# endif /* DL_IMPL */
#endif /* _dl_x11_h_ */
