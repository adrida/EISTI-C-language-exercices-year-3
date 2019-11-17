NAME=lib.a

SRC= src/affichage.c src/aGagne.c src/init.c src/inversion.c src/jouer.c src/main.c src/menu.c src/scalaire.c src/somme.c src/tourDeJeu.c src/vectoriel.c

INC=lib.h
OBJ=$(SRC:.c=.o)

FLAGS=-Wall

all : $(NAME)
	@gcc $(SRC) lib.a -lm ; echo "Compilation effectuee avec succes !"

$(NAME): $(OBJ)
	@ar rcs $(NAME) $^; echo "Creation de la librairie ..."

%.o : %.c $(INC)
	@gcc $(FLAGS) -o $@ -c $< -lm; echo "Creation des fichiers objets..."

re : fclean all

clean : 
	@rm -Rf $(OBJ); echo "Suppression des fichiers objets..."

fclean : clean
	@rm -Rf $(NAME); echo "Suppression de la librairie statique..."

doc : 
	@doxygen Doxyfile; echo "Creation de la documentation..."

redoc : deldoc doc

deldoc :
	@rm -rf html latex; echo "Suppression de la documentation"

