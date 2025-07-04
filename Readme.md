# Prime Number Checker in C

This program demonstrates how to check whether a number is a **prime number** using the C programming language. It includes two approaches:

---

## ✅ 1. Static Check
- A fixed number (`static_number = 2`) is checked.
- Logic: If the number is divisible by any number from 2 to (number - 1), it is **not** prime.
- Output: Displays whether the number is prime.

---

## ✅ 2. Dynamic Check
- The user is asked to input a number (`dynamic_number`).
- The same logic is applied to check if the entered number is prime.

---

## 📘 Concepts Covered

- `for` loops
- `if` conditions
- `%` modulo operator
- Flag variable (`prime`)
- Input/Output (`scanf`, `printf`)

---

## 💡 Notes

- The `prime` variable is **not initialized** before the loops — may lead to incorrect output for small numbers like 2. (This will be improved in future versions.)
- This program is written in **raw beginner-friendly format**, focusing on logic-building only.
- No functions or optimizations used yet.

---

## 📂 File Structure

