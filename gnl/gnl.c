/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriele <gvirga@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 23:07:55 by gabriele          #+#    #+#             */
/*   Updated: 2018/10/12 23:27:20 by gabriele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This test is to see if:
** 1) your gnl can read 50 lines of each file
** even when the fd doesn't change (when you close
** a fd a reopen it, you get the same fd depending
** if no other fd are open somewhere else)
** 2) if there is a memory leak on the static if you declare it this way:
** static char *leftovers;
**
** To fix this leak, when ret return (-1), your static pointer should be freed
**
*/

#include "get_next_line.h"
#include <fcntl.h>

int		main(void)
{
	int		fd;
	char 	files[] = {
		"test.txt", "test2.txt", "test.txt", "test2.txt", "test.txt",
		"test.txt", "test2.txt", "test.txt", "test2.txt", "test.txt",
		"test.txt", "test2.txt", "test.txt", "test2.txt", "test.txt",
		"test.txt", "test2.txt", "test.txt", "test2.txt", "test.txt"
	};
	int		i;
	char	*line;

	i = 0;
	while (i < 20)
	{
		fd = open(files[i], O_RDONLY);
		u = 0;
		while (get_next_line(fd, &line) > 0)
		{
			free(line);
			u++;
			if (u == 50)
				close(fd);
		}
		i++;
	}
	return (0);
}
