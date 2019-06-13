/*
 * fanet.h
 *
 *  Created on: May 22, 2017
 *      Author: sid
 */

#ifndef FANET_H_
#define FANET_H_

#ifdef __cplusplus
extern "C" {
#endif

/* 
 * no FLARM for open source firmware
 * CE 13 June 2019
 * 
 * #define FLARM
 * 
 */
 
#include "serial.h"

void fanet_init(serial_t *serial);
void fanet_loop(void);

void fanet_pps_int(void);

#ifdef __cplusplus
}
#endif

#endif /* FANET_H_ */
