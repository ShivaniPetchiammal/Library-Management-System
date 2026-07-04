# To-Do List Management System

## 📝 Project Overview

The **To-Do List Management System** is a simple console-based application developed in **C++**. It helps users organize their daily tasks by allowing them to add, view, complete, and remove tasks. This project demonstrates the fundamentals of C++ programming using structures, arrays, functions, and menu-driven programming.

---

## ✨ Features

- Add new tasks
- View all tasks
- Mark tasks as completed
- Remove completed or unwanted tasks
- Display task status (Pending/Completed)
- User-friendly menu-driven interface

---

## 🛠 Technologies Used

- **Language:** C++
- **Compiler:** g++ / Code::Blocks / Dev-C++ / Visual Studio Code
- **Standard Library:**
  - `<iostream>`
  - `<string>`

---

## 📂 Project Structure

```
ToDoList/
│
├── main.cpp
└── README.md
```

---

## ▶️ How to Run

### Using g++

```bash
g++ main.cpp -o todo
./todo
```

### Using Visual Studio Code

1. Install a C++ compiler (MinGW or GCC).
2. Open the project folder.
3. Compile and run `main.cpp`.

---

## 📋 Menu Options

```
========== TO-DO LIST ==========
1. Add Task
2. View Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
```

---

## 📖 Functionalities

### 1. Add Task

- Allows the user to enter a new task.
- The task is stored with the status **Pending** by default.

---

### 2. View Tasks

Displays all tasks along with their current status.

Status indicators:
- **[Pending]** – Task is yet to be completed.
- **[Completed]** – Task has been completed.

Example:

```
------ TO-DO LIST ------
1. Complete Assignment [Pending]
2. Buy Groceries [Completed]
3. Prepare Presentation [Pending]
```

---

### 3. Mark Task as Completed

- Displays all available tasks.
- User enters the task number.
- The selected task status changes from **Pending** to **Completed**.

---

### 4. Remove Task

- Displays the task list.
- User selects a task number.
- The selected task is removed from the list.
- Remaining tasks are automatically shifted to maintain the list order.

---

## 📌 Data Structure

```cpp
struct Task
{
    string name;
    bool completed;
};
```

Each task stores:
- Task Name
- Completion Status (`true` or `false`)

---

## 💻 Sample Output

```
========== TO-DO LIST ==========
1. Add Task
2. View Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit

Enter Choice: 1

Enter Task:
Complete C++ Assignment

Task Added Successfully!
```

Viewing tasks:

```
------ TO-DO LIST ------
1. Complete C++ Assignment [Pending]
2. Buy Groceries [Completed]
```

---

## ⚠ Limitations

- Maximum of **100 tasks** can be stored.
- Tasks are stored only during program execution.
- Data is lost when the program exits.
- No search or edit functionality.
- Console-based interface only.

---

## 🚀 Future Enhancements

- File handling for permanent task storage
- Task editing feature
- Search tasks by name
- Set task priorities (High, Medium, Low)
- Add due dates and reminders
- Sort tasks by priority or due date
- Graphical User Interface (GUI)
- User login and task management

---

## 🎯 Learning Outcomes

This project helps understand:

- C++ Structures
- Arrays of Structures
- Functions
- Menu-driven programming
- String handling
- Conditional statements
- Loops
- Basic task management concepts

---

## 👩‍💻 Author

**Shivani Petchiammal**

---

## 📜 License

This project is developed for educational and learning purposes. Feel free to use and modify it for academic projects.# Library-Management-System
