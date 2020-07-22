/* === This file is part of Calamares - <https://github.com/calamares> ===
 *
 *   SPDX-FileCopyrightText: 2020 Adriaan de Groot <groot@kde.org>
 *
 *   Calamares is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   Calamares is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with Calamares. If not, see <http://www.gnu.org/licenses/>.
 *
 *   SPDX-License-Identifier: GPL-3.0-or-later
 *   License-Filename: LICENSE
 *
 */
#ifndef CALAMARESCONFIG_H
#define CALAMARESCONFIG_H

#define CMAKE_INSTALL_PREFIX "/usr"
#define CMAKE_INSTALL_FULL_LIBEXECDIR "/usr/lib/libexec"
#define CMAKE_INSTALL_LIBDIR "/usr/lib"
#define CMAKE_INSTALL_FULL_LIBDIR "/usr/lib"
#define CMAKE_INSTALL_FULL_DATADIR "/usr/share/calamares"
#define CMAKE_INSTALL_FULL_SYSCONFDIR "/etc"

/*
 * These are feature-settings that affect consumers of Calamares
 * libraries as well; without Python-support in the libs, for instance,
 * there's no point in having a Python plugin.
 *
 * This list should match the one in CalamaresConfig.cmake
 * which is the CMake-time side of the same configuration.
 */
#define WITH_PYTHON
/* #undef WITH_PYTHONQT */
#define WITH_QML

#endif  // CALAMARESCONFIG_H
