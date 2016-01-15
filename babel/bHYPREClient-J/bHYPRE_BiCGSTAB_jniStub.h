/*
 * File:          bHYPRE_BiCGSTAB_jniStub.h
 * Symbol:        bHYPRE.BiCGSTAB-v1.0.0
 * Symbol Type:   class
 * Babel Version: 1.0.4
 * Description:   Client-side header code for bHYPRE.BiCGSTAB
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 */

#ifndef included_bHYPRE_BiCGSTAB_jniStub_h
#define included_bHYPRE_BiCGSTAB_jniStub_h

/**
 * Symbol "bHYPRE.BiCGSTAB" (version 1.0.0)
 * 
 * BiCGSTAB solver.
 * This calls Babel-interface matrix and vector functions, so it will work
 * with any consistent matrix, vector, and preconditioner classes.
 */

#ifndef included_bHYPRE_BiCGSTAB_IOR_h
#include "bHYPRE_BiCGSTAB_IOR.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif


#pragma weak bHYPRE_BiCGSTAB__connectI

#pragma weak bHYPRE_BiCGSTAB__rmicast

/**
 * Cast method for interface and class type conversions.
 */
struct bHYPRE_BiCGSTAB__object*
bHYPRE_BiCGSTAB__rmicast(
  void* obj, struct sidl_BaseInterface__object **_ex);

/**
 * RMI connector function for the class. (no addref)
 */
struct bHYPRE_BiCGSTAB__object*
bHYPRE_BiCGSTAB__connectI(const char * url, sidl_bool ar, struct 
  sidl_BaseInterface__object **_ex);

#ifdef __cplusplus
}
#endif
#endif
