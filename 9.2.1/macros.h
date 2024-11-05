#pragma once
#ifndef MACROS_H
#define MACROS_H

#define SQR(x) ((x) * (x))                  
#define MAX(a, b) ((a) > (b) ? (a) : (b))     
#define MIN(a, b) ((a) < (b) ? (a) : (b))     
#define ABS(x) ((x) < 0 ? -(x) : (x))         

#define CALCULATE_W(x, y, z) ((z) > 1 ? MAX(SQR((x) - (z)), (x) - (y)) : MIN((x) - (y), (y) - (z)))

#define PRINTR(w) puts("Result:"); \
                  printf(#w " = %.2f\n", (double)(w))

#endif //

