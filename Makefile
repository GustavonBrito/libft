CC = gcc

	HEADER = libft.h

					SRCS =

		OBJS = $(
			:.c =.o)

			CFLAGS = -Werror - Wall - Wextra -
	I $(HEADER)

		LIBFT = libft.a

					all : $(LIBFT)

								$(LIBFT)
	: $(OBJS) ar rcs $(LIBFT) $(OBJS)

			%.o : %.c $(CC) $(CFLAGS) -
		c $ <
	-o $ @

		clean : rm -
		f $(OBJS)

			fclean : rm -
						f $(OBJS) $(LIBFT)

							re : @$(MAKE) fclean @$(MAKE) all