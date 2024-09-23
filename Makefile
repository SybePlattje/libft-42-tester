NAME = libftTester

CC = cc
CFLAGS = -Wall -Werror -Wextra -MMD -MP -g

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -MMD -MP -g

LIBFT_DIR = ./../
LIBFT = $(LIBFT_DIR)/libft.a

SRC_DIR = ./tests
OBJ_DIR = ./obj
OBJ_BONUS_DIR = $(OBJ_DIR)/bonus
OBJ_CXX_DIR = $(OBJ_DIR)/memory_checks

vpath %.c $(SRC_DIR)
vpath %.c $(SRC_DIR)/bonus
vpath %.cpp $(SRC_DIR)/memory_checks

CXX_SRC = memtrack.cpp \

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
	helper.c \

SRC_BONUS = lstaddBackTest.c \
	lstaddFrontTest.c \
	lstclearTest.c \
	lstdeloneTest.c \
	lstiterTest.c \
	lstlastTest.c \
	lstmapTest.c \
	lstnewTest.c \
	lstsizeTest.c \

OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)
OBJ_BONUS = $(SRC_BONUS:%.c=$(OBJ_BONUS_DIR)/%.o)
OBJ_CXX = $(CXX_SRC:%.cpp=$(OBJ_CXX_DIR)/%.o)
DEP = $(OBJ:.o=.d)
DEP_BONUS = $(OBJ_BONUS:.o=.d)
DEP_CXX = $(OBJ_CXX:.o=.d)

all: $(NAME)

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(NAME): $(OBJ) $(OBJ_CXX) $(LIBFT)
	@$(CXX) $(CXXFLAGS) $(LIBFT) -o $@ $^
	@echo Done compiling!

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
-include $(DEP)

$(OBJ_CXX_DIR)/%.o: $(SRC_DIR)/memory_checks/%.cpp
	@mkdir -p $(dir $@)
	@$(CXX) $(CXXFLAGS) -c $< -o $@
-include $(DEP_CXX)

bonus: CFLAGS += -D BONUS=1

bonus: $(OBJ) $(OBJ_BONUS) $(OBJ_CXX) $(LIBFT)
	@make -C $(LIBFT_DIR) bonus
	@$(CXX) $(CXXFLAGS) $(LIBFT) -o $(NAME) $^
	@echo Done compiling!

$(OBJ_BONUS_DIR)/%.o: $(SRC_DIR)/bonus/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
-include $(DEP_BONUS)

clean:
	@rm -rf $(OBJ_DIR)
	@make -C $(LIBFT_DIR) clean
	@echo Deleted objects!

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean
	@echo Deleted program!

re: fclean all

.PHONY: all clean fclean re bonus