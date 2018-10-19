/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvirga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 12:53:39 by gvirga            #+#    #+#             */
/*   Updated: 2018/10/19 13:01:49 by gvirga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct		s_list
{
	char		t;
	struct s_list		*next;
}					t_list;

int		main(void)
{
	t_list	*current;

	current = malloc(sizeof(*current));
	current->next = malloc(sizeof(*current));
	current->next->next = NULL;

	while (current)
	{
		free(current);
		current = NULL;
		printf("current %p\n", current);
		printf("current->next %p\n", current->next);
		current = current->next;
	}


	return (0);
}
