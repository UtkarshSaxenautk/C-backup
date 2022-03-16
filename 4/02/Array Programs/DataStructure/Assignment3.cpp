#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;

void enter_data(int array[] , int size)
{
    srand(time(0));
    for(int i = 0; i < size ; i++)
    {
      array[i] = rand() % 10;
    }

}

void displaydata(int array[] , int size)
{
    cout << "Array of numbers is :-----" << endl;
    for(int i = 0 ; i < size ; i++) 
    {
        cout << array[i] << " " ;
    }
}

void insertdata(int array[] , int size , int total )
{
    if(size == total)
    {
        cout << "\n" << "Insertion is not possible" << endl;
    }
    else{
          int key, pos;
         cout << "\n" << "Enter the key you want to insert :";
         cin >> key;
         cout << "\n" << "Enter the index value where you want to insert :";
         cin >> pos;
          for(int i = size  ; i >= pos ; i--)
          {
            array[i + 1] = array[i];
          }
        array[pos] = key ;
        size++ ;
        displaydata(array , size);
    }
}

void deletedata(int array[] , int size)
{
    cout << "Enter the index value of the element that you want to delete :";
    int del;
    cin >> del;
    for (int i = del; i < size; i++)
    {
     array[i] = array[i + 1];
    }
    size-- ;
    displaydata(array , size);
}

void LinearSearch(int array[] , int size )
{
    cout << "Enter Element to be searched : " ;
    int key ;
    cin >> key ;
    int i , res = 0 ;
    for( i = 0 ; i < size ; i++)
    {
        if(key == array[i])
        {
            
            cout << "Index of key : " << i << endl;
            res++ ;
            break ;
        }
        
    }
   if(res == 0)
   {
       cout << "Key not found" << endl;
   }


}

int binarySearch(int arr[] , int start , int size , int key)
{
    if(start <= size )
    {
        int mid = (start + size - 1 ) / 2 ;
        if(arr[mid] == key)
        {
           // cout << "Index of key = " << mid ;
           return mid ;
        }
       if(arr[mid] < key)
        {
             return  binarySearch(arr , mid + 1 , size - 1  , key);
        }
        //else //(arr[mid] > key)
        //{
            return binarySearch(arr , start  ,  mid - 1 , key);
        //}
    }
    
        //cout << "Key not found" << endl;
        return -1 ;
    
}

void sorting(int a[], int n)
{
    int temp;
    for (int i = 0; n - 1 > i; i++)
    {
    for (int j = 0; n - 1 - i > j; j++)
    {
      if (a[j] > a[j + 1])
      {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
    }
}

int main()
{
 int max, size;
 cout << endl
 << "##########################################" << endl;
 cout << "Enter the maximum size of array :";
 cin >> max;
 cout << "Enter the no. of elements you want in the array :";
 cin >> size;
 cout << "\n" << "###########################################" << endl;
 int array[max];
 enter_data(array , size);
 displaydata(array , size);
 cout << "\n###_______________________________###" << endl;
 cout << "Press 0 : To Traverse the array " << endl;
 cout << "Press 1 : To do insertion" << endl;
 cout << "Press 2 : To do deletion" << endl;
 cout << "Press 3 : To do linear searching" << endl;
 cout << "Press 4 : To do binary searching" << endl;
 cout << "Press 5 : To exit" << endl;
 cout << "###_______________________________###" << endl;

 cout << "Enter the choice :  " << endl;
 int choice ;
 cin >> choice ;

 switch (choice)
 {
 case 0: 
     displaydata(array , size);
     break;
 case 1:
     insertdata(array , size , max);    
     break;
 case 2:
      deletedata(array , size);
      break;
 case 3:
      LinearSearch(array , size);
      break;
 case 4:
      sorting(array, size);
      displaydata(array , size);
      int key, result;
      cout << "\n" << "Enter the no. you want to find :";
      cin >> key;
      result = binarySearch(array , 0 , size , key);
      if (result == -1)
      {
      cout << "\n" << "Element is not found" << endl;
       }
      else
      {
         cout << "\n" << "Element is found at index value " << result;
      }
      break;
              
case 5:
     cout << "\nExit sucessfully." << endl;
     break;
 }

}




