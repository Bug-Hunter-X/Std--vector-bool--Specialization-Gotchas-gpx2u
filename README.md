# std::vector<bool> Specialization: A Source of Subtle Bugs

This repository demonstrates a common, yet often overlooked, issue with the `std::vector<bool>` specialization in C++. While seemingly convenient for storing boolean values, its space optimization can lead to surprising and difficult-to-debug behavior.

The bug is explained in `vector_bool_bug.cpp`.  A solution is provided in `vector_bool_solution.cpp`.

**Key takeaway:** Avoid `std::vector<bool>` unless absolutely necessary for memory optimization and carefully understand its implications for element access and comparisons. Consider using `std::vector<char>` or `std::vector<uint8_t>` instead for better predictability and consistency with other standard containers.