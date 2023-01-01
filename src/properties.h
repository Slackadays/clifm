/* properties.h */

/*
 * This file is part of CliFM
 * 
 * Copyright (C) 2016-2023, L. Abramovich <johndoe.arch@outlook.com>
 * All rights reserved.

 * CliFM is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * CliFM is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
*/

#ifndef PROPERTIES_H
#define PROPERTIES_H

__BEGIN_DECLS

int properties_function(char **);
int print_entry_props(const struct fileinfo *, size_t, const size_t,
	const size_t, const size_t, const size_t);
int set_file_perms(char **);
int set_file_owner(char **);

__END_DECLS

#endif /* PROPERTIES_H */
