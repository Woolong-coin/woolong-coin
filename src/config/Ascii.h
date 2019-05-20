// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
    "\n                                                             \n"
    " __      __                  ___                               \n"
    "/\ \  __/\ \                /\_ \                              \n"
    "\ \ \/\ \ \ \    ___     ___\//\ \     ___     ___      __     \n"
    " \ \ \ \ \ \ \  / __`\  / __`\\ \ \   / __`\ /' _ `\  /'_ `\   \n"
    "  \ \ \_/ \_\ \/\ \L\ \/\ \L\ \\_\ \_/\ \L\ \/\ \/\ \/\ \L\ \  \n"
    "   \ `\___x___/\ \____/\ \____//\____\ \____/\ \_\ \_\ \____ \ \n"
    "    '\/__//__/  \/___/  \/___/ \/____/\/___/  \/_/\/_/\/___L\ \\n"
    "                                                        /\____/\n"
    "                                                        \_/__/ \n";

const std::string nonWindowsAsciiArt =
    "\n                                                             \n"
    " __      __                  ___                               \n"
    "/\ \  __/\ \                /\_ \                              \n"
    "\ \ \/\ \ \ \    ___     ___\//\ \     ___     ___      __     \n"
    " \ \ \ \ \ \ \  / __`\  / __`\\ \ \   / __`\ /' _ `\  /'_ `\   \n"
    "  \ \ \_/ \_\ \/\ \L\ \/\ \L\ \\_\ \_/\ \L\ \/\ \/\ \/\ \L\ \  \n"
    "   \ `\___x___/\ \____/\ \____//\____\ \____/\ \_\ \_\ \____ \ \n"
    "    '\/__//__/  \/___/  \/___/ \/____/\/___/  \/_/\/_/\/___L\ \\n"
    "                                                        /\____/\n"
    "                                                        \_/__/ \n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
