// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"", "internet", 5, 4},
    {"", "volume", 1, 5},
    /* {"", "battery", 60, 2}, */
    {"", "memory", 10, 2},
    /* {"", "cpu", 10, 2}, */
    /* {"", "packages", 3600, 1}, */
    /* {"", "torrent", 15, 2}, */
    {"", "clock", 60, 1},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
