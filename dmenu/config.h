/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Hack:size=16"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */


static const char *colors[][3] = {
    /*               fg,              bg,             border   */
    [SchemeNorm] = { "#e4e9ff", "#141929", "#141929" },
    [SchemeSel] = { "#ffa578", "#5c94e0", "#5c94e0" },
    [SchemeOut] = { "#e4e9ff", "#DA6748", "#DA6748" },

    /* Define your 16 colors */
    [0] = { "#888A91", "#141929", "#141929" },  // color0, normbg, border
    [1] = { "#888A91", "#141929", "#141929" },  // color1
    [2] = { "#637F9A", "#141929", "#141929" },  // color2
    [3] = { "#ffa578", "#141929", "#141929" },  // color3
    [4] = { "#5c94e0", "#141929", "#141929" },  // color4
    [5] = { "#d295f6", "#141929", "#141929" },  // color5
    [6] = { "#95bef8", "#141929", "#141929" },  // color6
    [7] = { "#e4e9ff", "#141929", "#141929" },  // color7
    [8] = { "#5c94e0", "#141929", "#141929" },  // color8
    [9] = { "#ffa578", "#141929", "#141929" },  // color9
    [10] = { "#d295f6", "#141929", "#141929" }, // color10
    [11] = { "#95bef8", "#141929", "#141929" }, // color11
    [12] = { "#e4e9ff", "#141929", "#141929" }, // color12
    [13] = { "#d295f6", "#141929", "#141929" }, // color13
    [14] = { "#95bef8", "#141929", "#141929" }, // color14
    [15] = { "#e4e9ff", "#141929", "#141929" }, // color15
};





/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 10;
static unsigned int columns    = 1;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 0;
