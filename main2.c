/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:31:26 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/03/15 14:32:31 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int	fd;
	int	fdd;

	fd = open("test.txt", O_RDONLY);
	fdd = open("test2.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fdd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fdd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fdd));
	printf("%s", get_next_line(fd));

	return (0);
}
