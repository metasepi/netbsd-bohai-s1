/* xgettext Lisp backend.
   Copyright (C) 2001-2003 Free Software Foundation, Inc.
   Written by Bruno Haible <haible@clisp.cons.org>, 2001.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.  */


#define EXTENSIONS_LISP \
  { "lisp",      "Lisp"     },						\

#define SCANNERS_LISP \
  { "Lisp",		extract_lisp,					\
			&flag_table_lisp, &formatstring_lisp, NULL },	\

/* Scan a Lisp file and add its translatable strings to mdlp.  */
extern void extract_lisp (FILE *fp, const char *real_filename,
			  const char *logical_filename,
			  flag_context_list_table_ty *flag_table,
			  msgdomain_list_ty *mdlp);


/* Handling of options specific to this language.  */

extern void x_lisp_extract_all (void);
extern void x_lisp_keyword (const char *name);

extern void init_flag_table_lisp (void);
