/*   -*- buffer-read-only: t -*- vi: set ro:
 *
 *  DO NOT EDIT THIS FILE   (strsignal.h)
 *
 *  It has been AutoGen-ed
 *  From the definitions    strsignal.def
 *  and the template file   strsignal
 *
 *  Generated for a 4.15.0-20-generic Linux platform
 *
 *  strsignal Copyright (C) 1992-2017 by Bruce Korb - all rights reserved
 *
 *  AutoGen is free software: you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  AutoGen is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef MAX_SIGNAL_NUMBER
#define MAX_SIGNAL_NUMBER   22
#define SIGNAL_IN_RANGE(s)  (((unsigned)s) <= MAX_SIGNAL_NUMBER)
#define SIGNAL_NAME(s)      (zSigNames + sigNameOffset[s])
#define SIGNAL_INFO(s)      (zSigInfo  + sigInfoOffset[s])

static char const zSigNames[] =
    "INVALID\0"    "SIGSIGHUP\0"  "SIGSIGINT\0"  "SIGSIGQUIT\0" "SIGSIGILL\0"
    "SIGSIGTRAP\0" "SIGSIGABRT\0" "SIGSIGFPE\0"  "SIGSIGKILL\0" "SIGSIGUSR1\0"
    "SIGSIGSEGV\0" "SIGSIGUSR2\0" "SIGSIGPIPE\0" "SIGSIGALRM\0" "SIGSIGTERM\0"
    "SIGSIGCHLD\0" "SIGSIGCONT\0" "SIGSIGSTOP\0" "SIGSIGTSTP\0" "SIGSIGTTIN\0"
    "SIGSIGTTOU\0";

static const unsigned int sigNameOffset[] = {
    0,   8,   18,  28,  39,  49,  60,  0,   71,  81,  92,  103, 114, 125, 136,
    147, 0,   158, 169, 180, 191, 202, 213 };

#ifndef HAVE_SYS_SIGLIST
static char const zSigInfo[] =
    /*   0 */ "Signal 0 invalid\0"
    /*   1 */ "Hangup (POSIX).\0"
    /*   2 */ "Interrupt (ANSI).\0"
    /*   3 */ "Quit (POSIX).\0"
    /*   4 */ "Illegal instruction (ANSI).\0"
    /*   5 */ "Trace trap (POSIX).\0"
    /*   6 */ "Abort (ANSI).\0"
    /*   7 */ "Signal 7 invalid\0"
    /*   8 */ "Floating-point exception (ANSI).\0"
    /*   9 */ "Kill, unblockable (POSIX).\0"
    /*  10 */ "User-defined signal 1 (POSIX).\0"
    /*  11 */ "Segmentation violation (ANSI).\0"
    /*  12 */ "User-defined signal 2 (POSIX).\0"
    /*  13 */ "Broken pipe (POSIX).\0"
    /*  14 */ "Alarm clock (POSIX).\0"
    /*  15 */ "Termination (ANSI).\0"
    /*  16 */ "Signal 16 invalid\0"
    /*  17 */ "Child status has changed (POSIX).\0"
    /*  18 */ "Continue (POSIX).\0"
    /*  19 */ "Stop, unblockable (POSIX).\0"
    /*  20 */ "Keyboard stop (POSIX).\0"
    /*  21 */ "Background read from tty (POSIX).\0"
    /*  22 */ "Background write to tty (POSIX).\0";

static const unsigned int sigInfoOffset[] = {
    0,   17,  33,  51,  65,  93,  113, 127, 144, 177, 204, 235, 266, 297, 318,
    339, 359, 377, 411, 429, 456, 479, 513 };

#endif /* MAX_SIGNAL_NUMBER */

#ifndef HAVE_STRSIGNAL
extern char * strsignal( int signo );
#endif

#ifdef DEBUG_STRSIGNAL
#include <stdio.h>

int
main(int argc, char ** argv)
{
    int sig = 0;
    fputs( "Sig  Sig-Name    Description\n"
           "===  ========    ===========\n", stdout );
    do {
        printf( "%3d  %-10s  %s\n", sig, SIGNAL_NAME(sig),
                SIGNAL_INFO(sig) );
        ++sig;
    } while (SIGNAL_IN_RANGE(sig));
    return 0;
}
#endif /* DEBUG */
#endif /* MAX_SIGNAL_NUMBER */
