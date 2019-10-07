/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 05:24:25 by jbelinda          #+#    #+#             */
/*   Updated: 2019/10/08 01:16:24 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <limits.h>
# include <stddef.h>
# include <sys/types.h>
# include "libft.h"

# ifndef BUFF_SIZE
#  define BUFF_SIZE (4096)
# elif BUFF_SIZE > SSIZE_MAX
#  undef BUFF_SIZE
#  define BUFF_SIZE (4096)
# endif

# define CHUNK_SIZE (4096)

# define GNL_OK (1)
# define GNL_BIN (2)
# define GNL_EOF (0)
# define GNL_ERR (-1)

typedef	struct s_fdnode	t_fdnode;
typedef	struct s_schunk	t_schunk;

struct		s_fdnode {
	int		fd;
	size_t	i;
	size_t	bytes_in_buf;
	u_char	buf[BUFF_SIZE];
};

struct		s_schunk {
	u_char	chunk[CHUNK_SIZE];
	size_t	i;
};

int			get_next_line(const int fd, char **line);

#endif
