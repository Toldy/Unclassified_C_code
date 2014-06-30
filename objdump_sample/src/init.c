/*
** init.c for PSU_2013_nmobjdump in /home/colin_g/prjets/SU/PSU_2013_nmobjdump
**
** Made by julien colin
** Login  <colin_g@epitech.eu>
**
** Started on  ven. mars 07 18:44:13 2014 julien colin
** Last update lun. juin 30 13:30:44 2014 julien colin
*/

#include "my_objdump.h"

static int	is_good_type(uint16_t const type)
{
    (void)type;

    /* SOME OBJDUMP CODE */

    return (EXIT_SUCCESS);
}

int			GENERIC_FUNC(my_init)(t_objdump *m)
{
    (void)m;

    /* SOME OBJDUMP CODE */

    if (is_good_type(0) == EXIT_FAILURE)
        return (xperror("Bad file type", 0));
    return (EXIT_SUCCESS);
}
