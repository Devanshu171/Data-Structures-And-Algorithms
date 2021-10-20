#include<iostream>
using namespace std;
struct Array
{
    int A[10];
    int size; // size of an array n
    int length; // no. of elements in an array
};

void Swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void Display(struct Array arr )
    {  
    for(int i=0;i<arr.length;i++)
    {   
        cout<<arr.A[i]<<" ";
     }
 cout<<endl;
    }
    void Append(struct Array *arr,int x)
    {   if(arr->length< arr->size)
        arr->A[arr->length++]=x;
    }
    void Insert(struct Array *arr,int index,int x)
    {      if(index>=0 && index<arr->length )  
     {
        for(int i=arr->length;i>index;i--)
            {
                arr->A[i]=arr->A[i-1];
            }
            arr->A[index]=x;
            arr->length++;
        }
    }

    void Delete(struct Array *arr,int index)
    {
        if(index>=0 && index <arr->length)
        {
            for(int i=index;i<arr->length-1;i++)
                arr->A[i]=arr->A[i+1];
                arr->length--;
            
            
        }
    }

    int LS(struct Array arr,int x)
    {
        for(int i=0;i<arr.length;i++)
            if(arr.A[i]==x) return i;
        return -1;
        
    }
    int LS1(struct Array *arr,int x)
    {
        for(int i=0;i<arr->length;i++)
            if(arr->A[i]==x)
             {  Swap(&arr->A[0],&arr->A[i]);
                 return i;
             }
        return -1;
        
    }
int BS(struct Array arr,int key)
{
    int l,h,mid;
    l=0;
    h=arr.length-1;

    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.A[mid]) 
        return mid;
        else if(key>arr.A[mid]) 
        l=mid+1;
        else
       h=mid-1;
    }
    return -1;

}
// int RBS(int a[],int l,int h,int key)
// {
//     int mid;
//     if(l<=h)
//     {   mid=(l+h)/2;
//         if(key==a[mid])
//         return mid;
//         else if(key>a[mid]) 
//         return RBS(a,mid+1,h,key);
//         else
//         return RBS(a,l,mid-1,key);

//     }
//     return -1;
// }

void Rotation(struct Array *arr,int n)
{
    while(n>0)
{
    int m=arr->A[0];
    for(int i=0;i<arr->length-1;i++)
    {
        arr->A[i]=arr->A[i+1];
    }
    arr->A[arr->length-1]=m;
    n--;
    }
}

void InsertSorted(struct Array *arr,int x)
{
    int i=arr->length-1;
    while(arr->A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->length++;
    arr->A[i+1]=x;
}
int isSorted(struct Array arr)
{
    for(int i=0;i<arr.length-1;i++)
            {
                if(arr.A[i]>arr.A[i+1])
                    return 0;
            }
            
            return 1; 
}
void Rearange(struct Array *arr)
{
    int i=0;
    int j=arr->length-1;
    while(i<j)
            {
                while(arr->A[i]<0) i++;
                while(arr->A[j]>=0) j--;
                if(i<j)
                {
                    int temp;
                    temp=arr->A[i];
                    arr->A[i]=arr->A[j];
                    arr->A[j]=temp;
                }
            }
}
struct Array* merge(struct Array *arr1,struct Array *arr2)
{
    struct Array arr=new struct Array[arr1->length+arr2->length];
    int i=0;
    int j=0;
    int k=0;
    while(i<arr1->lenth && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        arr->A[k++]=arr1->A[i++];
        else
        arr->A[k++]=arr2->A[j++]
    }
    for(;i<arr1->length;i++)
        arr->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
        arr->A[k++]=arr2->A[j];
arr->length= arr1->length+arr2->length;
        return arr;

}
int main()
{   
struct Array arr1={{1,3,5,9,18},10,5};  
struct Array arr2={{2,4,7,11,20},10,5};  
 struct Array *arr;

    //  Display(arr);
    // Append(&arr,10);
        //  Display(arr);
    // Insert(&arr,2,100);
        //  Display(arr);
        //  Delete(&arr,2);
        // Display(arr);
        // cout<<LS(arr,45);
        // cout<<LS1(&arr,45)<<'\n';
        // Display(arr);
    // cout<<BS(arr,5);
    // cout<<RBS(arr.A,0,arr.length,111);
    //  Display(arr);
    // Rotation(&arr,11);
    // InsertSorted(&arr,6);
   arr= merge(&arr1,&arr2);
     Display(*arr);
    // cout<<isSorted(arr);
    // Rearange(&arr);
        //  Display(arr);

    return 0;
}