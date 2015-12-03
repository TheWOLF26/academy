/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anflorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:04:28 by anflorea          #+#    #+#             */
/*   Updated: 2015/12/03 13:13:50 by anflorea         ###   ########.fr       */
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
	ft_printf("%#o\n", 0);
	printf("%#o\n", 0);
	//printf("%#29hh.3%d\n", -42);
	//printf("%ho\n", -42);
	//printf("%p", 0);
	return (0);
}
