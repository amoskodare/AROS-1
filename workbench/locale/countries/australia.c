/*
    Copyright (C) 1995-1997 AROS - The Amiga Replacement OS
    $Id$

    Desc: Country data for australia.
    Lang:
*/

#include <exec/types.h>
#include <libraries/locale.h>
#include <prefs/locale.h>

/* australia.country: Iain Templeton, iain@ugh.net.au */
struct CountryPrefs australiaPrefs =
{
    /* Reserved */
    { 0, 0, 0, 0 },

    /* The country codes in the past have been rather inconsistant,
       sometimes they are 1 character, 2 chars or 3. It would be nice
       to have some consistency. Maybe use the 3 character name from
       ISO 3166?
    */

    /* Country code, telephone code, measuring system */
    'AUS\x00', 61, MS_ISO,

    /* Date time format, date format, time format */
    "%A %B %e %Y %I:%M%p",
    "%A %B %e %Y",
    "%I:%M:%S%p",

    /* Short datetime, short date, short time formats */
    "%e/%m/%y %I:%M%p",
    "%e/%m/%y",
    "%I:%M%p",

    /* Decimal point, group separator, frac group separator */
    ".", " ", "\x00",

    /* For grouping rules, see <libraries/locale.h> */

    /* Grouping, Frac Grouping */
    "\x03\x00", "\x00",

    /* Mon dec pt, mon group sep, mon frac group sep */
    ".", " ", "\x00",

    /* Mon Grouping, Mon frac grouping */
    "\x03\x00", "\x00",

    /* Mon Frac digits, Mon IntFrac digits, then number of digits in
       the fractional part of the money value. Most countries that
       use dollars and cents, would have 2 for this value

       (As would many of those you don't).
    */
    2, 2,

    /* Currency symbol, Small currency symbol */
    "$", "c",

    /* Int CS, this is the ISO 4217 symbol, followed by the character to
       separate that symbol from the rest of the money. (\x00 for none).
    */
    "AUD\x00",

    /* Mon +ve sign, +ve space sep, +ve sign pos, +ve cs pos */
    "\x00", SS_SPACE, SP_PREC_ALL, CSP_PRECEDES,

    /* Mon -ve sign, -ve space sep, -ve sign pos, -ve cs pos */
    "\x00", SS_NOSPACE, SP_PARENS, CSP_PRECEDES,

    /* Calendar type */
    CT_7SUN
};
