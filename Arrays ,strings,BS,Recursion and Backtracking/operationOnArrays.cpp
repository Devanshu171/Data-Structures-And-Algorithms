#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr)
{
    cout << "Elements are: ";
    for (int i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
}

void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}
void Insert(struct Array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i - 1];
        arr->A[index] = x;
        arr->length++;
    }
}
int Delete(struct Array *arr, int index)
{
    int x = 0;
    if (index >= 0 && index <= arr->length)
    {
        x = arr->A[index];
        for (int i = index; i < arr->length - 1; i++)
            arr->A[i] = arr->A[i + 1];
        arr->length--;
        return x;
    }
    return 0;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array arr, int key)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
            return i;
    }
    return -1;
}
int LinearSearch(struct Array *arr, int key) //Using Transposition
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[i - 1]);
            return i;
        }
    }
    return -1;
}
// int LinearSearch(struct Array *arr,int key)          //using move to head
// {
//     for(int i=0;i<arr->length;i++)
//    {
//        if(key==arr->A[i])
//       swap( &arr->A[i],&arr->A[0]);
//     return i;
//     }
// return -1;

// }

int BinSearch(struct Array arr, int key)
{
    int l, mid, h;
    l = 0;
    h = arr.length - 1;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int RBinSearch(int a[], int l, int h, int key)
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
int get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
        return arr.A[index];
    return -1;
}
void set(struct Array *arr, int index, int x)
{
    if (index >= 0 && index < arr->length)
        arr->A[index] = x;
}
int max(struct Array arr)
{
    int max = arr.A[0];
    {
        for (int i = 1; i < arr.length; i++)
            if (arr.A[i] > max)
                max = arr.A[i];
    }
    return max;
}
int min(struct Array arr)
{
    int min = arr.A[0];
    {
        for (int i = 1; i < arr.length; i++)
            if (arr.A[i] < min)
                min = arr.A[i];
    }
    return min;
}

int sum(struct Array arr)
{
    int total = 0;
    for (int i = 1; i < arr.length; i++)
        total += arr.A[i];

    return total;
}
float Avg(struct Array arr)
{

    return (float)sum(arr) / (arr.length);
}
int Rsum(struct Array arr, int n)
{
    if (n < 0)
        return 0;
    else
        return Rsum(arr, n - 1) + arr.A[n];
}
void Revers(struct Array *arr)
{
    int *B;
    int i, j;
    B = new int[arr->size];
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = arr->A[i];
    }
    for (i = 0; i < arr->length; i++)
        arr->A[i] = B[i];
}
void Revers2(struct Array *arr)
{
    int i, j;
    for (i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        swap(&arr->A[i], &arr->A[j]);
    }
}
void leftShift(struct Array *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        int x = arr->A[0];
        for (int i = 0; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->A[arr->length - 1] = x;
    }
}
void insertSorted(struct Array *arr, int x)
{
    if (arr->length == arr->size)
    {
        return;
    }
    int i = arr->length - 1;
    while (i >= 0 && arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->length++;
    arr->A[i + 1] = x;
}
int isSorted(struct Array arr)
{
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
            return 0;
        else
            return 1;
    }
}
void rearrange(struct Array *arr)
{
    int i, j;
    i = 0;
    j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[j] >= 0)
            j--;
        if (i < j)
            swap(&arr->A[i], &arr->A[j]);
    }
}
struct Array *merge(struct Array *arr1, struct Array *arr2)
{
    int i,j,k;
    i=k=j=0;
    struct Array *arr3 = new struct Array[arr3->size];
    while(i<arr1->length && j<arr2->length)
        {
            if(arr1->A[i]<arr2->A[j])
                arr3->A[k++]=arr1->A[i++];
            else 
               arr3->A[k++]=arr2->A[j++];
        }
        for(;i<arr1->length;i++)
            arr3->A[k++]=arr1->A[i];

        for(;j<arr2->length;j++)
            arr3->A[k++]=arr2->A[j];
    arr3->length=arr1->length+arr2->length;
    arr3->size=10;
return arr3;
}
int main()
{
    struct Array arr1;
 int ch;
 int x,index;
    cout<<"Enter size of array: ";
    cin>>arr1.size;
    arr1.A=new int[arr1.size];
do{
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
            Insert(&arr1,index,x);
            break;
    case 2: cout<<"Enter an index ";
            cin>>index;
           cout<<"Deleted element is"<<Delete(&arr1,index);
            break;
    case 3: cout<<"Enter an element ";
            cin>>x>>index;
           cout<<"element index is :"<< LinearSearch(&arr1,x);
            break;
    case 4: cout<<"Sum is: "<<sum(arr1);
            break;
    case 5: Display(arr1);
            
    
    }

}while(ch<6);

    return 0;
}