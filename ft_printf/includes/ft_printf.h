/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:10:02 by anflorea          #+#    #+#             */
/*   Updated: 2015/11/27 17:55:06 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "../libft/libft.h"


// --------Defines--------------

# define KNOWN_FLAGS "sSpdDioOuUxXcC%"
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
int		ft_correct_flag(va_list *ap, char *flag);
int		ft_compute_flag(va_list *ap, char *flag, t_arg args);
int		compute_s_flag(va_list *ap, t_arg args);
int		compute_c_flag(va_list *ap, t_arg args);
int		compute_d_flag(va_list *ap, t_arg args);
int		compute_p_flag(va_list *ap, t_arg args);
int		compute_percent_flag(va_list *ap, t_arg args);

// ------------------------

// TODO Remove this before deployment

# include <stdio.h>

void	ft_print_test_targ(t_arg arg);

// ---------------------------------

#endif
