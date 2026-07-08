/* Modify the program from (1) so that it prints both the upper-case and lower-case version of each letter
side by side, e.g.
A - a
B - b
C - c
.
.
.
.
Z - z
*/

#include<stdio.h>

int main(){
    
    int i = 65;
    int n = 97;
    while(n != 123 && i != 91 ){  
        printf("%c - %c\n", i, n);
        i++;
        n++;
    }

    return 0;

}


// also can be done like this 
#include <stdio.h>

int main (){

    char i = 65;
    char j = 97;

    while (i<=90 && j <= 122)
    {
        printf("%c - %c\n", i, j);
        i = i+1;
        j = j+1;
    }


    return 0;
}
