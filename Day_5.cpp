//Write the function for insertion sort

void InsertionSort( int arr[], int n)
{
  int temp;
  for(int i=1, i<n, i++)
  {
    int num = arr[i];
    while(arr[i-1]>num && i>0)
    {
      temp = arr[i];
      arr[i] = arr[i-1];
      arr[i-1]  = temp;
    }
  }
  return arr;
}
