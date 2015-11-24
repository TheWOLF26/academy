/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:10:02 by anflorea          #+#    #+#             */
/*   Updated: 2015/11/24 16:09:42 by anflorea         ###   ########.fr       */
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

# define KNOWN_FLAGS "sSpdDioOuUxXcC%"

int		ft_printf(const char *format, ...);

#endif
