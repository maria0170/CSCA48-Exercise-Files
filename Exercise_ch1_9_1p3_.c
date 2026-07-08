/* Write a program that prints out the prime numbers between 2 and 100
*/

#include<stdio.h>
// returns 1 if prime and 0 if not prime 
int is_prime(int val){
     if (val == 2){
        return 1;
    }
    else if(val % 2 == 0){
        return 0;
    }

    return 1; 
    }


int main(){
    
    for (int i = 2; i <=100; i++){
        if(is_prime(i)== 1){
            printf("%d\n", i);
        }

    }

    return 0;

}
