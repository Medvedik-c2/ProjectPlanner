CXX = g++
CXXFLAGS = -std=c++11 -Wall
SRC = src/main.cpp src/TaskManager.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = task_planner

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET)
