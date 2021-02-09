
#include "growtree.h"

#include "string.h"

void grow_tree_c(int *parent_ne, int *surface_elems, double *angle_max, double *angle_min, double *branch_fraction, double *length_limit, double *shortest_length, double *rotation_limit, int *to_export, const char *filename, int *filename_len);

void grow_tree(int parent_ne, int surface_elems, double angle_max, double angle_min, double branch_fraction, double length_limit, double shortest_length, double rotation_limit,int to_export, const char *filename)
{
  int filename_len = strlen(filename);
  grow_tree_c(&parent_ne, &surface_elems, &angle_max, &angle_min, &branch_fraction, &length_limit, &shortest_length, &rotation_limit, &to_export, filename, &filename_len);
}
