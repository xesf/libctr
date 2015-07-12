/*
 * libctr - Library for Nintendo 3DS homebrew.
 * 
 * Copyright (C) 2015 The OpenCTR Project. 
 * 
 * This file is part of libctr. 
 * 
 * libctr is free software: you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License version 3 as 
 * published by the Free Software Foundation.
 * 
 * libctr is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License 
 * along with libctr. If not, see <http://www.gnu.org/licenses/>.
 */

#include "ctr/base.h"
#include "ctr/sys.h"
#include "ctr/error.h"

/*
 * Yes, this isn't thread-safe **YET**.
 *
 * I will make it so later, but right now I just want to
 * focus on my interface APIs.
 */
static int cerrorno = 0;

int cerror(void) {
	return cerrorno;
}

int* cerrorptr(void) {
	return &cerrorno;
}

