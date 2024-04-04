/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vyesilyu <Vyesilyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:43:12 by Vyesilyu          #+#    #+#             */
/*   Updated: 2024/04/04 16:57:40 by Vyesilyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_signal(int signal)
{
	static char	c = 0;
	static int	i = 0;

	if (signal == SIGUSR1)
		c = c | (1 << i);
	i++;
	if (i == 8)
	{
		ft_printf("%c", c);
		i = 0;
		c = 0;
	}
}

int	main(void)
{
	signal(SIGUSR1, ft_signal);
	signal(SIGUSR2, ft_signal);
	ft_printf("Server pid: %d\n", getpid());
	while (1)
		pause ();
	return (0);
}
