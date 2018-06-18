CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = CoralReef.o DeepSea.o Den.o DesolateCliffs.o Game.o KelpForest.o Neighborhood.o Octopus.o SeaGrass.o Space.o Menu.o main.o

SRCS = CoralReef.cpp DeepSea.cpp Den.cpp DesolateCliffs.cpp Game.cpp KelpForest.cpp Neighborhood.cpp Octopus.cpp SeaGrass.cpp Space.cpp Menu.cpp main.cpp

HEADERS = CoralReef.hpp DeepSea.hpp Den.hpp DesolateCliffs.hpp Game.hpp KelpForest.hpp Neighborhood.hpp Octopus.hpp SeaGrass.hpp Space.hpp Menu.hpp Constants.hpp


lab1: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o final_project

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm *.o final_project