## 📘 Linked List Implementation in C++

### 🧠 Overview

This project demonstrates a **basic implementation of a singly linked list** in C++.
It covers all the fundamental linked list operations such as insertion, deletion, and traversal — implemented using **Object-Oriented Programming (OOP)** concepts.

---

### ⚙️ Features

* Insert a node at the **beginning**
* Insert a node at the **end**
* Insert a node at a **specific position**
* **Delete** a node from the beginning
* **Display** the complete list

---

### 🧩 Code Structure

#### **Classes and Structures**

* **Node**: Represents each element in the linked list.

  * `Value`: Stores integer data.
  * `next`: Pointer to the next node.
* **LinkedList**: Manages all list operations.

#### **Main Functions**

* `insert_at_beginning(int number)`
* `insert_at_end(int number)`
* `insert_at_position(int number, int position)`
* `delete_from_beginning()`
* `print()`

---

### 🚀 How to Run

1. Open your terminal or Visual Studio Code.
2. Compile the program using:

   ```bash
   g++ linkedlist.cpp -o linkedlist
   ```
3. Run the program:

   ```bash
   ./linkedlist
   ```

---

### 🧾 Example Output

```
StartingOperations:
List:101->102->103->nullptr
List:999->101->102->103->nullptr
List:999->101->555->102->103->nullptr
List:101->555->102->103->nullptr
```

