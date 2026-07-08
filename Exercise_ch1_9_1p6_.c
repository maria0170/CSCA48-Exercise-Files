 /* Write a small program that uses a for loop to go over the numbers
from 1 to 100, and prints out any that are perfect squares. The output of your program should look like:
4 = 2*2
9 = 3*3
16 = 4*4
. (there are more perfect squares printed)
100 = 10*10
You will need to use for loops, conditional statements, and printf().
*/
// returns 0 if is a sqaure and 1 if it is not a sqaure 
int is_sqaure(int n){
    int i = 1;
    while (i != n){
        if(i * i == n){
            return 0;

        
        }
        i++;
    }
   return 1;
}

// to get the number that is the n * n 
int val(int n){
   int i = 1;
    while (i != n){
        if(i * i == n){
            return i;
            break;
            
        }
        i++;
    }
    return 0; 
}


#include <stdio.h>

int main(){

    for(int i = 1; i<=100; i++){
        if(is_sqaure(i) == 0){
            int n = val(i);
            printf("%d = %d * %d\n", i, n, n);
        }


    }

    return 0; 
}
