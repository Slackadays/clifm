/* navigation.h */

/*
 * This file is part of CliFM
 * 
 * Copyright (C) 2016-2022, L. Abramovich <johndoe.arch@outlook.com>
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

#ifndef NAVIGATION_H
#define NAVIGATION_H

int back_function(char **comm);
int forth_function(char **comm);
int xchdir(char *dir, const int set_title);
int cd_function(char *new_path, const int print_error);
char *fastback(char *str);
int handle_workspaces(char *str);
void print_dirhist(void);
int backdir(char *str);
char **get_bd_matches(const char *str, int *n, int mode);

#endif /* NAVIGATION_H */
