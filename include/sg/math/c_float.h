/**
 * c_float.h
 * Extended API for regular floating-pointer number in C.
 */

#ifndef LIBSG_C_FLOAT_H
#define LIBSG_C_FLOAT_H

#include <sg/sg.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/**
 * TODO:
 * Add overflow check.
 */
 
enum sg_c_float_type {
    SGCFLOATTYPE_SFLOAT,  /* float, it is always signed */
    SGCFLOATTYPE_SDOUBLE  /* double, it is always signed */
};

/* number comparison results */
enum sg_c_float_cmp {
    SGCFLOATCMP_A_BIGGER = 0, /* Left number is bigger than right. */
    SGCFLOATCMP_EQUALS   = 1, /* Left number equals right. */
    SGCFLOATCMP_B_BIGGER = 2  /* Right number is bigger than left. */
};

enum sg_c_float_cmp sg_c_float_cmp_f(float a, float b);

enum sg_c_float_cmp sg_c_float_cmp_d(double a, double b);

int sg_c_float_is_zero_f(float num);

int sg_c_float_is_zero_d(double num);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* LIBSG_C_FLOAT_H */