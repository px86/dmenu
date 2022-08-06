static int topbar = 1;			/* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;		/* -c option; centers dmenu on screen */
static int min_width = 500;		/* minimum width when centered */
static int fuzzy = 1;			/* -F  option; if 0, dmenu doesn't use fuzzy matching     */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Victor Mono:style=Bold:size=12",
	"monospace:size=10"
};

static const char *prompt = NULL;		/* -p  option; prompt to the left of input field */

#define DRACULA /* DRACULA, NORD, OCEANIC_NEXT */
#include "themes.h"

static const char *colors[SchemeLast][2] = {
					/*  fg         bg     */
	[SchemeNorm] = { FOREGROUND, BACKGROUND },
	[SchemeSel]  = { COLOR2, COLOR0 },
	[SchemeSelHighlight]  = { COLOR3, COLOR0 },
	[SchemeNormHighlight] = { COLOR3, BACKGROUND },
	[SchemeOut] = { "#000000", "#00ffff" },
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int lineheight = 0; /* -h option; minimum height of a menu line */
static unsigned int columns    = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 4;
