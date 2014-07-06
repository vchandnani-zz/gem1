#include "gem1.h"
#include <ruby.h>

static VALUE object_first_cext_call(VALUE rb_self)
{
  printf("\n Hello Ruby from C! \n");
}

void
Init_gem1(void)
{
  rb_define_method(rb_cObject, "first_cext_call", object_first_cext_call, 0);
}
