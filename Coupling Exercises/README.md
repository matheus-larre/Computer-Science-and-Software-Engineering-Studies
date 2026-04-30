# Software Design: Coupling Studies

This module focuses on **Coupling**, the second pillar of modularity discussed in Chapter 5 of Valente's *Modern Software Engineering*.

## Concepts

Coupling measures the strength of dependencies between modules. High-quality software aims for **Loose Coupling**, where modules are independent and interact through simple, well-defined parameters.

### Practical Examples in C

#### 1. Tight Coupling (`TightCoupling.c`)
In this version, the logic is "hard-wired" to specific data structures and global variables:
*   **Dependency on Globals**: The function depends on a global `tax_rate`. If the global variable changes, the function breaks.
*   **Knowledge of Internals**: The function knows too much about the `Product` struct. Any change in the data structure forces a rewrite of the business logic.

#### 2. Loose Coupling (`LooseCoupling.c`)
In this improved version, the function acts as a "pure data transformer":
*   **Parameter-Driven**: It receives only the necessary values (price, tax, discount) as simple types.
*   **Independence**: It doesn't care where the data comes from (structs, databases, or user input), making it highly reusable and easy to test.

### Why it matters
Loose coupling allows you to change how data is stored or retrieved without affecting the core logic of your application, a vital skill for scalable software.

*This repository is continuously updated as I progress through my studies.*