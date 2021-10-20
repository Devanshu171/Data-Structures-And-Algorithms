#include <iostream>
using namespace std;

class Array
{
private:
    int *A;
    int size;
    int length;
    void swap(int *x, int *y); // as it is used by other functions so it need to be  global


public:
    Array()      //constructor
    {
        size=10;
        length=0;
        A=new int[size]; 
    }
    Array(int sz)       //paramatrized constructor
    {
        size=sz;
        length=0;
        A=new int[size];
    }
    ~Array()
    {
        delete []A;
    }

void Display();
void Append( int x);
void Insert( int index, int x);
int Delete( int index);

int LinearSearch( int key);
int LinearSearchT( int key);
int LinearSearchH( int key);
int BinSearch( int key);
int RBinSearch(int a[], int l, int h, int key);
int get( int index);
void set( int index, int x);
int max();
int min();
int sum();
float Avg();
int Rsum( int n);
void Revers();
void Revers2();
void leftShift( int n);
void insertSorted( int x);
int isSorted();
void rearrange();
 Array* merge( Array arr2);


};
void Array::Display()
{
    cout << "Elements are: ";
    for (int i = 0; i < length; i++)
        cout << A[i] << " ";
}

void Array::Append(int x)
{
    if (length < size)
        A[length++] = x;
}
void Array::Insert( int index, int x)
{
    if (index >= 0 && index <= length)
    {
        for (int i = length; i > index; i--)
            A[i] = A[i - 1];
        A[index] = x;
        length++;
    }
}
int Array::Delete( int index)
{
    int x = 0;
    if (index >= 0 && index <=length)
    {
        x = A[index];
        for (int i = index; i < length - 1; i++)
            A[i] = A[i + 1];
        length--;
        return x;
    }
    return 0;
}
void Array::swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int Array::LinearSearch( int key)
{
    for (int i = 0; i < length; i++)
    {
        if (key == A[i])
            return i;
    }
    return -1;
}
int Array::LinearSearchT( int key) //Using Transposition
{
    for (int i = 0; i < length; i++)
    {
        if (key == A[i])
        {
            swap(&A[i], &A[i - 1]);
            return i;
        }
    }
    return -1;
}
int Array::LinearSearchH(int key)          //using move to head
{
    for(int i=0;i<length;i++)
   {
       if(key==A[i])
      swap( &A[i],&A[0]);
    return i;
    }
return -1;

}

int Array::BinSearch( int key)
{
    int l, mid, h;
    l = 0;
    h = length - 1;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == A[mid])
            return mid;
        else if (key < A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int Array::RBinSearch(int a[], int l, int h, int key)
{
    int mid;

    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
            return mid;
        else if (key < a[mid])
            return RBinSearch(a, l, mid - 1, key);
        else
            return RBinSearch(a, mid + 1, h, key);
    }

    return -1;
}
int Array::get( int index)
{
    if (index >= 0 && index < length)
        return A[index];
    return -1;
}
void Array::set( int index, int x)
{
    if (index >= 0 && index < length)
        A[index] = x;
}
int Array::max()
{
    int max = A[0];
    {
        for (int i = 1; i < length; i++)
            if (A[i] > max)
                max = A[i];
    }
    return max;
}
int Array::min()
{
    int min = A[0];
    {
        for (int i = 1; i < length; i++)
            if (A[i] < min)
                min = A[i];
    }
    return min;
}

int Array::sum()
{
    int total = 0;
    for (int i = 1; i < length; i++)
        total +=A[i];

    return total;
}
float Array::Avg()
{

    return (float)sum() / (length);
}
int Array::Array::Rsum( int n)
{
    if (n < 0)
        return 0;
    else
        return Rsum( n - 1) + A[n];
}
void Array::Revers()
{
    int *B;
    int i, j;
    B = new int[size];
    for (i = length - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = A[i];
    }
    for (i = 0; i < length; i++)
       A[i] = B[i];
}
void Array::Revers2()
{
    int i, j;
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        swap(&A[i], &A[j]);
    }
}
void Array::Array::leftShift( int n)
{

    for (int i = 0; i < n; i++)
    {
        int x = A[0];
        for (int i = 0; i <length - 1; i++)
        {
            A[i] = A[i + 1];
        }
        A[length - 1] = x;
    }
}
void Array::insertSorted(int x)
{
    if (length == size)
    {
        return;
    }
    int i = length - 1;
    while (i >= 0 && A[i] > x)
    {
        A[i + 1] = A[i];
        i--;
    }
    length++;
    A[i + 1] = x;
}
int Array::isSorted()
{
    for (int i = 0; i < length - 1; i++)
    {
        if (A[i] > A[i + 1])
            return 0;
        else
            return 1;
    }
}
void Array::rearrange()
{
    int i, j;
    i = 0;
    j = length - 1;
    while (i < j)
    {
        while (A[i] < 0)
            i++;
        while (A[j] >= 0)
            j--;
        if (i < j)
            swap(&A[i], &A[j]);
    } 
}
 Array *Array::merge( Array arr2)
{
    int i,j,k;
    i=k=j=0;

     Array *arr3 = new  Array(length+arr2.length);
    while(i<length && j<arr2.length)
        {
            if(A[i]<arr2.A[j])
                arr3->A[k++]=A[i++];
            else 
               arr3->A[k++]=arr2.A[j++];
        }
        for(;i<length;i++)
            arr3->A[k++]=A[i];

        for(;j<arr2.length;j++)
            arr3->A[k++]=arr2.A[j];
  
   arr3->length=length+arr2.length;
return arr3;



}
int main()
{
     Array *arr1;
 int ch,sz;
 int x,index;
    cout<<"Enter size of array: ";
    cin>>sz;
    arr1=new Array[sz];

do   {
    cout<<"Menu"<<'\n';
    cout<<"1. Insert"<<'\n';
    cout<<"2. Delete"<<'\n';
    cout<<"3. Search"<<'\n';
    cout<<"4. Sum"<<'\n';
    cout<<"5. Display"<<'\n';
    cout<<"6. Exit"<<'\n';

    cout<<"Enter your choice ";
    cin>>ch;
    switch (ch)
    {
    case 1: cout<<"Enter an element and index ";
            cin>>x>>index;
            arr1->Insert(index,x);
            break;
    case 2: cout<<"Enter an index ";
            cin>>index;
           cout<<"Deleted element is"<<arr1->Delete(index);
            break;
    case 3: cout<<"Enter an element ";
            cin>>x>>index;
           cout<<"element index is :"<< arr1->LinearSearch(x);
            break;
    case 4: cout<<"Sum is: "<<arr1->sum()<<'\n';
            break;
    case 5: arr1->Display();
            
    
    }

}while(ch<6);
    
    return 0;
}