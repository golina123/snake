CC = g++
CXXFLAGS = -Wall
PROGRAM = snake
OBJ = main.o view.o tview.o

$(PROGRAM): $(OBJ)
        $(CXX) $(CXXFLAGS) -o $(PROGRAM) $(OBJ)
                                    
