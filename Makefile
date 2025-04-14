CC = g++
CXXFLAGS = -Wall -std=c++11

PROGRAM = snake
PROGRAM2 = graphic
PROGRAM3 = gview

LIBRARY = -lsfml-graphics -lsfml-window -lsfml-system

OBJ = main.o view.o  tview.o model.o animal.o definition.o
OBJ2 = sfml_test.o
OBJ3 = gview.o

$(PROGRAM): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(PROGRAM) $(OBJ)
$(PROGRAM2): $(OBJ2)
	$(CXX) $(CXXFLAGS) -o $(PROGRAM2) $(OBJ2) $(LIBRARY)
$(PROGRAM3): $(OBJ3)
	$(CXX) $(CXXFLAGS) -o $(PROGRAM3) $(OBJ3) $(LIBRARY)
