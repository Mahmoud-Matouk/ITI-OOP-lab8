<p align="center">
  <img src="https://blog2.novaeg.net/wp-content/uploads/2024/07/iti_logo.5b9a0fd125be.png" alt="ITI Logo" width="480" />
</p>

<h1 align="center">Database Connection (Singleton Pattern)</h1>

<p align="center">
  <strong>Information Technology Institute (ITI)</strong> • <em>Object-Oriented Programming (OOP) — Lab 8</em>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-11%2F14-00599C?logo=c%2B%2B" alt="C++" />
  <img src="https://img.shields.io/badge/Windows-Linux-orange?logo=windows" alt="Windows" />
  <img src="https://img.shields.io/badge/GCC%2FMinGW-Compiler-green?logo=gnu" alt="GCC" />
  <img src="https://img.shields.io/badge/Design_Pattern-Singleton-blueviolet" alt="Singleton Pattern" />
  <img src="https://img.shields.io/badge/ITI-Open%20Source_Track-red" alt="ITI" />
</p>

---

## Project Overview

This project is developed as part of the **Object-Oriented Programming (OOP) track at the Information Technology Institute (ITI)**.

It demonstrates the implementation of the **Singleton Design Pattern** (specifically, **Meyers' Singleton**) in C++ by simulating a shared database connection manager (`DBConnection`). The design guarantees that only a single instance of the database connection exists throughout the application lifetime and provides a global access point to it.

---

## Key Concepts & Design Details

- **Singleton Pattern (Meyers' Implementation)**:
  - Utilizes a static local variable inside the `getInstance()` method. Since C++11, local static variable initialization is guaranteed to be thread-safe.
- **Encapsulated Lifecycle**:
  - The constructor and destructor are declared as `private` to prevent external instantiation (`new` or direct stack creation) or manual deletion.
  - Automatically initializes resources upon first access (`"init connection."`) and cleans up when the program terminates (`"fin connection."`).
- **Copy & Assignment Prevention**:
  - Copy constructor and copy assignment operator are declared without implementation (or can be marked `= delete`) to prevent cloning or duplicating the connection instance.

---

## Technologies & Tools

- **Language:** C++ (C++11/C++14 standard)
- **Design Pattern:** Creational Pattern — Singleton (Meyers' Singleton)
- **Concepts:** Encapsulation, Static Members, Object Lifetime Management, RAII
- **Environment:** Visual Studio Code & MinGW / GCC

---

## Project Structure

```text
Lab8 (db conn)/
│── include/
│   └── db.h              # DBConnection singleton class definition
│── src/
│   └── main.exe          # Compiled binary executable
├── .gitignore            # Git ignore file
└── readme.md             # Project documentation
```

---

## Getting Started

### Prerequisites
- A C++ compiler (such as **MinGW / GCC**) or **Visual Studio / VS Code**.

### Build & Run

1. Open your terminal in the project directory:
   ```cmd
   cd "d:\ITI\7- (OOP)\Lab\Lab8 (db conn)"
   ```

2. Compile with `g++`:
   ```cmd
   g++ -std=c++11 -Iinclude src/main.cpp -o src/main.exe
   ```

3. Run the executable:
   ```cmd
   .\src\main.exe
   ```
