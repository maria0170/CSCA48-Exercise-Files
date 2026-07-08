/* Write a program that prints out all the possible sequences of 3 characters in ’A-Z’, e.g.
*/

#include<stdio.h>


int main(){
    
    for(char a =65; a <= 90; a++){
        for(char b = 65; b <=90; b++){
            for(char c = 65; c <=90; c++){
                printf("%c%c%c\n", a, b, c);
            }

        }



    }

    return 0;

}
