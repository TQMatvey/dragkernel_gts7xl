/******************************************************************************
 *
 * Copyright(c) 2007 - 2017 Realtek Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 *****************************************************************************/

#ifndef __halrf_psd_H__
#define __halrf_psd_H__


struct _halrf_psd_data {
	u32 point;
	u32 start_point;
	u32 stop_point;
	u32 average;
	u32 buf_size;
	u32 psd_data[256];
	u32 psd_progress;
};

u32
halrf_psd_initbu(
	void *dm_void);

void
_halrf_iqk_psdbu_init_8723f(
	void *dm_void,
	boolean onoff);

u64
halrf_get_iqk_psd_databu(
	void *dm_void,
	u32 point);

u32
halrf_psd_querybu(
	void *dm_void,
	u32 *outbuf,
	u32 buf_size);

u32
halrf_psd_init_querybu(
	void *dm_void,
	u32 *outbuf,
	u32 point,
	u32 start_point,
	u32 stop_point,
	u32 average,
	u32 buf_size);

#endif /*#__halrf_psd_H__*/
