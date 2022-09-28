/*   -*- buffer-read-only: t -*- vi: set ro:
 *
 *  DO NOT EDIT THIS FILE   (directive.h)
 *
 *  It has been AutoGen-ed
 *  From the definitions    directive.def
 *  and the template file   str2enum
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name ``Bruce Korb'' nor the name of any other
 *    contributor may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * str2enum IS PROVIDED BY Bruce Korb ``AS IS'' AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL Bruce Korb OR ANY OTHER CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Command/Keyword Dispatcher
 */
#ifndef STR2ENUM_DIRECTIVE_H_GUARD
#define STR2ENUM_DIRECTIVE_H_GUARD 1
/** \file directive.h
 * Header for string to enumeration values and back again.
 * @addtogroup autogen
 * @{
 */
#include <sys/types.h>
#ifndef MISSING_INTTYPES_H
# include <inttypes.h>
#endif

typedef enum {
    DIR_INVALID = 0,
    DIR_ASSERT   = 1,
    DIR_DEFINE   = 2,
    DIR_ELIF     = 3,
    DIR_ELSE     = 4,
    DIR_ENDIF    = 5,
    DIR_ENDMAC   = 6,
    DIR_ENDSHELL = 7,
    DIR_ERROR    = 8,
    DIR_IDENT    = 9,
    DIR_IF       = 10,
    DIR_IFDEF    = 11,
    DIR_IFNDEF   = 12,
    DIR_INCLUDE  = 13,
    DIR_LET      = 14,
    DIR_LINE     = 15,
    DIR_MACDEF   = 16,
    DIR_OPTION   = 17,
    DIR_PRAGMA   = 18,
    DIR_SHELL    = 19,
    DIR_UNDEF    = 20,
    DIR_COUNT
} directive_enum_t;

extern directive_enum_t
find_directive(char const * str);

extern char const *
directive_name(directive_enum_t id);

extern char *
doDir_directive_disp(char const * str,
	char * scan_next);

typedef char * (doDir_hdl_t)(
	directive_enum_t id, char const * str,
	char * scan_next);

doDir_hdl_t
    doDir_invalid,  doDir_assert,   doDir_define,   doDir_elif,
    doDir_else,     doDir_endif,    doDir_endmac,   doDir_endshell,
    doDir_error,    doDir_ident,    doDir_if,       doDir_ifdef,
    doDir_ifndef,   doDir_include,  doDir_let,      doDir_line,
    doDir_macdef,   doDir_option,   doDir_pragma,   doDir_shell,
    doDir_undef;

/** @} */#endif /* STR2ENUM_DIRECTIVE_H_GUARD */
/* end of directive.h */
