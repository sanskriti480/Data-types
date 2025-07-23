Experiment-2 

Aim: To study and implement C++ Program Structure (Data Types).

Apparatus: VS Code or Programiz online C++ compiler.

Theory-
This program shows how different basic data types work in C++. It asks the user to enter values like a number, a decimal, a letter, a word, and a true/false choice. After each input, it prints what the user entered
and how much space it takes in memory using the sizeof() function.
1. int is for whole numbers and usually takes 4 bytes.
2. float is for decimal numbers with less precision, around 4 bytes.
3. double is like float but more accurate, and it takes 8 bytes.
4. char holds one single character like 'A' or 'z', and it takes 1 byte.
5. string stores a whole word or sentence, and the memory it uses depends on how long the text is.
6. bool is for true/false values (or 1 and 0) and uses 1 byte.

So, step by step, the program takes input for each type and helps us see how C++ handles them and how much memory each one needs. It’s a simple way to understand the basics of storing different kinds of data.

Conclusion - I learned various data types and also learned how to find out the size of each data type.

# Experiment 2: Data Types in C++

## 🧪 Aim
To study and implement the use of various **C++ data types** and understand how memory is allocated to each type using the `sizeof()` function.

---

## 🛠️ Apparatus
- Visual Studio Code (VS Code) / Programiz Online C++ compiler

---

## 📚 Theory

## 💡 Why C++ is More Efficient Than C

Although C and C++ share a similar syntax, **C++ is more advanced and efficient for modern development** due to the following features:

- **Object-Oriented Programming (OOP):**  
  Enables modular code with concepts like classes, objects, encapsulation, inheritance, and polymorphism.

- **Function Overloading and Default Arguments:**  
  Reduces code repetition and provides more flexibility in function design.

- **Standard Template Library (STL):**  
  Offers efficient, reusable data structures and algorithms like vectors, stacks, maps, etc.

- **Stronger Type Checking:**  
  Reduces chances of unintended bugs by catching mismatches at compile time.

- **Namespaces:**  
  Prevent naming collisions and support better code organization.

- **Better Memory Management:**  
  With `new`, `delete`, constructors, and destructors, developers have more control over memory and object lifecycle.

These features make C++ a more **robust, maintainable, and scalable** language than C for larger or complex projects.


In C++, **data types** are essential building blocks of any program. They define the type of data a variable can hold, and this determines how much memory is allocated for that variable and what operations can be performed on it. This experiment focuses on understanding the various fundamental data types provided by C++ and how they are stored in memory.

The program designed for this experiment allows users to input values of different data types. After receiving each input, it uses the `sizeof()` function to print the memory allocated for that specific type. This offers a hands-on way to observe how C++ handles each data type internally.

### 🔢 Common Data Types and Their Memory Usage:

- **`int`**  
  Used to store **whole numbers** such as 5, -23, or 1000.  
  - Typically occupies **4 bytes** on most systems.
  - Example: `int age = 21;`

- **`float`**  
  Used to store **decimal numbers** with single precision.  
  - Uses **4 bytes**.
  - Less accurate than `double`.
  - Example: `float temperature = 36.5;`

- **`double`**  
  Stores **decimal numbers** with double precision.  
  - Occupies **8 bytes**.
  - More accurate than `float`.
  - Example: `double pi = 3.1415926535;`

- **`char`**  
  Stores a **single character** (e.g., 'A', 'z').  
  - Takes **1 byte**.
  - Example: `char grade = 'A';`

- **`string`**  
  Represents a **sequence of characters** (words or sentences).  
  - Size varies depending on the length of the string.
  - `sizeof(string)` shows the overhead of the object, not actual content.
  - Example: `string name = "Sanskriti";`

- **`bool`**  
  Stores **true or false** values (also interpreted as 1 or 0).  
  - Takes **1 byte**.
  - Example: `bool isOnline = true;`

By observing the output of this program, I learned how different types consume memory differently and how that affects storage and performance.

---

## 🧾 Conclusion

Through this experiment, we gained a practical understanding of:

- The most common **basic data types** in C++.
- How to **read input from users** and **prin**

---
