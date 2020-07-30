/*====================================================== 
 Program: Mean
 Objectives: To find an average of all input data
 Input: n (integer), data (float) for n values
 Output: mean of all data
 Programmer: Panupong Sornkhom (panupongs@nu.ac.th)
 Release Version: 1.0
 Date: 2020-07-30
=======================================================*/
#include <stdio.h>
#include <stdlib.h>     // for using exit()

int main(void) {
  /* variable declaration */
  int n, index; 
  float sum = 0.0, data, mean;

  /* Read input */
  printf("How many data?");
  scanf("%d",&n);           // Read value n
  if (n<=0) {
    printf("Error! number of data should be a positive integer.\n");
    exit(1); 
  }

  /* Processing */
  index = 1;                // set initial index value
  while (index <= n) {      // Begin loop 
    printf("Please input data %d:",index);
    scanf("%f",&data);      // Read data
    if (data<0.0||data>100.0) // data validation
      continue;               // read input again
    sum = sum + data;       // sum = data1 + data2 + ...
    index++;                // update statement
  }                         // End loop
  mean = sum/n;

  /* Show output */
  printf("Mean = %.1f\n",mean);
  return 0;
}
