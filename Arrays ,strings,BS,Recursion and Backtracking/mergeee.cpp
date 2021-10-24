#include<iostream>
using namespace std;
struct Array{
    int A[20];
    int size;
    int length;
};
void Display(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;

}
struct Array* merge(struct Array *arr1,struct Array *arr2)
{
    struct Array *arr=new struct Array[arr1->length+arr2->length];
    int i=0;
    int j=0;
    int k=0;
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        arr->A[k++]=arr1->A[i++];
        else
        arr->A[k++]=arr2->A[j++];
    }
    for(;i<arr1->length;i++)
        arr->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
        arr->A[k++]=arr2->A[j];
arr->length= arr1->length+arr2->length;
        return arr;
}
struct Array* UN(struct Array *arr1,struct Array *arr2)
{
    struct Array *arr=new struct Array[arr1->length+arr2->length];
    int i=0;
    int j=0;
    int k=0;
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        arr->A[k++]=arr1->A[i++];
      else if (arr1->A[i]>arr2->A[j])
        arr->A[k++]=arr2->A[j++];
        else
        {
            arr->A[k++]=arr1->A[i++];
            j++;
        }
    }
    for(;i<arr1->length;i++)
        arr->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
        arr->A[k++]=arr2->A[j];
arr->length= k;
        return arr;

}
 struct Array* unsortedUni(struct Array *arr1,struct Array *arr2)
{
        struct Array *arr=new struct Array[arr1->length+arr2->length];
        int k=0;
        for(int i=0;i<arr1->length;i++)
            arr->A[k++]=arr1->A[i];
        for(int i=0;i<arr2->length;i++)
        {
            for(int j=0;j<=k;j++)
            {
                if(arr2->A[i]== arr->A[j])
                break;
                arr->A[k++]=arr2->A[i++];
            }
            

        }
        arr->length=k;
        return arr;

}
int main(){

struct Array arr1={{1,3,5,9,18},10,5};  
struct Array arr2={{2,3,7,9,20},10,5};  
 struct Array *arr;    
//  arr=merge(&arr1,&arr2);
//  arr=UN(&arr1,&arr2);
 arr=unsortedUni(&arr1,&arr2);
 
 Display(*arr);
 return 0;
}