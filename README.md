# Data Structures and Algorithms practice

A collection of small competitive-programming solutions and C++ standard-library exercises. The `STL/` directory contains mostly standalone C++ files named after individual problems, plus a few Java solutions. This is a practice archive, not one application with a shared build or test suite.

## Run a solution

Choose a source file and compile it separately. For example, with a C++17 compiler:

```sh
g++ -std=c++17 -O2 -Wall STL/A_Three_Indices.cpp -o /tmp/three-indices
/tmp/three-indices < input.txt
```

Each problem expects its own input format. Consult the problem statement matching the filename before preparing `input.txt`. For a Java example, run `javac STL/AHalloumiBoxes.java` and then `java -cp STL AHalloumiBoxes` if its declared class name matches. Some prebuilt executables and editor/test artifacts are checked in under `STL/`; prefer compiling the source for your system rather than running a checked-in binary.

## Layout

- `STL/*.cpp`: C++ solutions and experiments.
- `STL/*.java`: Java solutions.
- `STL/.cph/` and `STL/.vscode/`: local competitive-programming/editor metadata, not a project-wide test suite.
