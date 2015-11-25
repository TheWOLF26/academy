/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:10:02 by anflorea          #+#    #+#             */
/*   Updated: 2015/11/25 17:24:12 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

// TODO Remove this before deployment

# include <stdio.h>

// ---------------------------------

// --------Defines--------------

# define KNOWN_FLAGS "sSpdDioOuUxXcC"
# define INNER_FLAGS "0123456789.#hljz+- "

// ------------------------------

// --------Structs--------------

typedef struct		s_arg
{
	char			has_hash;
	char			has_zero;
	char			has_plus;
	char			has_minus;
	char			has_space;
	char			has_dot;
	char			mod_none;
	char			mod_h;
	char			mod_hh;
	char			mod_l;
	char			mod_ll;
	char			mod_j;
	char			mod_z;
	unsigned int	width;
	unsigned int	dot_width;
}					t_arg;

// -------------------------

// -------Prototypes-------

int		ft_printf(const char *format, ...);

// ------------------------

#endif
