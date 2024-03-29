NAME = libft.a
SRC	=		ft_isalnum.c \
			ft_strlen.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_atol.c \
			ft_putnbr_base_fd.c \
			ft_printf.c \
			ft_printf_c.c \
			ft_printf_d.c \
			ft_printf_i.c \
			ft_printf_p.c \
			ft_printf_percent.c \
			ft_printf_s.c \
			ft_printf_u.c \
			ft_printf_x.c \
			ft_printf_bigx.c 
OBJS = $(SRC:%.c=%.o)
BONUS_SRC = ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c
BONUS_OBJS = $(BONUS_SRC:%.c=%.o)
FLAGS = -Wall -Werror -Wextra
CC = cc

.PHONY : all bonus clean fclean re

all : $(NAME)

bonus : all $(BONUS_OBJS)
	rm -f $(NAME)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
$(NAME) : $(OBJS) libft.h
	ar rcs $@ $(OBJS)
# $@ with the @ being the target name
# and $^ to encompass the prerequisites
%.o : %.c 
	$(CC) -g3 -c -o $@ $< $(FLAGS)
# $< for the first prerequisite

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all