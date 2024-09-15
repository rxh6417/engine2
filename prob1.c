#include <stdio.h>
#include <string.h>
#include "prob.h"


    void trim(char str[], int size){
        int len = strlen(str);
        if(len > 0 && str[len - 1] == '\n'){
            str[len - 1]= '\0';

        }
        /*void trim(char str[], int size) {
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';  // Properly remove the newline character
    }
}*/


    }



char *find_word(wordentry words[], char *key, int num_words){

    for(int i = 0; i < num_words; i++){ // looping through each word in the array

    if(strcmp(words[i].word,key) == 0){         // Return the pointer to the found word


    return words[i].word; // If the words are the same, return the word from that array which are same

    }
    
}
// If no word matches the key then return NULL
return NULL;

}