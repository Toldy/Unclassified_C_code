/*
** main.c for PSU_2013_nmobjdump in /home/colin_g/prjets/SU/PSU_2013_nmobjdump
**
** Made by julien colin
** Login  <colin_g@epitech.eu>
**
** Started on  ven. mars 07 18:03:09 2014 julien colin
** Last update lun. juin 30 13:34:18 2014 julien colin
*/

#include <elf.h>
#include <sys/stat.h>
#include <sys/mman.h>

#include "my_objdump.h"

int				check_ptr(void *ptr, void *begin, void *end)
{
    (void)ptr;(void)begin;(void)end;

    /* Check if pointer is good into handle SigSev */

    /* SOME OBJDUMP CODE */

    return (EXIT_SUCCESS); // For example
}

int				get_class(t_objdump *m)
{
    static int	class = 0;

    (void)m;(void)class;

    /* Determine if 32 or 64 bit file */

    /* SOME OBJDUMP CODE */

    return (ELFCLASS32); // Foe example
}

int				my_objdump(char *filename)
{
    t_objdump	m;
    int			fd;
    struct stat	s;

    (void)filename;(void)m;(void)fd;(void)s;

    /* SOME OBJDUMP CODE */

    if (!GOOD_PTR(NULL, &m)) /*Some ptr verif in objdump project */
        return (xperror("%s : Truncated file\n", m.filename));
    if (get_class(&m) == ELFCLASS32) /* Launch different version of my_objdump function */
        return (my_objdump32(&m));
    else if (get_class(&m) == ELFCLASS64)
        return (my_objdump64(&m));
    return (xperror("%s : File format not recognized\n", m.filename));
}

int			main(int ac, char **av)
{
    int		i;
    int		ret;

    if (ac == 1)
        return (my_objdump(av[0]));
    i = 0;
    while (++i < ac)
        ret = my_objdump(av[i]);
    return (ret);
}
