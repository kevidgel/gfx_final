#ifndef PARSER_H
#define PARSER_H

#include "matrix.h"
#include "ml6.h"
#include "stack.h"

void parse_file ( char * filename,
                  struct stack * csystems,
                  struct matrix * edges,
                  struct matrix * polygons,
                  screen s, zbuffer zb,
                  double *view, color ambient, double light[2][3],
                  double *areflect, double *sreflect, double *dreflect);

#endif
