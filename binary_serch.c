#include<stdio.h>
#define n 10
int a[] = {10,15,17,27,37,41,47,55,61,69};

int binarysearch(int l,int h,int ele)
{
    while(l<=h)
    {
        int mid = (l+h)/2;
        if(a[mid]==ele)
        {
            return mid +1;
        }
        else if(a[mid]<ele)
        {
            l = mid + 1;
        }
        else 
        {
            h = mid -1;
        }
    }
    return -1;
}
int main()
{
    int ele = 10;
    int i =binarysearch(0,n-1,ele);
    if(i==-1)
    {
        printf("element is not found....");
    }
    else
    {
        printf("search element is found at %d ",i);
    }
}