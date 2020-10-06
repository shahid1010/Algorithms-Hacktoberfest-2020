#include<stdio.h>
int binarysearch(int a[],int high,int low,int value);
int main()

{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int value=6,low=1,high=10;
    int r=binarysearch(a,high,low,value);
    printf("Found at possition %d\n",r);
}
int binarysearch(int a[],int high,int low,int value)
{
    int mid;
    if(high<low)
        return -1;
    mid=(high+low)/2;
    if(a[mid]==value)
    {
        return mid;
    }
    else if(a[mid]<value)
    {
        return binarysearch(a,high,mid+1,value);
    }
    else
    {
        return binarysearch(a,mid-1,low,value);
    }
}
