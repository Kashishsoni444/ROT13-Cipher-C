# ROT13 Cipher in C

A simple command-line ROT13 cipher tool written in C. ROT13 is a substitution cipher that shifts each letter by 13 positions in the alphabet. Since the alphabet has 26 letters, applying ROT13 twice always returns the original text — making it its own inverse.

---

## How ROT13 Works

| Input | Output |
|-------|--------|
| A | N |
| B | O |
| Z | M |
| Hello | Uryyb |
| Uryyb | Hello |

Non-alphabetic characters (numbers, spaces, punctuation) are passed through unchanged.

---

## Files

| File | Description |
|------|-------------|
| `rot13.c` | Main source file with ROT13 logic and CLI interface |

---

## How to Compile

Make sure you have GCC installed. Then run:

```bash
gcc rot13.c -o rot13
```

---

## How to Run

```bash
./rot13
```

You will be prompted to enter a string. The ROT13 encoded or decoded result will be printed immediately.

---

## Example

```
==============================
       ROT13 Cipher Tool
==============================
Enter text to encode/decode: Hello World
ROT13 result: Uryyb Jbeyq
==============================
(Apply ROT13 again to decode)
```

Applying ROT13 again:

```
Enter text to encode/decode: Uryyb Jbeyq
ROT13 result: Hello World
```

---

## Key Properties

- ROT13 is a special case of the Caesar cipher with a shift of 13
- It is its own inverse — encoding and decoding use the exact same function
- Only alphabetic characters are affected
- Case is preserved — uppercase stays uppercase, lowercase stays lowercase
- Commonly used to obscure spoilers, puzzle answers, and offensive content in forums

---

## Author

**Kashish Soni**
BCA, AI and Data Analytics — LNCT University, Bhopal
[github.com/Kashishsoni444](https://github.com/Kashishsoni444)
