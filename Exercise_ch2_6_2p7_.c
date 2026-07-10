/*  Declares a string in main(), you can fill that string with any text you wish, for example: ”Now I know how
to program in C!”.

Write a function that takes the string as input, and reverses the string. Mind the fact that the length of
the string may be diﬀerent than the size of the array, and that the reversing process should not move the
end-of-string delimiter.
Try to implement the reverse function using (pointer+oﬀset) notation only.
Have your code print the reversed string.

Write a function that takes takes as input the string, a query character, and a target character, then goes
over the string and replaces any occurrence of the query character with the target character.
Try to implement the replace function using (pointer+oﬀset) notation only.
Have your code print the string after replacing all occurrences of a with i.
For instance,

If the input string is "Hawdy! that strange pointer was NULL"
then the reverse function would print:
LLUN saw retniop egnarts taht !ydwaH
and after replacing ’a’ with ’i’ the program would print
LLUN siw retniop egnirts tiht !tdwiH

*/

#include <stdio.h>
#include <string.h>

void reverse_str(char *p, int val){

    for (int i =0; i < val/2; i++){
        char temp = *(p + i);
        *(p + i) = *(p + (val -1 -i));
        *(p +(val -1- i)) = temp;
    }
  
    printf("%s\n", p); 

}

void replaces_char(char *p, char q, char t){

    int i = 0;
    while(*(p+i) != '\0'){
        if (*(p+i) == q){
            *(p+i) = t;
        }

        i++;
    }
    printf("%s\n", p);

}

int main(){
    char array[120];
    strcpy(array, "Input : Now I know how to program in C!\n");
    printf("%s\n", array);

    reverse_str(array, strlen(array));
    replaces_char(array, 'a', 'i');

    return 0;
}
