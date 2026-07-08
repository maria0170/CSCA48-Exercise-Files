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
