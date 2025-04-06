CC = g++
CXXFLAGS = -Wall
PROGRAM = snake
PROGRAM2 = graphic
LIBRARY = -lsfml-graphics -lsfml-window -lsfml-system
OBJ = main.o view.o tview.o
OBJ2 = sfml_test.o
$(PROGRAM): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(PROGRAM) $(OBJ)
$(PROGRAM2): $(OBJ2)
	 $(CXX) $(CXXFLAGS) -o $(PROGRAM2) $(OBJ2) $(LIBRARY)

                                    
