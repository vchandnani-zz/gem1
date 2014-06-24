#include "gem1.h"

VALUE rb_mGem1;

void
Init_gem1(void)
{
  rb_mGem1 = rb_define_module("Gem1");
}
