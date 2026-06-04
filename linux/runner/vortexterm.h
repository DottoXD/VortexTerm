#ifndef FLUTTER_VORTEX_TERM_H_
#define FLUTTER_VORTEX_TERM_H_

#include <gtk/gtk.h>

G_DECLARE_FINAL_TYPE(VortexTerm,
                     vortex_term,
                     VORTEX,
                     TERM,
                     GtkApplication)

/**
 * vortex_term_new:
 *
 * Creates a new Flutter-based application.
 *
 * Returns: a new #VortexTerm.
 */
VortexTerm* vortex_term_new();

#endif  // FLUTTER_VORTEX_TERM_H_
