# Türkisch-Deutsche Universität - InformatiX Society
# C Masterclass for Finals
## 2025 - 2026 Fall Semester  

![Language](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Club](https://img.shields.io/badge/Club-InformatiX-orange?style=for-the-badge)
![University](https://img.shields.io/badge/Uni-TDU-red?style=for-the-badge)
![License](https://img.shields.io/badge/License-GPLv3-blue.svg?style=for-the-badge)

Welcome to the **C Programming Masterclass** repository, prepared by **InformatiX** for the **Turkish-German University (TGU/TDU)** Fall 2025-2026 final exams.

This repository contains code examples, exercises, and notes covering the curriculum **between the Midterm and Final exams**.

> **Note:** The code examples utilize a simplified "Digital Library" analogy (Shelves as Arrays, Books as Structs) to make memory management concepts easier to visualize.

## 🚀 Topics Covered

The content focuses on the core building blocks of C programming and introductory cryptography:

### 1. Data Structures
* **Arrays:** Working with static lists and contiguous memory.
* **Structs:** Defining custom data types (e.g., `struct Book`) to group related variables.
* **Strings:** Handling character arrays.

### 2. Functions & Scope
* **Modular Programming:** Defining and calling functions to organize code.
* **Scope:** Understanding Local vs. Global variables (Variable visibility).
* **Recursion:** Solving problems by breaking them down into smaller instances (e.g., Factorial, Recursive Search).

### 3. Cryptography & Coding Theory
* **Coding:** Basic data representation.
* **Encryption:** Implementation of the **Caesar Cipher** algorithm (Shift Cipher).
* **Key Exchange:** Logic behind **Diffie-Hellman** key exchange (Alice & Bob simulation).

## 📂 Repository Structure
```text
tdu-informatix-c-masterclass/
├── 01-Arrays/          # Array logic
├── 02-Structs/         # Struct definitions
├── 03-Functions/       # Function basics, Scope, Recursion
└── 04-Cryptography/    # Caesar Cipher & Diffie-Hellman examples
```

## 🛠 How to Compile

Codes are compatible with standard **C99/C11**.

* For standard files:

```bash
gcc filename.c -o app
./app
```

* For files using math functions (`<math.h>`):

```bash
gcc filename.c -o app -lm
./app
```

## 📜 License

This project is licensed under the **GNU General Public License v3.0**. See the **LICENSE** file for details.

## © Copyright

Copyright (c) 2026 Yusuf Özçetin.

All rights reserved. This material is provided for **educational purposes** and is free to use under the terms of the **GPLv3 License**.
