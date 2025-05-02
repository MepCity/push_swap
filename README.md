<div align="center">
	<h1>🔄 push_swap</h1>
	<p>This repository contains the implementation of the push_swap project, focusing on sorting a stack of integers using a limited set of stack operations efficiently.</p>
    <br />
	<img src="https://img.shields.io/badge/norminette-passing-success"/>
	<img src="https://img.shields.io/badge/leaks-none-success" />
</div>

## 🌳 Folder Structure

```
.
├── actions/               # Stack operation implementations (sa, pb, ra, etc.)
│   ├── push_ab.c
│   ├── rev_rotate_ab.c
│   ├── rotate_ab.c
│   └── swap_ab.c
├── ft_printf/             # Custom printf library
├── libft/                 # Custom C standard library implementations
├── push_swap.c            # Entry point and main logic
├── sorting_functions.c    # Sorting logic dispatcher
├── quicksort.c            # Recursive quicksort algorithm
├── utils.c                # Utility helpers (checksorted, strlen_ps, etc.)
├── free.c                 # Memory deallocation routines
├── ft_error.c             # Error handling
├── push_swap.h            # Structs and function declarations
├── Makefile
```

## ⚙️ Algorithm Logic

The algorithm uses two stacks (A and B) and limited operations to sort numbers:

* **Small input (<=3):** hardcoded sequences via `sort_three()`
* **Mid-size:** optimized sorting using conditional logic
* **Large input:** recursive quicksort variant using pivoting and stack partitioning

### ⏩ Quicksort Flow (Detailed):

1. A pivot is selected using `ft_getpivot()`, which calculates the median of the current stack.
2. Elements < pivot are pushed to stack B via `pb()`.
3. The remaining elements in A (>= pivot) are rotated (`ra`) then reverse rotated (`rra`) to maintain order.
4. Both halves are recursively sorted: `quicksort_a()` and `quicksort_b()`.
5. Once sorted, elements from B are pushed back to A using `pa()`.

## 🔢 Stack Operations

| Operation         | Description                          |
| ----------------- | ------------------------------------ |
| `sa` / `sb`       | Swap first two elements of A/B       |
| `pa` / `pb`       | Push top from B/A to A/B             |
| `ra` / `rb`       | Rotate A/B upwards                   |
| `rra` / `rrb`     | Reverse rotate A/B                   |
| `ss`, `rr`, `rrr` | Apply dual operations on both stacks |

## 📅 Usage

### Clone the Repository:

```bash
git clone https://github.com/yourusername/push_swap.git
cd push_swap
```

### Compile the Project:

```bash
make
```

### Run:

```bash
./push_swap <list_of_integers>
```

### Example:

```bash
./push_swap 3 2 1
# Output: sa rra
```

## 🔧 Development Details

* Language: C
* Custom printf & libft used
* Memory leaks: Checked with `valgrind` / `leaks`
* Norminette: Fully passing

## 📚 Resources

* [Sorting Algorithms Visualizer](https://www.cs.usfca.edu/~galles/visualization/Algorithms.html)

---

<p align="center">Made with ❤️ as part of 42 project curriculum</p>
