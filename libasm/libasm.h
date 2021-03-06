/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 11:44:24 by lduhamel          #+#    #+#             */
/*   Updated: 2020/10/21 16:35:10 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>

size_t		ft_strlen(char *rdi);
char		*ft_strcpy(char *rdi, const char *rsi);
int			ft_strcmp(const char *rdi, const char *rsi);
ssize_t		ft_write(int rdi, const void *rsi, size_t rdx);
ssize_t		ft_read(int rdi, void *rsi, size_t rdx);
char		*ft_strdup(const char *rdi);

#endif
