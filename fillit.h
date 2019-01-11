#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include "libft/libft.h"

typedef struct	s_square
{
	int			size;
	char		**array;
} t_square;

typedef struct s_tetro
{
	char	**tetro;
	int		h;
	int		l;
} t_tetro;

t_list	*ft_normalize(t_list *tetris);
int		ft_paint(char **str);
t_square	*resolve(t_list *list);
#endif
