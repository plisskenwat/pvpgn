/*
* Copyright (C) 2014  HarpyWar (harpywar@gmail.com)
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/
#ifndef INCLUDED_LOCALIZATION_TYPES
#define INCLUDED_LOCALIZATION_TYPES

namespace pvpgn
{
	namespace bnetd
	{

	}
}

#endif

#ifndef JUST_NEED_TYPES
#ifndef INCLUDED_LOCALIZATION_PROTOS
#define INCLUDED_LOCALIZATION_PROTOS

#define JUST_NEED_TYPES
# include <string>
# include "common/format.h"
#undef JUST_NEED_TYPES

namespace pvpgn
{

	namespace bnetd
	{
		extern int i18n_load(void);
		extern int i18n_reload(void);
		//extern const char * localize(t_connection * c, char const * text);


		extern std::string i18n_filename(const char * filename, t_tag gamelang);

#define _VARIADIC_MAX 10
		extern std::string _localize(t_connection * c, const char * func, const char *fmt, const fmt::ArgList &args);
		FMT_VARIADIC(std::string, _localize, t_connection *, const char *, const char *)
		#define localize(c, fmt, ...) _localize(c, __FUNCTION__, fmt, __VA_ARGS__)
		//#define localize(c, fmt) _localize(c, __FUNCTION__, fmt)

	}

}

/*****/
#endif
#endif
