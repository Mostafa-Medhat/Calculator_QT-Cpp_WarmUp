# Simple Calculator App - Warm Up Practice

A **simple calculator** built using the [Qt C++ Framework](https://www.qt.io/), designed to perform basic arithmetic operations. This project currently supports **addition** and **subtraction**, with the ability to handle multiple operations in the same input line.

---

## Features
- **Basic Arithmetic Operations**:
  - Addition (`+`)
  - Subtraction (`-`)
- **Multiple Operations in One Line**:
  - Example: `10 + 5 - 3` results in `12`
- **User-Friendly Interface**:
  - Built with Qt's intuitive GUI design tools.

---

## Status
🚧 **Under Development**  
Future updates will include:
- More arithmetic functions (multiplication, division, etc.)
- Enhanced input validation
- Additional UI improvements

---

## Getting Started
To build and run this project, ensure you have:
1. Qt installed ([Download Qt](https://www.qt.io/download)).
2. A C++ compiler configured with Qt Creator.
3. Make all "Environment Variables" needed to build and run the app:
    1. Add the path to the bin directory of the compiler to PATH system variable to allow dynamic linking for the DLLs. <br />(e.g. ...QT\5.15.18\msvc2019_64\bin).
    2. In case of using CMake GUI (Optional): Add CMAKE_INSTALL_PREFIX variable in the system variable with path to the head compiler directory (e.g. ... QT\5.15.18\msvc2019_64).
4. Install the CMake Tools Extension in case of building using VS Code.

### Steps:
1. In case of using Visual Studio:
    1. Clone this repository.
    2. Open CMake GUI and generate the sln solution in a new empty build folder.
    3. Open the project in VS.
    4. Build and run the application.

2. In case of using VS Code:
    1. Clone this repository.
    2. Open the project in VS Code.
    3. Build and run the application using CMake Tool Extension Commands Palette (ctrl + shift + p) --> Run without Debugging.

---
## Demo:
![image](https://github.com/user-attachments/assets/b252bf2a-77d7-47de-aab5-df7ff64466b4)
