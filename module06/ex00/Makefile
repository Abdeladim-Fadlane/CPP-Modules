NAME = convert

CXXFLAGS = -Wall -Wextra -Werror  -std=c++98
CFILES = main.cpp ScalarConverter.cpp main.cpp
CXX = c++
OBJ = ${CFILES:.cpp=.o}

all :${NAME}

${NAME} : ${OBJ}
	${CXX} ${CXXFLAGS} -o $@ $^
	
%.o:%.cpp %.hpp
	${CXX} ${CXXFLAGS} -c $<

clean :
	@rm -rf ${OBJ}
fclean : clean
	@rm -rf ${NAME}

re : fclean all
