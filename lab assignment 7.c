/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n, int swaps[])
{
  int i,j,temp;

  for(i = 0; i < n-1; i++)
    {
      for(j = 0; j < n-1-i; j++)
        {
          if(arr[j] > arr[j+1])
          {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            //increments number of swaps
            swaps[i]++;
          }
        }
    }
  //prints output while traversing the array
  for(i = 0; i < n-1; i++)
    printf(" pass #%d : %d\n", i+1, swaps[i]);
}

int main() {
  int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
  //this is how we get the number of values in the array
  int n = sizeof(arr)/sizeof(arr[0]);
  int i,j;

  //malloc the memory for swapped numbers
  int *swaps = (int *)malloc((n-1)*sizeof(int));

  //as we traverse through the list we can count swaps at each pass
  for(i = 0; i< n-1; i++){
    swaps[i] = 0;
  }

  bubbleSort(arr, n, swaps);

  
  
  
  return 0;
}
