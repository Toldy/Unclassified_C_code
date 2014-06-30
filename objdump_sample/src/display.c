/*
** display.c for PSU_2013_nmobjdump in /home/colin_g/prjets/SU/PSU_2013_nmobjdump
**
** Made by julien colin
** Login  <colin_g@epitech.eu>
**
** Started on  lun. mars 10 16:31:27 2014 julien colin
** Last update dim. mars 16 11:08:44 2014 julien colin
*/

#include "my_objdump.h"

int			xperror(char *s1, char *s2)
{
    char	buff[4096];
    int		l;

    l = 0;
    if (s1)
    {
        strcpy(buff, s1);
        l += strlen(s1);
    }
    if (s2)
    {
        strcpy(buff + l, s2);
        l += strlen(s2);
    }
    buff[l] = 0;
    if (errno)
        perror(buff);
    else
        fprintf(stderr, s1, s2);
    return (EXIT_FAILURE);
}
