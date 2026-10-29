# MVSR OS Lab Programs

Short Operating System lab programs in C and Shell Script, arranged by topic for revision.

## Contents
- `Shell-Scripts/` — 5 shell programs
- `CPU-Scheduling/` — FCFS, SJF, Priority, and two basic Round Robin variants
- `Threads/` — simple thread and multithread programs
- `Process/` — orphan and zombie process demonstrations
- `IPC/` — unnamed pipe, System V message queue, and shared memory

## Compile C programs
Most C files:
```bash
gcc file.c -o program
./program
```

Thread programs:
```bash
gcc file.c -o program -pthread
./program
```

These are compact teaching examples. Scheduling implementations assume valid, small input and use simplified assumptions (e.g. processes arrive together; priority value 0/1 ordering may depend on your lab convention). Confirm the exact expected format with your lab record/instructor.
