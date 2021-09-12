#include <stdio.h>
void quicksort (int [], int, int);   //Function Prototype
int main()
{
    int list[50];                            //Regular procedure...........
    int size, i;
    printf("Enter the number of elements: ");
    scanf("%d", &size); 
    printf("Enter the elements to be sorted:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    }                                          //upto here-------->
     quicksort(list, 0, size - 1);             //Function calling...
     printf("After applying quick sort\n");
    for (i = 0; i < size; i++)
    {
     printf("%d ", list[i]);
     }
}

void quicksort(int list[], int low, int high)    //Called function...
{
    int pivot, i, j, temp;
    if (low < high)
      {
         pivot = low;                      //Every First value in list as a pivot
         i = low;
         j = high;
         while (i < j) 
          {
             while (list[i] <= list[pivot] && i <= high)  //from left to right move when ever MAX value occurs stop while loop
              {
                  i++;
              }
             while (list[j] > list[pivot] && j >= low)    //from right to left move when ever MIN value occurs stop while loop
              {
                  j--;
               }

            if (i < j)                   //If True   swap i,j th positions

            {

                temp = list[i];

                list[i] = list[j];

                list[j] = temp;

            }

        }                   

        temp = list[j];                  // If i index crosses the j th index swap jth index value and pivot value

        list[j] = list[pivot];

        list[pivot] = temp;              // Pivot value inserted in to its exaclty value right now

        quicksort(list, low, j - 1);     //Again 0 to j-1 value calling

        quicksort(list, j + 1, high);    //  j+1 to high value calling

    }

}
