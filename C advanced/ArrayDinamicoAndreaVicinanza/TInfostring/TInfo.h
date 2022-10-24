/*
 * TInfo: tipo elementare
 */

#ifndef TINFO_H
#define TINFO_H

typedef char * TInfo;

int infoEqual (TInfo, TInfo);
int infoGreater (TInfo, TInfo);
int infoLess (TInfo, TInfo);
void infoPrint (TInfo);

#endif /* TINFO_H */
