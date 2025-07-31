# Define the C++ compiler (g++ is common, or clang++)
CXX = g++

# Define C++ compiler flags
# -std=c++17: Use C++17 standard (you can change to c++20 or c++11 etc.)
# -Wall: Enable all common warnings
# -Wextra: Enable extra warnings
# -g: Include debugging information
# -O2: Optimization level 2
CXXFLAGS = -std=c++20 -Wall -Wextra -g -O2

# Define the name of the final executable
TARGET = main 

# List all your source files (.cpp files) that need to be compiled
SRCS = main.cpp MyStringLengthCompare.cpp

# Automatically generate object file names from source files
# (e.g., main.cpp -> main.o, my_string_compare.cpp -> my_string_compare.o)
OBJS = $(SRCS:.cpp=.o)

# Default rule: 'all' builds the target executable
.PHONY: all
all: $(TARGET)

# Rule to link object files into the final executable
# The executable depends on all object files.
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Generic rule to compile .cpp files into .o files
# $@: The target of the rule (e.g., main.o)
# $<: The first prerequisite (e.g., main.cpp)
# -c: Compile only, do not link
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule for cleaning up generated files
.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJS)

# Phony targets prevent 'make' from trying to build files named 'all' or 'clean'
