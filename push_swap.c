/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbahstou <mbahstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:48:48 by mbahstou          #+#    #+#             */
/*   Updated: 2021/09/30 17:31:54 by mbahstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int stackA[argc];
	int i;
	if(argc < 2)
		return 0;
	//stackA = malloc(sizeof(int) * argc);
	i = 1;
	while (i < argc)
	{
		stackA[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	stackA[i - 1] = '\0';
	i = 0;
	while (stackA[i])
	{
		printf("%d <- numero asignado %d <- en posicion\n",stackA[i],i);
		i++;
	}
	return (0);
}
