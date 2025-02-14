# **C++ OpenGL Program Setup Guide**

This guide will walk you through the steps to set up, build, and run the program on **macOS**, **Windows**, and **Linux**.

---

## **Prerequisites**

Before starting, make sure you have the following installed:
- **C++ Compiler** (e.g., `g++`, `clang` on macOS)
- **GLFW** (for OpenGL context and window creation)
- **GLEW** (for managing OpenGL extensions)
- **OpenGL** (for graphics rendering)

### **macOS**
On macOS, you'll need **Xcode Command Line Tools**, **Homebrew** (optional but recommended), and the required libraries.

### **Windows**
On Windows, you'll need **MinGW** or **MSVC**, **GLFW**, and **GLEW** for managing libraries and compiling the program.

### **Linux**
On Linux (Ubuntu/Debian-based), you will need **g++** or **clang++**, **GLFW**, and **GLEW** to build the program.

---

## **1. Installing Dependencies**

### **macOS**

1. **Install Xcode Command Line Tools** (for compilers and essential tools):
   ```sh
   xcode-select --install
   ```

2. **Install Homebrew** (if not already installed):
   ```sh
   /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
   ```

3. **Install GLFW and GLEW via Homebrew**:
   ```sh
   brew install glfw glew
   ```

### **Windows**

1. **Install MinGW (GCC) or MSVC**:
   - For MinGW, download and install from [MinGW website](http://www.mingw.org/).
   - For MSVC, install **Visual Studio** from [Microsoft's website](https://visualstudio.microsoft.com/).

2. **Install GLFW**:
   - Download precompiled GLFW binaries from [GLFW website](https://www.glfw.org/download).
   - Alternatively, use **vcpkg** or **vcpkg-install** to install GLFW.

3. **Install GLEW**:
   - Download GLEW from [GLEW website](http://glew.sourceforge.net/).
   - Follow the instructions to install GLEW for your compiler.

### **Linux**

1. **Install Dependencies via `apt`** (Ubuntu/Debian):
   ```sh
   sudo apt update
   sudo apt install build-essential cmake libglew-dev libglfw3-dev libglm-dev
   ```

2. **Install GLFW** (if not already installed):
   ```sh
   sudo apt install libglfw3 libglfw3-dev
   ```

3. **Install GLEW**:
   ```sh
   sudo apt install libglew-dev
   ```

---

## **2. Setting Up the Project**

1. Clone the repository:
   ```sh
   git clone https://github.com/{user-name}/Graphics-OpenGL.git
   cd graphics-opengl
   ```

2. Create the following directory structure (if not already present):
   ```
   your-project-name/
   ├── main.cpp
   ├── Makefile (if using make)
   ├── .vscode/ (optional, for VS Code)
   ├── build/ (compiled output)
   └── .gitignore
   ```

---

## **3. Building the Project**

### **macOS**

1. **Using Terminal**:
   Open the **Terminal** in the project folder:
   ```sh
   cd /path/to/your/project
   ```

2. **Compile Using g++**:
   Run the following command:
   ```sh
   g++ -g -o build/main main.cpp -lglfw -lGLEW -framework OpenGL
   ```

   **Explanation**:
   - `-g`: Generates debug information.
   - `-o build/main`: Places the compiled program in the `build/` directory.
   - `main.cpp`: The source file.
   - `-lglfw`, `-lGLEW`, `-framework OpenGL`: Links GLFW, GLEW, and OpenGL.

3. **Run the Program**:
   ```sh
   ./build/main
   ```

### **Windows**

1. **Using MinGW**:
   Open **Command Prompt** or **PowerShell** in the project folder.

   If using MinGW, run:
   ```sh
   g++ -g -o build/main main.cpp -lglfw3 -lglew32 -lopengl32
   ```

2. **Using MSVC** (Visual Studio Command Prompt):
   Open **Developer Command Prompt for VS** and run:
   ```sh
   cl main.cpp /I"path\to\glew\include" /I"path\to\glfw\include" /link /LIBPATH:"path\to\glew\lib" /LIBPATH:"path\to\glfw\lib" glfw3.lib glew32.lib opengl32.lib
   ```

3. **Run the Program**:
   ```sh
   build\main.exe
   ```

### **Linux**

1. **Using g++**:
   Open **Terminal** and navigate to the project directory.

   Run the following to compile:
   ```sh
   g++ -g -o build/main main.cpp -lglfw -lGLEW -lGL
   ```

2. **Run the Program**:
   ```sh
   ./build/main
   ```

---

## **4. Running the Program**

After building the project successfully, run the executable:

- **macOS/Linux**:
  ```sh
  ./build/main
  ```
- **Windows**:
  ```sh
  build\main.exe
  ```

---

## **5. Troubleshooting**

### **Error: 'GLFW' or 'GLEW' not found**
- **macOS/Linux**: Make sure you have installed the libraries using Homebrew (`brew install glfw glew`) or the package manager.
- **Windows**: Ensure that you've added the correct paths to GLFW and GLEW in your build command.

### **Error: 'OpenGL' not found**
- On **macOS** and **Linux**, use the `-framework OpenGL` flag for macOS or `-lGL` for Linux in your build command.
- On **Windows**, use `-lopengl32` to link OpenGL.

---

## **6. Cleaning Up**

After building, you can clean up the build directory:
```sh
rm -rf build/
```

---

## **7. Contributing**

Feel free to fork, create a pull request, or report issues! Here are the general steps:

1. Fork the repository.
2. Clone your fork locally.
3. Create a new branch (`git checkout -b feature-name`).
4. Make your changes and commit (`git commit -am 'Add feature'`).
5. Push your changes (`git push origin feature-name`).
6. Create a pull request.

---

## **8. License**

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.


