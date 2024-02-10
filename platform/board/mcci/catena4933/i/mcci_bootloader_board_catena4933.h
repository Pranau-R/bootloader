/*

Module: mcci_bootloader_board_catena4933.h

Function:
    Definitions for bootloader on MCCI Catena 4933.

Copyright and License:
    This file copyright (C) 2024 by

        MCCI Corporation
        3520 Krums Corners Road
        Ithaca, NY  14850

    See accompanying LICENSE file for copyright and license information.

Author:
    Pranau R, MCCI Corporation	February 2024

*/

#ifndef _mcci_bootloader_board_catena4933_h_
#define _mcci_bootloader_board_catena4933_h_    /* prevent multiple includes */

#pragma once

#include "mcci_bootloader_platform.h"
#include "mcci_bootloader_board_catena_abz.h"

MCCI_BOOTLOADER_BEGIN_DECLS

McciBootloaderPlatform_StorageInitFn_t
McciBootloaderBoard_Catena4933_storageInit;

MCCI_BOOTLOADER_END_DECLS

#endif /* _mcci_bootloader_board_catena4933_h_ */