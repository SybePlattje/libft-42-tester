NAME=libftTester

CC = cc
CFLAGS = -Wall -Werror -Wextra -MMD -MP -Lbsd -lbsd

LIBFT_DIR = ./../
LIBFT = $(LIBFT_DIR)/libft.a

SRC_DIR = ./src
OBJ_DIR = ./obj

vpath %.c $(SRC_DIR)

SRC = main.c \
	atoiTest.c \
	bzeroTest.c \
	callocTest.c \
	isalnumTest.c \
	isalphaTest.c \
	isasciiTest.c \
	isdigitTest.c \
	isprintTest.c \
	itoaTest.c \
	memchrTest.c \
	memcmpTest.c \
	memcpyTest.c \
	memmoveTest.c \
	memsetTest.c \
	putcharFdTest.c \
	putnbrFdTest.c \
	putstrFdTest.c \
	splitTest.c \
	strchrTest.c \
	strdupTest.c \
	striteriTest.c \
	strjoinTest.c \
	strlcatTest.c \
	strlcpyTest.c \
	strlenTest.c \
	strmapiTest.c \
	strncmpTest.c \
	strnstrTest.c \
	strrchrTest.c \
	strtrimTest.c \
	substrTest.c \
	tolowerTest.c \
	toupperTest.c \

vpath %.c $(SRC_DIR)/bonus

SRC_BONUS = lstaddBackTest.c \
	lstaddFrontTest.c \
	lstclearTest.c \
	lstclearTest.c \
	lstdeloneTest.c \
	lstiterTest.c \
	lstlastTest.c \
	lstmapTest.c \
	lstnewTest.c \
	lstSizeTest.c \

OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)
DEP = $(OBJ:.o=.d)

all: $(NAME)

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(NAME): $(OBJ) $(LIBFT)
	@$(CC) $(CFLAGS) $(LIBFT) -o $@ $^
	@echo Done compiling!

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.C
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

-include $(DEP)

clean:
	@rm -rf $(OBJ_DIR)
	@echo Deleted objects!

fclean: clean
	@rm -f $(NAME)
	@echo Deleted program!

re: fclean all

.PHONY: all clean fclean re