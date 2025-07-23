# Experiment 2: Data Types in C++

## 🧪 Aim
To study and implement the use of various **C++ data types** and understand how memory is allocated to each type using the `sizeof()` function.

---

## 🛠️ Tools used
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

## Sample output

Enter a Integer:4

The integer is:4 and size is:4bytes

Enter a Decimal number for Float:4.3

Number is:4.3 and size is:4bytes

Enter a Character:s

Character is:s and size is:1bytes

Enter a Decimal Number for Double:4.8987

Number is:4.8987 and size is:8bytes

Enter a String:hello

String is:hello and size is:32bytes

Enter 1/0:1

Input is:1 and size is:1bytes

---

## 🧾 Conclusion

Through this experiment, we gained a practical understanding of:

- The most common **basic data types** in C++.
- How to **read input from users** and **prin**

---
