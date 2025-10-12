# 🎓 Student Queue Management System (C++)  

A **console-based C++ project** that demonstrates how a **singly linked list** can be used to create a dynamic and efficient **student queue system**.  
It models a real-life queue where students join, leave, or get served in sequence — just like in campus or event registrations.

---

## 📘 Overview  

In many university events or service desks, students wait in queues for assistance, registration, or distributions.  
This project offers a simple and memory-efficient solution for managing such queues, using **linked lists instead of static arrays**, allowing unlimited entries until memory runs out.

---

## ⚙️ Core Features  

- **Add Student** → Add a new student at the end of the queue  
- **Serve Student** → Serve and remove the student at the front  
- **Remove Student (by ID)** → Let a student leave before being served  
- **View Queue** → Display all students currently waiting  
- **Count Students** → Show total students in queue  
- **Exit Program** → Gracefully close the application  

---

## 🧩 Structure & Design  

### 🔹 `Node` Structure  
Represents a student in the queue with three fields:  
- `int ID` — unique identification number  
- `string name` — student’s name  
- `Node* next` — pointer to the next student in the queue  

### 🔹 `LinkedList` Class  
Handles all the main operations:  
- `add_student()` → Insert new student  
- `serve_student()` → Serve and delete first student  
- `leave_student(int id)` → Remove a student by ID  
- `display_queue()` → Show full queue  
- `count_students()` → Show total number of nodes  

