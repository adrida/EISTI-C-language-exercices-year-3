NAME=lib.a

SRC= ex01.c ex02.c ex03.c ex04.c ex05.c ex06.c main.c  menu.c 

INC=lib.h
OBJ=$(SRC:.c=.o)

FLAGS=-Wall

all : $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $^

%.o : %.c $(INC)
	gcc $(FLAGS) -o $@ -c $< -lm

re : fclean all

clean : 
	rm -Rf $(OBJ)

fclean : clean
	rm -Rf $(NAME)
