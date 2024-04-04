/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vyesilyu <Vyesilyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:13:48 by Vyesilyu          #+#    #+#             */
/*   Updated: 2024/04/04 15:17:18 by Vyesilyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "ft_printf/ft_printf.h"
# include <signal.h>
# include <stdlib.h>

int		ft_atoi(const char *str);
void	ft_kill(int pid, char c);
void	ft_error(void);
void	ft_signal(int signal);

#endif