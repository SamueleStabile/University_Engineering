/*
 * TInfo: tipo elementare
 */

#include <stdio.h>
#include "TInfo.h"
#include <string.h>

int infoEqual (TInfo info1, TInfo info2) {
    return (strcmp(info1,info2)==0);
}

int infoGreater (TInfo info1, TInfo info2) {
    return  (strcmp(info1,info2)>0);
}

int infoLess (TInfo info1, TInfo info2) {
    return  (strcmp(info1,info2)<0);
}

void infoPrint (TInfo info) {
    printf ("%s ", info);
}