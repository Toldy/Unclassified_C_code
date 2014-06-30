/*
** generic.h for nm in /home/colin_g/prjets/SU/PSU_2013_nmobjdump/nm
**
** Made by julien colin
** Login  <colin_g@epitech.eu>
**
** Started on  jeu. mars 13 14:48:29 2014 julien colin
** Last update dim. mars 16 10:27:14 2014 julien colin
*/

#ifndef GENERIC_H_
#   define GENERIC_H_
#   ifdef CLASS

#   define PASTER2(x, y)        x ## y
#   define PASTER3(x, y, z)     x ## y ## z

#   define EVALUATOR2(x, y)     PASTER2(x, y)
#   define EVALUATOR3(x, y, z)  PASTER3(x, y, z)

#   define GENERIC_FUNC(func)       EVALUATOR2(func, CLASS)
#   define GENERIC_TYPE(beg, end)   EVALUATOR3(beg, CLASS, end)

#       if CLASS == 32
#           define MY_ELF_CLASS     ELFCLASS32
#           define MY_ELF_ST_BIND   ELF32_ST_BIND
#           define MY_ELF_ST_TYPE   ELF32_ST_TYPE
#           define MY_PRINTF_FLAG   "start adress 0x%08x\n\n"

#       elif CLASS == 64
#           define MY_ELF_CLASS     ELFCLASS64
#           define MY_ELF_ST_BIND   ELF64_ST_BIND
#           define MY_ELF_ST_TYPE   ELF64_ST_TYPE
#           define MY_PRINTF_FLAG   "start adress 0x%016x\n\n"

#       endif
#   endif /* CLASS */

#endif /* !GENERIC_H_ */
