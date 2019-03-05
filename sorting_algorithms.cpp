/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <stdlib.h>
#include <stdio.h>
#include "sorting_algorithms.h"
#include "stopwatch.h"


#include <stdio.h>
#include <stdlib.h>
void init_random(int* array, int number)
{
	for (int i = 0; i < number; i++)
  {
		array[i] = rand() % 1025;
	}
}
	void bubble_sort(int* array, int number)
  {
    int i, j;
    for (i = 0; i < number-1; i++)

        // Last i elements are already in place
        for (j = 0; j < number-i-1; j++)
            if (array[j] > array[j+1])
            {
              int temp = array[j];
              array[j] = array[j+1];
              array[j+1] = temp;
            }
  }
void	insertion_sort(int* array, int number)
{
	int j,i;
	for (j = 1; j < number; j++)
  {
			int key = array[j];
			i = j - 1;
			while (i >= 0 && array[i] > key) {
				array[i + 1] = array[i];
				i--;
			}
			array[i + 1] = key;
		}
  }
