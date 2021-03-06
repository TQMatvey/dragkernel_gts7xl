/*
 * Copyright (c) 2019-2020 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/**
 * DOC: Contains p2p public data structure definitions
 */

#ifndef _WLAN_P2P_API_H_
#define _WLAN_P2P_API_H_

#include <qdf_types.h>
#include <wlan_objmgr_vdev_obj.h>

/**
 * wlan_p2p_check_oui_and_force_1x1() - Function to get P2P client device
 * attributes from assoc request frames
 * @assoc_ie: pointer to assoc request frame IEs
 * @ie_len: length of the assoc request frame IE
 *
 * When assoc request is received from P2P STA device, this function checks
 * for specific OUI present in the P2P device info attribute. The caller should
 * take care of checking if this is called only in P2P GO mode.
 *
 * Return: True if OUI is present, else false.
 */
bool wlan_p2p_check_oui_and_force_1x1(uint8_t *assoc_ie, uint32_t ie_len);

/**
 * wlan_p2p_cleanup_roc_by_vdev() - Cleanup roc request by vdev
 * @vdev: pointer to vdev object
 *
 * This function call P2P API to cleanup roc request by vdev
 *
 * Return: QDF_STATUS_SUCCESS - in case of success
 */
QDF_STATUS wlan_p2p_cleanup_roc_by_vdev(struct wlan_objmgr_vdev *vdev);

/**
 * wlan_p2p_status_connect() - Update P2P connection status
 * @vdev: vdev context
 *
 * Updates P2P connection status by up layer when connecting.
 *
 * Return: QDF_STATUS_SUCCESS - in case of success
 */
QDF_STATUS wlan_p2p_status_connect(struct wlan_objmgr_vdev *vdev);

#endif
