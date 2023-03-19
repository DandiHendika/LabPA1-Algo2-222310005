#include <iostream>
using namespace std;
 
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void PrintArray(int* array, int n)
{
    int i;

    for( i = 0; i < n; i++) cout<<array[i]<<',';
}

int SplitArray(int* array, int pivot, int startIndex, int endIndex)
{
    int leftBoundary = startIndex;
    int rightBoundary = endIndex;
    
    while(leftBoundary < rightBoundary)            
    {
        
         while( pivot < array[rightBoundary]          
                && rightBoundary > leftBoundary)      
         {
             
              rightBoundary--;                      
         }
         swap(array[leftBoundary], array[rightBoundary]);
        
         while( pivot >= array[leftBoundary]          
                && leftBoundary < rightBoundary)     
         {
             
              leftBoundary++;                        
         }
         swap(array[rightBoundary], array[leftBoundary]);
    }
    
    return leftBoundary;                              
}


void QuickSort(int* array, int startIndex, int endIndex)
{
    
    int pivot = array[startIndex];                  
    int splitPoint;
    
    if(endIndex > startIndex)                        
    {
       
        splitPoint = SplitArray(array, pivot, startIndex, endIndex);
        array[splitPoint] = pivot;
        
        QuickSort(array, startIndex, splitPoint-1);  
        
        QuickSort(array, splitPoint+1, endIndex);    
    }
}

int main()
{
    int SIZE;  
  
    cout << "Masukan banyak index array : ";
    cin >> SIZE;
    int array[SIZE];
    cout << "Program ini mendemonstrasikan quick sort menggunakan fungsi recursive" << endl;
    for(int i = 0; i < SIZE; i++)
    {
         cout<<"Masukan nilai : ";
         cin>>array[i];
    }
    
    cout<<endl<<"Array yang diinput : "<<endl;
    PrintArray(array, SIZE);

    QuickSort(array,0,SIZE - 1);
    cout<<endl<<"Array yang sudah disorting : "<<endl;
    PrintArray(array,SIZE);
 
    cin.sync();
    cin.get();
}