SRCS = main.c \
       aux/ft_bzero.c \
	   aux/ft_calloc.c \
	   aux/ft_memcpy.c \
	   aux/ft_split.c \
	   aux/ft_strdup.c \
	   aux/ft_strlcpy.c \
	   aux/ft_strlen.c \
	   aux/ft_substr.c \
	   aux/free_split.c \
	   aux/array_length.c \
	   aux/only_chars_allowed.c \
	   aux/sig_count.c \
	   aux/ft_atoi.c \
	   aux/list_size.c \
	   aux/find_dup_value.c \
	   aux/create_stack.c \
	   aux/max_value_stack.c \
	   aux/min_value_stack.c \
	   aux/sort_array.c \
	   aux/min_index.c \
	   aux/count_r.c \
	   aux/ft_sqrt.c \
	   aux/free_stack.c \
	   args/index_counter.c \
	   args/allocate_args.c \
	   args/args_to_stack.c \
	   args/args_to_list.c \
	   args/args_to_arr.c \
	   args/index_stack.c \
	   args/init_stacks.c \
	   parse/char_checker.c \
	   parse/void_checker.c \
	   parse/sig_checker.c \
	   parse/dup_checker.c \
	   parse/sort_checker.c \
	   parse/parse.c \
	   moves/sa.c \
	   moves/sb.c \
	   moves/ss.c \
	   moves/pa.c \
	   moves/pb.c \
	   moves/ra.c \
	   moves/rb.c \
	   moves/rr.c \
	   moves/rra.c \
	   moves/rrb.c \
	   moves/rrr.c \
	   sort/ksort.c \

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)
INCLUDES = push_swap.h

all: $(NAME)
	@echo "OK"
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "compilation completed"

%.o: %.c $(INCLUDES)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "cleaned"

fclean: clean
	@rm -f $(NAME)
	@echo "fully clean"

re: fclean all

.PHONY: clean fclean all re