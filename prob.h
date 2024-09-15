

/// declaring of the function for prob1.c

typedef struct{
    char *word;

}wordentry;  // I just made a data type like int, float same as "wordentry" in this case

char *find_word(wordentry words[], char *key, int num_words);

//# About the wordentry and typedef

//wordentry word[] this is an array of word entry structs.
// each element of the arry is a "wordentry" that contains  a pointer to a word, means string.
// Function will search through this "wordentry" array
// collection of data.

//# About the arguments in functions
// "char *key" this is an pointer to a string
// The function uses this to search within the array word[]
//In simpler word its the target word you want to find in the array.

// int stuff represents the number of elements the word[] array is keeping
// This helps to know the function how much to run. other wise it may run forever if we don include this.



//# About the function *find_word

//*find_word is not a function pointer it just a normal function that returns a char* pointer to a character.
//The function takes 3 arguments  wordentry structs, a string, integer

    void trim(char str[], int size);
