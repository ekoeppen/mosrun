/*
 mosrun - the MacOS MPW runtime emulator
 Copyright (C) 2013-2020  Matthias Melcher

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.

 The author can be contacted at mosrun AT matthiasm DOT com.
 The latest source code can be found at https://github.com/MatthiasWM/mosrun
 */


#ifndef __mosrun__resourcefork__
#define __mosrun__resourcefork__


#include "main.h"


extern unsigned int gResourceStart[];
extern unsigned int gResourceEnd[];


void dumpResourceMap();
mosHandle GetResource(unsigned int myResType, unsigned short myId);
mosHandle GetNamedResource(unsigned int myResType, const byte *pName);
unsigned int createA5World(mosHandle hCode0);
void readResourceMap();
const char *printAddr(unsigned int addr);


#endif /* defined(__mosrun__resourcefork__) */
