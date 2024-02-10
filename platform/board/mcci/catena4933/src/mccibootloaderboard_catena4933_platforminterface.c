/*

Module: mccibootloaderboard_catena4933_platforminterface.c

Function:
    gk_McciBootloaderPlatformInterface for MCCI Catena 4933 boards.

Copyright and License:
    This file copyright (C) 2024 by

        MCCI Corporation
        3520 Krums Corners Road
        Ithaca, NY  14850

    See accompanying LICENSE file for copyright and license information.

Author:
    Pranau R, MCCI Corporation	February 2024

*/

#include "mcci_bootloader_board_catena4933.h"

#include "mcci_bootloader_flash_mx25v8035f.h"

/****************************************************************************\
|
|   Manifest constants & typedefs.
|
\****************************************************************************/



/****************************************************************************\
|
|   Read-only data.
|
\****************************************************************************/

const McciBootloaderPlatform_Interface_t
gk_McciBootloaderPlatformInterface =
    {
    .pSystemInit = McciBootloaderBoard_CatenaAbz_systemInit,
    .pPrepareForLaunch = McciBootloaderBoard_CatenaAbz_prepareForLaunch,
    .pFail = McciBootloaderBoard_CatenaAbz_fail,
    .pDelayMs = McciBootloaderBoard_CatenaAbz_delayMs,
    .pGetUpdate = McciBootloaderBoard_CatenaAbz_getUpdate,
    .pSetUpdate = McciBootloaderBoard_CatenaAbz_setUpdate,
    .pSystemFlashErase = McciBootloader_Stm32L0_systemFlashErase,
    .pSystemFlashWrite = McciBootloader_Stm32L0_systemFlashWrite,
    .Storage =
        {
        .pInit = McciBootloaderBoard_Catena4933_storageInit,
        .pRead = McciBootloaderFlash_Mx25v8035f_storageRead,
        .pGetPrimaryAddress = McciBootloaderBoard_CatenaAbz_getPrimaryStorageAddress,
        .pGetFallbackAddress = McciBootloaderBoard_CatenaAbz_getFallbackStorageAddress,
        },
    .Spi =
        {
        .pInit = McciBootloaderBoard_CatenaAbz_spiInit,
        .pTransfer = McciBootloaderBoard_CatenaAbz_spiTransfer,
        },
    .Annunciator =
        {
        .pInit = McciBootloaderBoard_CatenaAbz_annunciatorInit,
        .pIndicateState = McciBootloaderBoard_CatenaAbz_annunciatorIndicateState,
        },
    };

/****************************************************************************\
|
|   Variables.
|
\****************************************************************************/



/**** end of mccibootloaderboard_catenaabz_platforminterface.c ****/