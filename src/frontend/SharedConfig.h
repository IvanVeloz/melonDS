/*
    Copyright 2016-2021 Arisotura

    This file is part of melonDS.

    melonDS is free software: you can redistribute it and/or modify it under
    the terms of the GNU General Public License as published by the Free
    Software Foundation, either version 3 of the License, or (at your option)
    any later version.

    melonDS is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
    FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with melonDS. If not, see http://www.gnu.org/licenses/.
*/

#ifndef SHAREDCONFIG_H
#define SHAREDCONFIG_H

#include <string>

namespace Config
{

extern int ConsoleType;
extern bool DirectBoot;
extern bool SavestateRelocSRAM;

extern bool ExternalBIOSEnable;

extern std::string BIOS9Path;
extern std::string BIOS7Path;
extern std::string FirmwarePath;

extern std::string DSiBIOS9Path;
extern std::string DSiBIOS7Path;
extern std::string DSiFirmwarePath;
extern std::string DSiNANDPath;

}

#endif
