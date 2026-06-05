# TUfast-Eco-Interview
This repository contains a simple task taken from LeetCode to verify programming skills of TUfast Eco Team applicants  

The following tasks were taken from the LeetCode:
* https://leetcode.com/problems/find-the-degree-of-each-vertex/description/?sorting=W3sic29ydE9yZGVyIjoiQVNDRU5ESU5HIiwib3JkZXJCeSI6IkRJRkZJQ1VMVFkifV0%3D
* https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/description/?sorting=W3sic29ydE9yZGVyIjoiQVNDRU5ESU5HIiwib3JkZXJCeSI6IkRJRkZJQ1VMVFkifV0%3D
* https://leetcode.com/problems/score-of-a-string/description/?sorting=W3sic29ydE9yZGVyIjoiQVNDRU5ESU5HIiwib3JkZXJCeSI6IkRJRkZJQ1VMVFkifV0%3D

The following programming languages are available:
* Java
* C++
* Python

## Running Tests

Replace `<N>` with the task number (1, 2, or 3).

### Java

```bash
cd Java/Task_<N>
./gradlew test
```

### C++

Requires CMake 3.14+ and a C++17-compatible compiler. Google Test is fetched automatically on the first build.

```bash
cd C++/Task_<N>
./run_tests.sh
```

### Python

Requires Python 3 and pytest (`pip install pytest`).

```bash
cd Python/Task_<N>
python3 -m pytest test_sol.py -v
```