/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcirlig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 13:06:00 by dcirlig           #+#    #+#             */
/*   Updated: 2017/12/18 10:31:06 by aabelque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H

# define FILLIT_H

# define BUF_SIZE 4096
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int		g_size;

int		ft_tetr_v(char *s);
int		ft_valid_t(char **s);
int		ft_valid_map(char **s);
int		ft_map_v(char *s, int n, int d, int p);
int		ft_check(int dest[4][4], char **sq);
char	**ft_create_m(int size);
char	*ft_read(char *s);
int		ft_strlen(char *s);
void	ft_putstr(char const *s);
void	ft_putchar(char c);
int		resolv(char **tetr, char **sq, int p);
void	ft_fill(char **tetr);
int		ft_rec_coord(char *tetr, int xy[2], char **sq, int p);
void	ft_free_m(char **map);
void	ft_print_m(char **map);
char	**ft_split_tetr(char *s);
char	**ft_tetr(char *s);
int		ft_mv_tetr(int dest[4][4], int src[4][4], char **sq, int p);
void	rm_t(int p, char **sq);
void	t_add(char **sq, int coord[4][4], int p);
#endif
