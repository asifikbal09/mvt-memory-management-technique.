
# Memory Allocation Simulation Program (MVT Technique)

This program simulates the **Multiple Variable Tasks (MVT)** memory management technique. MVT is a memory management scheme where processes are allocated variable-sized memory blocks dynamically based on their needs. This technique reduces internal fragmentation but may lead to external fragmentation.

The program demonstrates how memory is allocated to processes based on their requirements and calculates the external fragmentation.

---

## Features

- Implements **MVT memory management**.
- Dynamically allocates memory to processes based on availability.
- Displays whether memory allocation for each process was successful.
- Handles situations where memory becomes full, preventing further allocation.
- Calculates and displays the **external fragmentation**.

---

## Prerequisites

- Basic understanding of C programming.
- Familiarity with memory management concepts, especially MVT.
- A C compiler (e.g., GCC).

---

## How to Compile and Run

1. Save the code to a file named `MVT.c`.
2. Open a terminal and navigate to the directory where the file is saved.
3. Compile the code using the following command:
   ```bash
   gcc MVT.c -o MVT
   ```
4. Run the program:
   ```bash
   ./MVT
   ```

---

## Input and Output Description

### Input

1. **Total Memory Size (ms):** The total memory available for allocation.
2. **Number of Processes (n):** The number of processes requesting memory.
3. **Memory Required for Each Process (mp[i]):** The amount of memory required by each process.

### Output

- Displays each process, its memory requirement, and whether it was **allocated** or **not**.
- If memory is allocated, it shows the **internal fragmentation** (fixed at `0` since MVT eliminates internal fragmentation).
- Displays a message if memory becomes full and remaining processes cannot be accommodated.
- Calculates and displays the **total external fragmentation** (remaining unallocated memory).

---

## Sample Run

### Input:
```
Enter the total memory available -- 100
Enter the number of processes -- 4

Enter memory required for process 1 -- 30
Enter memory required for process 2 -- 40
Enter memory required for process 3 -- 50
Enter memory required for process 4 -- 20
```

### Output:
```
PROCESS        MEMORY REQUIRED     ALLOCATED     INTERNAL FRAGMENTATION
1              30                 YES           0
2              40                 YES           0
3              50                 NO            ---
4              20                 YES           0

Memory is Full, Remaining Processes cannot be accommodated
Total External Fragmentation is 10
```

---

## Key Concepts of MVT in This Program

1. **Dynamic Partitioning:** Each process gets exactly the memory it requires if enough memory is available.
2. **No Internal Fragmentation:** MVT eliminates internal fragmentation as there are no fixed block sizes.
3. **External Fragmentation:** Memory not allocated to any process remains as external fragmentation.

---

## Key Variables in the Code

- `ms`: Total memory size available.
- `ef`: External fragmentation (remaining memory after allocation).
- `n`: Number of processes.
- `mp[10]`: Array storing memory required by each process.
- `p`: Pointer indicating the currently used memory.

---

## Limitations

- Does not implement memory compaction, which could help in minimizing external fragmentation.
- Assumes process requests are entered in a single session, with no dynamic additions or deletions.
- Simple simulation; does not handle advanced MVT features such as contiguous vs non-contiguous memory allocation.

---

## Future Enhancements

- Implement **memory compaction** to reduce external fragmentation.
- Allow dynamic addition and removal of processes.
- Extend the simulation to handle different allocation strategies like first-fit, best-fit, and worst-fit.

---

## Author

This program is an educational demonstration of the **MVT memory management technique** in operating systems.
