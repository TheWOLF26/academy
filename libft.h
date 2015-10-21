/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 14:46:53 by anflorea          #+#    #+#             */
/*   Updated: 2015/10/21 15:12:53 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

/* TODO - remove this before deployment */

# include <stdio.h>

/* ------------------------------------ */

size_t	ft_strlen(const char *s);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);

#endif
