#include <stdio.h>
#include <X11/X.h>
#include <X11/Xlib.h>

#define DL_IMPL
#include "../dl-xlib.h"

int main(int ac, char **av) {
	Display	*display;
	Window	root;
	Window	window;
	Atom	atom;

	dl_loadXlib();
	display = XOpenDisplay(0);
	root = DefaultRootWindow(display);
	window = XCreateSimpleWindow(display, root, 0, 0, 800, 600, 0, 0, 0xff0f0f0f);
	atom = XInternAtom(display, "WM_DELETE_WINDOW", 0);

	XStoreName(display, window, "dl 1.0 - Xlib Example");
	XSetWMProtocols(display, window, &atom, 1);
	XMapWindow(display, window);

	for (bool exit = false; !exit; ) {
		XEvent	event;

		while (XPending(display)) {
			XNextEvent(display, &event);
			switch (event.type) {
				case (ClientMessage): {
					exit = (event.xclient.data.l[0] == atom);
				} break;
			}
		}
	}

	XUnmapWindow(display, window);
	XDestroyWindow(display, window);
	XCloseDisplay(display);
	dl_unloadXlib();

	return (0);
}
