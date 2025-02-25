PROGRAM = snake
OBJ = main.o

$(PROGRAM): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(PROGRAM) $(OBJ)
