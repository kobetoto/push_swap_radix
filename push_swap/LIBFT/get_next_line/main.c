/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:50:16 by thodavid          #+#    #+#             */
/*   Updated: 2025/03/24 09:41:35 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int			fd;
	char		*line;

	fd = open("text.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("Erreur lors de l'ouverture");
		return (1);
	}
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		printf("\ngnl is ===%s===\n", line);
		free(line);
	}
	return (0);
}
