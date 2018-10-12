# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    project_destroyer.txt                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabriele <gvirga@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/12 23:04:08 by gabriele          #+#    #+#              #
#    Updated: 2018/10/12 23:04:12 by gabriele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

/*
** Voila pourquoi il faut d'abord verifier si ap existe
*/

#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	char **ap;

	ap = (char **)malloc(sizeof(**ap));
	*ap = (char *)malloc(sizeof(*ap) * 2);
	ap = NULL;
	printf("ap :%p\n", ap);
	// la magie se passe ici
	//if (*ap)
	//	printf("*ap :%p\n", *ap);
	return (0);
}
