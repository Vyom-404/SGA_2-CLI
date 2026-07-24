# CLI SGA 2 – Linux Command Line Interface Assignment

## Student Information

| Field | Details |
|-------|---------|
| **Name** | Vyom Gupta |
| **BITS ID** | 2025EB01438 |
| **Course** | Command Line Interface (CLI) |
| **Assignment** | SGA 2 |
| **Institution** | BITS Pilani |
| **Repository** | SGA_2-CLI |

---

# About this Repository

This repository contains the complete implementation of **SGA 2 – Command Line Interface (CLI)**. The assignment demonstrates practical knowledge of Linux shell scripting, process management, Linux system calls, log monitoring, and recovery mechanisms in the **vi** editor.

Each question is organized into a separate directory containing the required source code, documentation, output files, and screenshots. The repository is structured to make it easy to understand, execute, and evaluate each solution independently.

---

# Repository Structure

```text
CLI_SGA2_BITS/
│
├── Question1/
│   ├── backup/
│   ├── screenshots/
│   ├── submissions/
│   ├── submission_manager.sh
│   ├── report.txt
│   └── errors.log
│
├── Question2/
│   ├── screenshots/
│   ├── process_manager.c
│   ├── process_manager
│   ├── output.txt
│   └── explanation.txt
│
├── Question3/
│   ├── screenshots/
│   ├── employee_records.c
│   ├── employee_records
│   ├── employees.txt
│   └── explanation.txt
│
├── Question4/
│   ├── screenshots/
│   ├── system.log
│   ├── error_report.txt
│   └── explanation.txt
│
├── Question5/
│   ├── README.md
│   └── screenshots/
│
└── README.md
```

---

# Question 1 – Shell Scripting

## Objective

Develop a shell script to automate the management of student assignment submissions by detecting duplicate files, backing up unique submissions, generating a report, and maintaining an error log.

## Implementation

- Created a Bash shell script.
- Detected duplicate files using file hashing.
- Backed up unique submissions.
- Generated a report summarizing the execution.
- Stored errors in a separate log file.
- Organized files into appropriate directories.

## Concepts Used

- Bash Shell Scripting
- Conditional Statements
- Loops
- Arrays
- File Handling
- `md5sum`
- File Copy Operations

## Files Included

- `submission_manager.sh`
- `report.txt`
- `errors.log`
- `backup/`
- `submissions/`
- `screenshots/`

---

# Question 2 – Process Management

## Objective

Develop a C program to demonstrate Linux process creation, monitoring, and termination while preventing zombie processes.

## Implementation

- Created a child process using `fork()`.
- Monitored child execution from the parent process.
- Simulated an unresponsive child process.
- Terminated the child process using `SIGTERM`.
- Prevented zombie processes using `wait()`.

## Concepts Used

- Process Creation
- Parent and Child Processes
- Process IDs (PID)
- Signals
- Zombie Process Prevention

## Files Included

- `process_manager.c`
- `process_manager`
- `output.txt`
- `explanation.txt`
- `screenshots/`

---

# Question 3 – Linux System Calls

## Objective

Implement file handling using Linux system calls to create, modify, and retrieve employee records.

## System Calls Used

- `open()`
- `read()`
- `write()`
- `lseek()`
- `close()`

## Implementation

- Created a file for employee records.
- Wrote multiple employee records.
- Updated an existing record.
- Read all records from the file.
- Demonstrated random file access using `lseek()`.

## Files Included

- `employee_records.c`
- `employee_records`
- `employees.txt`
- `explanation.txt`
- `screenshots/`

---

# Question 4 – Log Monitoring

## Objective

Use Linux command-line utilities to monitor log files and filter relevant information.

## Commands Used

- `tail`
- `grep`
- Pipes (`|`)
- Output Redirection (`>`)
- `/dev/null`

## Implementation

- Displayed recent log entries.
- Filtered log entries containing "ERROR".
- Redirected filtered output to a report file.
- Suppressed unnecessary error messages.

## Files Included

- `system.log`
- `error_report.txt`
- `explanation.txt`
- `screenshots/`

---

# Question 5 – Recovery Mechanisms in vi Editor

## Objective

Study and evaluate the recovery mechanisms available in the **vi** editor after an unexpected interruption or system crash.

## Topics Covered

- Swap Files
- Undo History
- Registers
- Backup Files
- Auto-Recovery
- Recommended Recovery Strategy

## Files Included

- `README.md`
- `screenshots/`

---

# Software and Tools Used

- Linux (Google Cloud Shell)
- Bash Shell
- GCC Compiler
- C Programming Language
- Linux System Calls
- Git
- GitHub
- Nano Editor
- vi Editor

---

# Learning Outcomes

Through this assignment, the following concepts were successfully implemented:

- Linux command-line navigation and file management.
- Shell scripting for task automation.
- Linux process creation and management.
- Signal handling and zombie process prevention.
- File operations using Linux system calls.
- Log monitoring using Linux command pipelines.
- Documentation using Markdown.
- Version control using Git and GitHub.
- Practical usage of Linux development tools.

---

# Execution Instructions

## Question 1

```bash
cd Question1
chmod +x submission_manager.sh
./submission_manager.sh
```

## Question 2

```bash
cd Question2
gcc process_manager.c -o process_manager
./process_manager
```

## Question 3

```bash
cd Question3
gcc employee_records.c -o employee_records
./employee_records
```

## Question 4

```bash
cd Question4
tail -5 system.log | grep "ERROR"
```

## Question 5

```bash
cd Question5
cat README.md
```

---

# Conclusion

This repository contains the complete implementation of all five questions of the CLI SGA 2 assignment. Each question demonstrates practical Linux concepts through shell scripting, C programming, Linux system calls, command-line utilities, and documentation. The repository is organized with source code, execution outputs, explanations, and screenshots, providing a clear and well-structured record of the work completed.

---

## Author

**Name:** Vyom Gupta  
**BITS ID:** 2025EB01438
