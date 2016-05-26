/*
 * Copyright (C) 2016 Libre Space Foundation
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __IAC_H
#define __IAC_H

#define IAC_SUCCESS                     0
#define IAC_FAILURE                     -1

#define IAC_CAM_DEVICE                  0
#define IAC_CAM_FORMAT                  XI_RAW8
#define IAC_CAM_ACQUIRE_TIMEOUT         5000
#define IAC_IMAGE_FORMAT                "rgb"
#define IAC_IMAGE_DEPTH                 8
#define IAC_IMAGE_DIVS                  2
#define IAC_IMAGE_BLOB_FORMAT           "JPG"

/* Default values */
#define IAC_SPI_DEFAULT_DEVICE          "/dev/spidev1.0"

#endif