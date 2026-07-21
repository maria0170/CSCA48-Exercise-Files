/*    Write a little program that declares an int array with 10 entries, it asks the user for the values for each
of these entries (these values should be in 0 to 100); and then computes and prints out the average of the values
in the array (in eﬀect, you’re implementing the average() function found in most spread-sheet applications!)

*/

# include <stdio.h>

float average_val (int array[]){
    int count = 0; 
    for (int i =0; i != 10; i++){
        count += array[i];
}

    return count/10.0; 
}

int main(){
    int my_array[10];
    int q; 

    printf("Please enter a integer number from 0 to 100\n");
    
    for (int i = 0; i != 10; i++){
        scanf("%d", &q);
        getchar();

        while ( q < 0|| q > 100){
                printf("Please enter a vaild number");
                 scanf("%d", &q);
                } 

        
        my_array[i] = q;
        printf("The array[%d] = %d\n", i, q);
        

            }

    float avg = average_val(my_array); 
    printf("Thus the average of the array is %f", avg); 

    return 0; 
}
