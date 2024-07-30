/* Generated by wayland-scanner 1.23.0 */

/*
 * Copyright © 2018 Simon Ser
 * Copyright © 2019 Andri Yngvason
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

#ifndef __has_attribute
# define __has_attribute(x) 0  /* Compatibility with non-clang compilers. */
#endif

#if (__has_attribute(visibility) || defined(__GNUC__) && __GNUC__ >= 4)
#define WL_PRIVATE __attribute__ ((visibility("hidden")))
#else
#define WL_PRIVATE
#endif

extern const struct wl_interface wl_buffer_interface;
extern const struct wl_interface wl_output_interface;
extern const struct wl_interface zwlr_screencopy_frame_v1_interface;

static const struct wl_interface *wlr_screencopy_unstable_v1_types[] = {
	NULL,
	NULL,
	NULL,
	NULL,
	&zwlr_screencopy_frame_v1_interface,
	NULL,
	&wl_output_interface,
	&zwlr_screencopy_frame_v1_interface,
	NULL,
	&wl_output_interface,
	NULL,
	NULL,
	NULL,
	NULL,
	&wl_buffer_interface,
	&wl_buffer_interface,
};

static const struct wl_message zwlr_screencopy_manager_v1_requests[] = {
	{ "capture_output", "nio", wlr_screencopy_unstable_v1_types + 4 },
	{ "capture_output_region", "nioiiii", wlr_screencopy_unstable_v1_types + 7 },
	{ "destroy", "", wlr_screencopy_unstable_v1_types + 0 },
};

WL_PRIVATE const struct wl_interface zwlr_screencopy_manager_v1_interface = {
	"zwlr_screencopy_manager_v1", 3,
	3, zwlr_screencopy_manager_v1_requests,
	0, NULL,
};

static const struct wl_message zwlr_screencopy_frame_v1_requests[] = {
	{ "copy", "o", wlr_screencopy_unstable_v1_types + 14 },
	{ "destroy", "", wlr_screencopy_unstable_v1_types + 0 },
	{ "copy_with_damage", "2o", wlr_screencopy_unstable_v1_types + 15 },
};

static const struct wl_message zwlr_screencopy_frame_v1_events[] = {
	{ "buffer", "uuuu", wlr_screencopy_unstable_v1_types + 0 },
	{ "flags", "u", wlr_screencopy_unstable_v1_types + 0 },
	{ "ready", "uuu", wlr_screencopy_unstable_v1_types + 0 },
	{ "failed", "", wlr_screencopy_unstable_v1_types + 0 },
	{ "damage", "2uuuu", wlr_screencopy_unstable_v1_types + 0 },
	{ "linux_dmabuf", "3uuu", wlr_screencopy_unstable_v1_types + 0 },
	{ "buffer_done", "3", wlr_screencopy_unstable_v1_types + 0 },
};

WL_PRIVATE const struct wl_interface zwlr_screencopy_frame_v1_interface = {
	"zwlr_screencopy_frame_v1", 3,
	3, zwlr_screencopy_frame_v1_requests,
	7, zwlr_screencopy_frame_v1_events,
};

