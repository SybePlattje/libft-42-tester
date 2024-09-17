NAME=libftTester

CC = cc
CFLAGS = -Wall -Werror -Wextra -MMD -MP -Lbsd -lbsd

LIBFT_DIR = ./../
LIBFT = $(LIBFT_DIR)/libft.a

SRC_DIR = ./tests
OBJ_DIR = ./obj
OBJ_BONUS_DIR = $(OBJ_DIR)/bonus

vpath %.c $(SRC_DIR)
vpath %.c ./src
vpath %.c $(SRC_DIR)/bonus

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
	putendlFdTest.c \
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

OBJ = $(addprefix $(OBJ_DIR)/, $SRC:.c=.o))
OBJ_BONUS = $(addprefix $(OBJ_BONUS_DIR)/, $(SRC_BONUS:.c=.o))
DEP = $(OBJ:.o=.d)
DEP_BONUS = $(OBJ_BONUS:.o=.d)

all: $(NAME)

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(NAME): $(OBJ) $(LIBFT)
	@$(CC) $(CFLAGS) $(LIBFT) -o $@ $^
	@echo Done compiling!

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
	-include $(DEP)

bonus: $(OBJ_BONUS) $(LIBFT_BONUS)
	@$(CC) $(CFLAGS) $(LIBFT_BONUS) -o $@ $^ -D BONUS=1
	@echo Done compiling!

$(OBJ_BONUS)/%.o: $(SRC_DIR)/bonus/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
	-include $(DEP_BONUS)

$(LIBFT_BONUS):
	@make -C $(LIBFT_DIR) bonus


clean:
	@rm -rf $(OBJ_DIR)
	@echo Deleted objects!

fclean: clean
	@rm -f $(NAME)
	@echo Deleted program!

re: fclean all

.PHONY: all clean fclean re bonus