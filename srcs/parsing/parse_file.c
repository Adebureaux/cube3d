/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeburea <adeburea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 13:37:18 by adeburea          #+#    #+#             */
/*   Updated: 2021/01/29 14:18:24 by adeburea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/cube3d.h"

void	parse_desc(t_cub *cub, int n)
{
	if (n == 1)
		parse_r_valid(cub);
	// else if (n == 2)
	// else if (n == 3)
	// else if (n == 4)
	// else if (n == 5)
}

void	parse_file(char *av, t_cub *cub)
{
	int		n;
	int		fd;

	n = 1;
	fd = open(av, O_RDONLY);
	while ((get_next_line(fd, &cub->line) > 0))
	{
		printf("%s\n", cub->line);
		if (cub->line[0] != '\n')
			parse_desc(cub, n++);
		free(cub->line);
	}
	close(fd);
}