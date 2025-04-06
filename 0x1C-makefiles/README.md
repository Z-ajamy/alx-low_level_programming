# Project Title: Island Perimeter Calculation

## Description

This project involves calculating the perimeter of an island in a grid representation. The grid consists of water (represented by `0`s) and land (represented by `1`s). The task is to compute the perimeter of the island, where the perimeter is defined by the number of edges of land cells that are adjacent to water cells or the grid boundary.

The project includes multiple Makefiles to compile various C programs, a Python script to handle the perimeter calculation, and header files for shared functionality.

## Files

### Makefiles
- **0-Makefile**: A Makefile that handles the basic compilation of C programs and dependencies.
- **1-Makefile**: A secondary Makefile to manage additional compilation steps or specific configurations.
- **2-Makefile**: Another specialized Makefile used for different parts of the project.
- **3-Makefile**: Another variation of Makefile, used for a distinct part of the project.
- **4-Makefile**: A specialized Makefile that adds specific flags or configurations for advanced features.
- **100-Makefile**: A final Makefile that compiles and links all relevant C files into an executable.

### Source Code
- **main.c**: The entry point for the C program that integrates various components.
- **school.c**: Contains key functions that support the perimeter calculation and related operations.
- **m.h**: Header file with function prototypes and constants used throughout the C source files.

### Python Script
- **5-island_perimeter.py**: A Python script designed to calculate the perimeter of the island in a given grid.

### Documentation
- **README.md**: This file, providing an overview of the project structure and how to run the program.

## Compilation

To compile the project, use the following commands:

1. Navigate to the project directory.
2. Run the `make` command:

   ```bash
   make
