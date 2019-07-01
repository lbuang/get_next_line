/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_out.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 15:19:56 by lbuang            #+#    #+#             */
/*   Updated: 2019/07/01 15:20:04 by lbuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "fcntl.h"
#include "get_next_line.h"
#include <stdio.h>

int main(void)
{
	int fd;
	char *line;

	fd = 0;
	while(get_next_line(fd, &line) > 0)
	{
		ft_putstr(line);
	}
	return (0);
}
