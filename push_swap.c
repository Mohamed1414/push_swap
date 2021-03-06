/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbahstou <mbahstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:48:48 by mbahstou          #+#    #+#             */
/*   Updated: 2021/10/07 17:53:36 by mbahstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int *stack_a;
	int *stack_b;
	int i;
	if(argc < 2)
		return 0;
	stack_a = malloc(sizeof(int) * argc);
	stack_b = malloc(sizeof (int) * argc);
	i = 1;
	while (i < argc)
	{
		stack_a[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	stack_a[i - 1] = '\0';
	stack_b[i - 1] = '\0';
	stack_b[i] = '\0';
	return (0);
}
