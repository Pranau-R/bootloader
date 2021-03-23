/*

Module:	mccibootloaderboard_catenaabz_vectors.c

Function:
	Vectors for bootloader for Catenas based on Murata type-ABZ module.

Copyright and License:
	This file copyright (C) 2021 by

		MCCI Corporation
		3520 Krums Corners Road
		Ithaca, NY  14850

	See accompanying LICENSE file for copyright and license information.

Author:
	Terry Moore, MCCI Corporation	March 2021

*/

#include "mcci_bootloader_cm0plus.h"
#include "mcci_bootloader.h"

/****************************************************************************\
|
|	Manifest constants & typedefs.
|
\****************************************************************************/

static void McciBootloader_CatenaAbz_NotHandled(void);

/****************************************************************************\
|
|	Read-only data.
|
\****************************************************************************/

const Mcci_CortexVectors_t
gk_McciBootloader_CortexVectors =
	{
	.CortexVectors.vectors =
		{
		[0] = /* stack pointer */	(uint32_t) &g_McciBootloader_StackTop,
		[1] = /* entry point */		(uint32_t) McciBootloader_main,
		[2] = /* NMI */			(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[3] = /* HardFault */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[4] = /* reserved */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[5] = /* reserved */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[6] = /* reserved */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[7] = /* reserved */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[8] = /* reserved */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[9] = /* reserved */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[10] = /* reserved */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[11] = /* SVCall */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[12] = /* reserved */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[13] = /* reserved */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[14] = /* PendSV */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[15] = /* SysTick */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[16] = /* ExtInt(0) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[17] = /* ExtInt(1) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[18] = /* ExtInt(2) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[19] = /* ExtInt(3) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[20] = /* ExtInt(4) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[21] = /* ExtInt(5) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[22] = /* ExtInt(6) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[23] = /* ExtInt(7) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[24] = /* ExtInt(8) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[25] = /* ExtInt(9) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[26] = /* ExtInt(10) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[27] = /* ExtInt(11) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[28] = /* ExtInt(12) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[29] = /* ExtInt(13) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[30] = /* ExtInt(14) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[31] = /* ExtInt(15) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[32] = /* ExtInt(16) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[33] = /* ExtInt(17) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[34] = /* ExtInt(18) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[35] = /* ExtInt(19) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[36] = /* ExtInt(20) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[37] = /* ExtInt(21) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[38] = /* ExtInt(22) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[39] = /* ExtInt(23) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[40] = /* ExtInt(24) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[41] = /* ExtInt(25) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[42] = /* ExtInt(26) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[43] = /* ExtInt(27) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[44] = /* ExtInt(28) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[45] = /* ExtInt(29) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[46] = /* ExtInt(30) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		[47] = /* ExtInt(31) */		(uint32_t) McciBootloader_CatenaAbz_NotHandled,
		}
	};

/****************************************************************************\
|
|	Variables.
|
\****************************************************************************/


/****************************************************************************\
|
|	Code
|
\****************************************************************************/

/// \brief interrupt not handled; loop.
static void
McciBootloader_CatenaAbz_NotHandled(void)
	{
	while (true)
		;
	}

/**** end of mccibootloaderboard_catenaabz_vectors.c ****/