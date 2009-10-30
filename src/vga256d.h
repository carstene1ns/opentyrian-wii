/*
 * OpenTyrian Classic: A modern cross-platform port of Tyrian
 * Copyright (C) 2007-2009  The OpenTyrian Development Team
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */
#ifndef VGA256D_H
#define VGA256D_H

#include "opentyr.h"

void JE_pix( JE_word x, JE_word y, JE_byte c );
void JE_pix3( JE_word x, JE_word y, JE_byte c );
void JE_rectangle( JE_word a, JE_word b, JE_word c, JE_word d, JE_word e );
void JE_bar( JE_word a, JE_word b, JE_word c, JE_word d, JE_byte e );
void JE_c_bar( JE_word a, JE_word b, JE_word c, JE_word d, JE_byte e );
void JE_barShade( JE_word a, JE_word b, JE_word c, JE_word d );
void JE_barBright( JE_word a, JE_word b, JE_word c, JE_word d );

#endif /* VGA256D_H */

// kate: tab-width 4; vim: set noet:
