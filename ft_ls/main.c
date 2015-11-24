/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/14 13:39:25 by anflorea          #+#    #+#             */
/*   Updated: 2015/11/23 14:28:59 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	list_push_sort(t_list **begin_list, struct dirent *dp)
{
	
}

void	ft_ls(flags)
{
	DIR				*dirp;
	struct dirent	*dp;
	t_list			*begin;

	dirp = opendir(".");
	while ((dp = readdir(dirp)) != NULL)
	{
		list_push_sort(&begin, dp);
		printf("%s\n", dp->d_name);
	}
	(void)closedir(dirp);
}

int		is_flag(char *str)
{
	int		i;

	if (str[0] == '-')
	{
		i = 1;
		while (str[i] != '\0')
		{
			if (!ft_strchr(KNOWN_FLAGS, str[i]))
				return (-1);
			i++;
		}
		return (1);
	}
	else
		return (0);
}

char	flags_management(int argc, char **argv)
{
	int		i;
	int		ok;

	i = 1;
	ok = 1;
	while (i < argc && ok)
	{
		if (is_flag(argv[i]) == 1)
		{

		}
		else
			ok = 0;
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	flags;

	flags = flags_management(argc, argv);
	ft_ls(flags);
	return (0);
}
