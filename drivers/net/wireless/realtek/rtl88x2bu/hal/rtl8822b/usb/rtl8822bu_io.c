/******************************************************************************
 *
 * Copyright(c) 2015 - 2017 Realtek Corporation.
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
#define _RTL8822BU_IO_C_

#include <drv_types.h>		/* PADAPTER and etc. */

void rtl8822bu_set_intf_ops(struct _io_ops *pops)
{

	_rtw_memsetbu((u8 *)pops, 0, sizeof(struct _io_ops));

	pops->_read8 = &usb_read8bu;
	pops->_read16 = &usb_read16bu;
	pops->_read32 = &usb_read32bu;
	pops->_read_mem = &usb_read_membu;
	pops->_read_port = &usb_read_portbu;

	pops->_write8 = &usb_write8bu;
	pops->_write16 = &usb_write16bu;
	pops->_write32 = &usb_write32bu;
	pops->_writeN = &usb_writeNbu;

#ifdef CONFIG_USB_SUPPORT_ASYNC_VDN_REQ
	pops->_write8_async = &usb_async_write8;
	pops->_write16_async = &usb_async_write16;
	pops->_write32_async = &usb_async_write32;
#endif
	pops->_write_mem = &usb_write_membu;
	pops->_write_port = &usb_write_portbu;

	pops->_read_port_cancel = &usb_read_portbu_cancelbu;
	pops->_write_port_cancel = &usb_write_portbu_cancel;

#ifdef CONFIG_USB_INTERRUPT_IN_PIPE
	pops->_read_interrupt = &usb_read_interrupt;
#endif


}
