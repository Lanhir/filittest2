#include "fillit.h"

int     biggest_sqrt(int nb)
{
	int a;

	a = 2;
	while (a * a < nb)
		a++;
	return (a);
}

size_t  lstcount(t_list * list)
{
	size_t  a;

	a = 0;
	while (list != NULL)
	{
		list = list->next;
		a++;
	}
	return (a);
}

t_square  new_square(int size)
{
	t_square  *square;
	int     a;
	int     b;

	square = (t_list *)ft_memalloc(sizeof(t_list));
	square->size = size;
	square->array = (char **)ft_memalloc(sizeof(char *) * size);
	a = 0;
	while (a < size)
	{
		square->array[a] = ft_strnew(size)
			b = 0;
		while (b < size)
		{
			square->array[a][b] = '.';
			b++;
		}
		a++;
	}
	return (square);
}


int		solve(t_square *square, t_list *list)
{
	t_tetro	*tetro;
	int	a;
	int	b;

	a = 0;
	tetro = list->content;
	while (a < square->size - tetro->h + 1)
	{
		b = 0;
		while (b < square->size - tetro->l + 1)
		{
			// Placement des tetro
			b++;
		}
		a++;
	}
	return (0);
}

t_square  *resolve(t_list *list)
{
	t_square  *square;
	int     size;

	size = biggest_sqrt(lstcount(list) * 4);
	square = new_square(size);
	while (!solve(square, list))
	{
		size++;
		square = new_square(size);
	}

}