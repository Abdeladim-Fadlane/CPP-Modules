NAME = Polymorphism
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
CFILES = main.cpp AMateria.cpp Ice.cpp ICharacter.cpp Cure.cpp MateriaSource.cpp Character.cpp IMateriaSource.cpp
OBJ = ${CFILES:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJ}
	${CXX} ${CXXFLAGS} -o $@ $^ 

%.o: %.cpp %.hpp
	${CXX} ${CXXFLAGS} -c $< 

clean :
	@rm -rf ${OBJ}
fclean : clean 
	@rm -rf ${NAME} 
re : fclean all