# C++ Fundamentals & Recursion Practice

A collection of small, self-contained C++ programs written while working
through pointers, structs, OOP, file I/O, and recursion. Each file is a
single compilable example focused on one idea — build it, run it, read it.

## Layout

- **`fundamentals/`** — pointers, references, arrays, structs, initialization
  styles, and a couple of small algorithms (prime check, anagram check,
  arbitrary-precision addition).
- **`recursion/`** — factorial, Fibonacci, Tower of Hanoi, Pascal's
  triangle / nCr, fast exponentiation, indirect and tree recursion, and two
  ways of approximating `e^x` from its Taylor series (direct summation vs.
  Horner's method).
- **`oop/`** — inheritance, heap-allocated objects, exception handling.
- **`file-io/`** — reading/writing plain files and reading/writing an object
  via overloaded stream operators.

## Building and running

Every example is a standalone `.cpp` file with a `main()` — no build system
needed:

```sh
g++ -std=c++17 -Wall -Wextra -o /tmp/out recursion/factorial.cpp
echo 5 | /tmp/out
```

CI (`.github/workflows/build.yml`) compiles every file on each push to catch
anything that stops building.

## License

MIT — see [LICENSE](LICENSE).
