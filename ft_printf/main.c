/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:04:28 by anflorea          #+#    #+#             */
/*   Updated: 2015/11/27 19:42:09 by anflorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int		main(void)
{
	long	i;
	char	*s;

	i =  0;
	//ft_printf("%-30s: %s\n", "This is a test", "test");
	//printf("%-30s: %s\n", "This is a test", "test");
	//ft_printf("%dasdf%10d%%%#0-+2000.20hdqwd%hll%+#lld%21203.3lc%02hhSas", 10, 20);
	//i = printf("%0.3.jdaa", i);
	//printf("\n\ni: %d", i);
	//printf("% 5s", "sad");
	s = NULL;
	ft_printf("%-20s", "asfg");
	//printf("%p", 0);
	return (0);
}
