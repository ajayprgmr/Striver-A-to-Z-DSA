//check whether a character is vowel or consonant
function checkVowelOrConsonant(char) {
  // Convert the character to lowercase to handle both uppercase and lowercase inputs
  char = char.toLowerCase()

  // Check if the character is a vowel
  if (
    char === 'a' ||
    char === 'e' ||
    char === 'i' ||
    char === 'o' ||
    char === 'u'
  ) {
    return 'Vowel'
  }
  // Check if the character is a consonant (alphabetic character but not a vowel)
  else if (char >= 'a' && char <= 'z') {
    return 'Consonant'
  }
  // Handle cases where the input is not an alphabetic character
  else {
    return 'Not a valid alphabet character'
  }
}

// Example usage:
console.log(checkVowelOrConsonant('A')) // Output: "Vowel"
console.log(checkVowelOrConsonant('b')) // Output: "Consonant"
console.log(checkVowelOrConsonant('1')) // Output: "Not a valid alphabet character"
