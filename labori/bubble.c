#include <stdio.h>
#include <string.h>
void swap(char *xp, char *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(char arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

/* Function to print an array */
void printArray(char arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    for (i=0; i < size; i++)
        printf("%c ", arr[i]);
    printf("\n");
}


// Driver program to test above functions 
int main()
{
    printf("Ievadiet savu simbolu virkni:");
    char arr[256];
    fgets(arr,sizeof(arr),stdin);

    int n = strlen(arr);
    bubbleSort(arr, n);

    printf("sakartotaa virkne: \n");
    printArray(arr, n);
//min un max
    printf("Minimala vertiba ir %d un atbilst simbolam '%c' \n",arr[0],arr[0]);
    printf("Maksimala vertiba ir %d un atbilst simbolam '%c'\n",arr[strlen(arr)-1],arr[strlen(arr)-1]);
//videja veriba
    long int summ=0;
    for (int i=0;i<strlen(arr)-1;i++) summ+=arr[i];
    char average = summ/strlen(arr)-1;
    printf("Videja vertiba ir %d, kas atbilst simbolam '%c'\n",average,average);
//mediana
    if (strlen(arr)%2 == 1){
      char median = arr[strlen(arr)/2-1];
      printf("Mediana ir %d un atbilst simbolam '%c'\n",median,median);
      }
    else {
      char median = (arr[strlen(arr)/2-1]+arr[strlen(arr)/2])/2;
      printf("Mediana ir %d un atbilst simbolam '%c'\n",median,median);
      }
//moda
   int count = 1;
   int k = 0;
   int countmax = 0;
   char save =0;
   for(int i = 0; i<strlen(arr)-1; i++){
      for(k; k<strlen(arr)-1; k++){
        if (arr[i]==arr[k]) count++;
      }
      if(countmax < count){
        countmax = count;
        save = arr[k];
      }
   }
   printf("Virknes Moda ir '%c'ar %d locekliem \n",save,countmax-1);
//histogramma
   FILE*df;
   df = fopen("data.txt","w");
   int x_axis[128];
   for(int i = 0;arr[i]!=10; i++)x_axis[arr[i]]++;
   for(int i =32; i<127;i++) fprintf(df,"%c\t%d\n",i,x_axis[i]);
   fclose(df);


    return 0;
}
