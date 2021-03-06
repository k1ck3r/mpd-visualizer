#ifndef VISUALIZER_INT_H
#define VISUALIZER_INT_H

#include "visualizer.h"

#ifdef __cplusplus
extern "C" {

#endif
void
visualizer_set_image_cb(void (*lua_image_cb)(lua_State *L, intptr_t table_ref, unsigned int frames, uint8_t *image));

static inline int
visualizer_grab_audio(visualizer *vis, int fd);

static inline int
visualizer_make_frames(visualizer *vis);

static int
visualizer_free(visualizer *vis);

static void
visualizer_load_scripts(visualizer *vis);


#ifdef __cplusplus
}
#endif

#endif
