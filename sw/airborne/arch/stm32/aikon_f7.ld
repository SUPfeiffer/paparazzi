/*
 * Copyright (C) 2020 Sven Pfeiffer
 *
 * This file is part of Paparazzi.
 *
 * Paparazzi is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * Paparazzi is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Paparazzi; see the file COPYING.  If not, write to
 * the Free Software Foundation, 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

/* Linker script for Aikon F7 (STM32F722RET6), 512K flash, 256+16+4K RAM). */
/* Flash is accessible via ITCM or AXIM interface. */

/* Complete Memory Map:
	FLASH_ITCM (rx) : ORIGIN = 0x00200000, LENGTH = 512K
	FLASH_AXIM (rx) : ORIGIN = 0x08000000, LENGTH = 512K
	RAM_ITCM (rwx) 	: ORIGIN = 0x00000000, LENGTH = 16K
	RAM_DTCM (rwx) 	: ORIGIN = 0x20000000, LENGTH = 64K
	SRAM1 (rwx) 	: ORIGIN = 0x20010000, LENGTH = 176K
	SRAM2 (rwx) 	: ORIGIN = 0x2003C000, LENGTH = 16K
*/


/* Define memory regions. */
MEMORY
{
	/* Simplified for use with common ld script*/
	ram (rwx)	: ORIGIN = 0x20000000, LENGTH = 256K
	/* Use entire memory, no flash for persistent settings*/
	rom (rx)	: ORIGIN = 0x08000000, LENGTH = 512K

}

/* Include the common ld script. */
INCLUDE libopencm3_stm32f7.ld