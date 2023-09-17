# include<iostream>
using namespace std;

void PrintArray(int arr[],int n)
    {for (int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }cout<<endl;
    }
void SwapAlternative(int arr[], int size)
{
    for(int i=0; i<size; i+=2)
    if (i<size)
    {
         swap(arr[i+1],arr[i]);
    }
}
 
int main()
{
    int even[8]={1,2,3,4,5,6,7,8};
    int odd[5]={1,3,5,7,9};    
    
    SwapAlternative(even,8);
    PrintArray(even,8);
    SwapAlternative(odd,5);
    PrintArray(odd,5);
    return 0;
} 

