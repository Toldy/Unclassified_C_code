##
## Makefile
## 
## Made by julien colin
## Login   <colin_g@epitech.eu>
## 
## Started on  ven. mars 07 18:51:29 2014 julien colin
## Last update lun. juin 30 13:33:07 2014 julien colin
##

ifdef DEB
	CC = clang
	CFLAGS = -g
else
	CC = gcc
endif

CFLAGS	+= -Wextra -Wall -Wno-format -Werror
CFLAGS	+= -I./includes/

NAME	= my_objdump

RM	= rm -f

OBJDIR	:= obj
SRCDIR	:= src

# Sources
ARCH_DEPENDENT		= my_objdump.c \
					  init.c
SRCS				= main.c \
					  display.c

# Objects
OBJS				= $(notdir $(SRCS:.c=.o))
OBJS32				= $(notdir $(ARCH_DEPENDENT:%.c=%32.o))
OBJS64				= $(notdir $(ARCH_DEPENDENT:%.c=%64.o))

# Add directories to files
ARCH_DEPENDENT		:= $(addprefix $(SRCDIR)/, $(ARCH_DEPENDENT))
SRCS				:= $(addprefix $(SRCDIR)/, $(SRCS))
OBJS				:= $(addprefix $(OBJDIR)/, $(OBJS))
OBJS32				:= $(addprefix $(OBJDIR)/, $(OBJS32))
OBJS64				:= $(addprefix $(OBJDIR)/, $(OBJS64))

# Cause objects creation rules aren't automatic in subdirectories
$(OBJDIR)/%32.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -DCLASS=32 -c -o $@ $<
$(OBJDIR)/%64.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -DCLASS=64 -c -o $@ $<
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -DCLASS=32 -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJS64) $(OBJS32) $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(OBJS32) $(OBJS64)

clean:
	$(RM) $(OBJS32) $(OBJS64) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
