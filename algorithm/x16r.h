#ifndef X16R_H
#define X16R_H

#include "miner.h"

extern int x16R_test(unsigned char *pdata, const unsigned char *ptarget,
                    uint32_t nonce);
extern void x16R_regenhash(struct work *work);

#endif /* X16R_H */
