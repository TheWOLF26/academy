/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/14 13:31:32 by anflorea          #+#    #+#             */
/*   Updated: 2015/11/23 13:48:31 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

/*
 * ---Includes-----
 * */

# include <dirent.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include "libft/libft.h"

// -----------------

// TODO Remove this before deployment

# include <stdio.h>

// ----------------------------------

/*
 * ----Defines-----
 * */

# define KNOWN_FLAGS "Rarlt"

// -----------------

/*
 * ----Structs------
 * */

typedef struct		s_list
{
	struct s_list	*next;
	struct s_list	*prev;
	char			*name;
}					t_list;

// -----------------

/*
 * ----Function prototypes----
 * */

// ---------------------------

#endif
