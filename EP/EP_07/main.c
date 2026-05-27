#include "dynvec.h"
#include <stdio.h>

int main()
{
  DynVec *dv1 = dv_create();
  dv_insert(dv1, 1);
  dv_insert(dv1, 3);
  dv_insert(dv1, 6);

  DynVec *dv2 = dv_create();
  dv_insert(dv2, 3);
  dv_insert(dv2, 6);
  dv_insert(dv2, 10);
  dv_insert(dv2, 20);

  DynVec *v_uniao = dv_union(dv1, dv2);
  dv_print_values(v_uniao);

  DynVec *v_inter = dv_intersection(dv1, dv2);
  dv_print_values(v_inter);

  dv_free(dv1);
  dv_free(dv2);
  dv_free(v_uniao);
  dv_free(v_inter);

  return 0;
}