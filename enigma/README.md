Enigma Machine
==============

This is a simple **C program** that simulates the basic functionality of the **Enigma machine**, a cipher device famously used during **WWII**, primarily by Nazi Germany, to encrypt and decrypt secret messages. The Enigma machine relied on a complex system of rotors, a plugboard, and a reflector to scramble plaintext into ciphertext, making it a groundbreaking tool in the history of cryptography.
About the Enigma Machine
The Enigma machine operates by substituting letters through a series of mechanical and electrical components. Each keystroke turns one or more rotors, changing the substitution pattern dynamically. The real machine included:

* **Rotors**: Rotating wheels that alter the electrical pathways.
* **Plugboard**: A panel to swap pairs of letters.
* **Reflector**: A fixed component that loops the current back through the rotors.

This simulator simplifies these mechanics into a programmatic form, focusing on the core encryption process.
Project Overview
This program replicates the Enigma's encryption by:

Simulating rotor movement and letter substitution.
Supporting basic configuration (e.g., rotor settings).
Encrypting and decrypting short text inputs.

It’s a lightweight implementation, not a full replica of the historical machine, but it captures the essence of how Enigma transformed text.

**How to Use**
---------------
* Compile the program using a C compiler (e.g., `gcc enigma.c -o enigma`).
* Run the executable (`./enigma`).
* Follow the prompts to input text and settings (e.g., rotor positions).
