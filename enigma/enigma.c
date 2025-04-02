#include <stdio.h>

const char alphabet[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char plugboard[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char reflector[26] = "YRUHQSLDPXNGOKMIEBFZCWVJAT";
char rotors[3][26] = {
    "EKMFLGDQVZNTOWYHXUSPAIBRCJ",
    "AJDKSIRUXBLHWTMCQGZNPYFVOE",
    "BDFHJLCPRTXVZNYEIWGAKMUSQO",
};

void rotate_rotor(char rotor[26]) {
  char temp = rotor[0];
  for (int i = 0; i < 25; i++) {
    rotor[i] = rotor[i + 1];
  }
  rotor[25] = temp;
}

void rotate_rotors(char rotors[3][26], int counter) {
  rotate_rotor(rotors[0]);
  if (counter % 26 == 0)
    rotate_rotor(rotors[1]);
  if (counter % (26 * 26) == 0)
    rotate_rotor(rotors[2]);
}

char encrypt_char(char input, char rotors[3][26], const char plugboard[26]) {
  char output = input;

  // Step 1: Pass through the plugboard
  output = plugboard[output - 'A'];
  // Step 2: Pass through the rotors (forward direction)
  for (int i = 0; i < 3; i++) {
    output = rotors[i][output - 'A'];
  }
  // Step 3: Reflect the character
  output = reflector[output - 'A'];
  // Step 4: Pass back through the rotors (reverse direction)
  for (int i = 2; i >= 0; i--) {
    for (int j = 0; j < 26; j++) {
      if (rotors[i][j] == output) {
        output = 'A' + j;
        break;
      }
    }
  }
  // Step 5: Pass through the plugboard again
  output = plugboard[output - 'A'];

  return output;
}

void encrypt_message(const char *input, char *output, char rotors[3][26],
                     const char plugboard[26]) {
  int counter = 1;
  for (int i = 0; input[i] != '\0'; i++) {
    output[i] = encrypt_char(input[i], rotors, plugboard);
    rotate_rotors(rotors, counter);
    counter++;
  }
  output[counter] = '\0';
}

int main() {
  char message[] = "HELLO"; // User input;
  char encrypted[6]; // Encrypted output

  // plugboard hardcode
  plugboard['A' - 'A'] = 'M';
  plugboard['M' - 'A'] = 'A';

  encrypt_message(message, encrypted, rotors, plugboard);

  printf("Encrypted: %s\n", encrypted);
  return 0;
}
