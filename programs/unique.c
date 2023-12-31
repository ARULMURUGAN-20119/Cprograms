#include <stdio.h>
#define MAX_SIZE 100
int main()
{
 int arr[MAX_SIZE], freq[MAX_SIZE];
 int size, i, j, count;
 scanf("%d", &size);
    // Get the N elements as input
    // Assign the array freq[] as -1 (i.e., as default value)
 for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
 // Check the frequency of all the elements in an array
 for(i=0; i<size; i++)
    {
    count = 1;
    for(j=i+1; j<size; j++)
    {
        if(arr[i] == arr[j])
        {
            count++;
            freq[j] = 0;
        }
 }
 // Store the number of occurrences of each element of the given array
 if(freq[i] != 0)
    {
        freq[i] = count;
    }
 }
 // Print only the unique elements
 // If freq[i] value is 1, then it has occured only one time
 for(i=0; i<size; i++)
{
    if(freq[i] == 1)
    {
        printf("%d ", arr[i]);
    }
}
 return 0;
}
