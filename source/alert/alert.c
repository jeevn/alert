/** @file
    alert - render message in a modal dialog box
 
    Jeevan Rai 2017 - github.com/jeevn/alert

	@ingroup	UI  */

#include "ext.h"
#include "ext_obex.h"

typedef struct _ob { t_object ob; } t_ob;

void *ob_class;

void *_new(t_symbol *s, long argc, t_atom *argv) {
    t_ob *x = NULL;
    x = (t_ob *)object_alloc(ob_class);
    return (x); }

void assist(t_ob *x, void *b, long m, long a, char *s) {
    if (m == ASSIST_INLET) sprintf(s, "Message"); }

void anything(t_ob *x, t_symbol *s, long ac, t_atom *av) {
    char *p, q[140], *r = q; long pl=140;
    atom_gettext(ac, av, &pl, &p, OBEX_UTIL_ATOM_GETTEXT_DEFAULT);
    strcpy(q, s->s_name);
    strcat(q, " ");
    strcat(q, p);
    ouchstring(r); }

void ext_main(void *r) {
    t_class *c;
    c = class_new("alert", (method)_new, NULL, (long)sizeof(t_ob), 0L, A_GIMME, 0);
    class_addmethod(c, (method)anything, "anything", A_GIMME, 0);
    class_addmethod(c, (method)assist, "assist", A_CANT, 0);
    class_register(CLASS_BOX, c);
    ob_class = c; }