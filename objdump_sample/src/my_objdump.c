/*
** my_objdump.c for PSU_2013_nmobjdump in /home/colin_g/prjets/SU/PSU_2013_nmobjdump
**
** Made by julien colin
** Login  <colin_g@epitech.eu>
**
** Started on  ven. mars 07 18:39:52 2014 julien colin
** Last update lun. juin 30 13:34:18 2014 julien colin
*/

#include "my_objdump.h"

static int	check_file_type(t_objdump *m)
{
    (void)m;

    /* SOME OBJDUMP CODE */

    return (EXIT_SUCCESS);
}

int		GENERIC_FUNC(my_objdump)(t_objdump *m)
{
    /* SOME OBJDUMP CODE */

    if (GENERIC_FUNC(my_init)(m) == EXIT_FAILURE)
        return (EXIT_FAILURE);
    if (!GOOD_PTR(NULL, m)) /* Some pointer verification */
        return (xperror("%s : Truncated file\n", m->filename));
    return (check_file_type(m));
}
