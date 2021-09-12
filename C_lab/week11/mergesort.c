#include <stdio.h>
void mergeSort(int [], int, int, int);   //Function prototypes
void partition(int [],int, int);
int main()
{

int list[50];                                //.....regular precedure
int i, size;
printf("Enter total number of elements:");
scanf("%d", &size);
printf("Enter the elements:\n");
for(i = 0; i < size; i++)
{
scanf("%d", &list[i]);
}                                           //--->upto here
partition(list, 0, size - 1);            //function Calling....           
printf("After merge sort:\n");
for(i = 0;i < size; i++)
{
printf("%d   ",list[i]);
}
}
void partition(int list[],int low,int high)   //Called Function...
{ 
int mid;
if(low < high)
{
        mid = (low + high) / 2;    //For Spilt two sub parts

        partition(list, low, mid); //First Sub part again calling for spilt the list

        partition(list, mid + 1, high);//Second Sub part again calling for spilt the list 

        mergeSort(list, low, mid, high); //For merge Two lists with comparisions

    }
}
void mergeSort(int list[],int low,int mid,int high)// main Logic for comparision two lists
{
     int i, mi, k, lo, temp[50];
     lo = low;
     i = low;
     mi = mid + 1;
     while ((lo <= mid) && (mi <= high))
     {
        if (list[lo] <= list[mi])    //if True first list element copied into temprarory array
          {
             temp[i] = list[lo];
             lo++;
           }
        else                         //if False Second list element copied into temprarory array
          {
            temp[i] = list[mi];
             mi++;
           }
         i++;
       }
   if (lo > mid)                   //When ever low value crossed the mid value,then second list all elements copied into "Temp"          
    {
      for (k = mi; k <= high; k++)
        {
           temp[i] = list[k];
            i++;
         }
     }
  else                             //When ever mid+1 i.e mi value crossed the high value,then first list all elements copied into "Temp"
  {
   for (k = lo; k <= mid; k++)
     {
       temp[i] = list[k];
        i++;
      }
   }
  for (k = low; k <= high; k++)    //copy into actuall List i.e list[]
    {
      list[k] = temp[k];
    }
}
