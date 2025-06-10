# Makefile that wraps CMake

# Build settings
BUILD_DIR := build
TARGET := your_project

# Default build rule
all:
	@mkdir -p $(BUILD_DIR)
	cmake -S . -B $(BUILD_DIR)
	cmake --build $(BUILD_DIR)

# Run the program
run: all
	./$(BUILD_DIR)/$(TARGET)

# Clean all build artifacts
clean:
	rm -rf $(BUILD_DIR)

# Rebuild from scratch
rebuild: clean all

# Help
help:
	@echo "Usage:"
	@echo "  make        - configure and build the project"
	@echo "  make run    - build and run the executable"
	@echo "  make clean  - delete all build files"
	@echo "  make rebuild - clean and rebuild"