#include <stdio.h>
#include <string.h>
#include "prob.h"

int main(){

wordentry dictionery[] = {
    {"Nezuko"},
    {"wow"},
    {"gman"}
};


char search[100];


printf("Search here man : \n");
fgets(search,sizeof(search),stdin);
trim(search,sizeof(search));

char *result = find_word(dictionery,search,3); // calling the function

if (result != NULL){
    printf("Found: %s\n",result);
    
}else{
    printf("word not found\n");
}


    return 0;
}