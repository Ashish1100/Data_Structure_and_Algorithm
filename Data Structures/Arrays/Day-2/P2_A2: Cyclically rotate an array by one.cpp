
//User function Template for C++

void rotate(int arr[], int n)
{
    int temp = arr[n-1];
   for (int i = n-1; i > 0 ; i--)
   {
       arr[i] = arr[i-1];
   }
   
   arr[0] =temp;
}

------------------------------------------------------------------------------



void rotate(int arr[], int n)
{
    int last_element = arr[n-1];
    
   for (int i = 0; i < n ; i++)
   {
       arr[n -(i+1)] = arr[n - (i+2)];
   }
   
   arr[0] = last_element;
   
}

------------------------------------------------------------------


void rotate(int arr[], int n)
{
    
    reverse(arr, arr + n-1);
    
    reverse(arr, arr+n);
   
}
  
