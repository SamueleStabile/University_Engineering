/*
 * TInfo: tipo elementare
 */

#include <stdio.h>
#include "TInfo.h"

int infoEqual (TInfo info1, TInfo info2) {
    return info1 == info2;
}

int infoGreater (TInfo info1, TInfo info2) {
    return  info1 > info2;
}

int infoLess (TInfo info1, TInfo info2) {
    return  info1 < info2;
}

void infoPrint (TInfo info) {
    printf ("%d ", info);
}