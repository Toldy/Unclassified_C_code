/*
** my_objdump.h for PSU_2013_nmobjdump in /home/colin_g/prjets/SU/PSU_2013_nmobjdump
**
** Made by julien colin
** Login  <colin_g@epitech.eu>
**
** Started on  ven. mars 07 18:39:17 2014 julien colin
** Last update dim. mars 16 11:11:07 2014 julien colin
*/

#ifndef MY_NM_H_
# define MY_NM_H_

#define PACKAGE_VERSION
#define PACKAGE

#include <bfd.h>

#include <elf.h>
#include <ctype.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <unistd.h>

#include "generic.h"

#define GOOD_PTR(x, y)  (check_ptr((x), (y)->data, (y)->eof) != EXIT_FAILURE)

typedef struct					s_nm
{
    char						*filename;
    void						*data;
    GENERIC_TYPE(Elf, _Ehdr)	*ehdr;
    GENERIC_TYPE(Elf, _Shdr)	*shdr;
    void						*eof;
    int							flag;
    char						*fanions[16];
}								t_objdump;

struct s_class
{
    int		val;
    int		mask;
    char	*name;
};

/*
 * main.c
 */

int		check_ptr(void *, void *, void *);
int		get_class(t_objdump *);

/*
 * my_objdump.c
 */

int		my_objdump32(t_objdump *);
int		my_objdump64(t_objdump *);
int		get_class(t_objdump *);

/*
 * init.c
 */

int		GENERIC_FUNC(my_init)(t_objdump *);

/*
 * dump.c
 */

int		GENERIC_FUNC(print_file_content)(t_objdump *);

/*
 * display.c
 */

int		xperror(char *, char *);

#endif /* !MY_NM_H_ */
