/******************************************************************************
 *
 * Copyright(c) 2013 - 2017 Realtek Corporation.
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
#include <drv_types.h>
#include <hal_btcoex_wifionly.h>
#include <hal_data.h>

void rtw_btcoex_wifionly_switchband_notifyx(PADAPTER padapter)
{
	hal_btcoex_wifionly_switchband_notify(padapter);
}

void rtw_btcoex_wifionly_scan_notifyx(PADAPTER padapter)
{
	hal_btcoex_wifionly_scan_notify(padapter);
}

void rtw_btcoex_wifionly_connect_notifyx(PADAPTER padapter)
{
	hal_btcoex_wifionly_connect_notify(padapter);
}

void rtw_btcoex_wifionly_hw_configx(PADAPTER padapter)
{
	hal_btcoex_wifionly_hw_config(padapter);
}

void rtw_btcoex_wifionly_initializex(PADAPTER padapter)
{
	hal_btcoex_wifionly_initlizevariables(padapter);
}

void rtw_btcoex_wifionly_AntInfoSettingx(PADAPTER padapter)
{
	hal_btcoex_wifionly_AntInfoSetting(padapter);
}
