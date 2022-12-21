// write a code for binary search in cpp
#include <iostream>
using namespace std;
// class binarySearch
// {
//     int arr[100], n, key, mid, low, high;
//     public:
//     void getdata();
//     void search();
//     void display();
// };
// void binarySearch::getdata()
// {
//     cout<<"Enter the number of elements in the array: ";
//     cin>>n;
//     cout<<"Enter the elements of the array: ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Enter the element to be searched: ";
//     cin>>key;
// }
// void binarySearch::search()
// {
//     low=0;
//     high=n-1;
//     while(low<=high)
//     {
//         mid=(low+high)/2;
//         if(arr[mid]==key)
//         {
//             cout<<"Element found at position: "<<mid+1;
//             break;
//         }
//         else if(arr[mid]<key)
//         {
//             low=mid+1;
//         }
//         else
//         {
//             high=mid-1;
//         }
//     }
//     if(low>high)
//     {
//         cout<<"Element not found";
//     }
// }
// void binarySearch::display()
// {
//     cout<<"The sorted array is: ";
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
// int main()
// {
//     binarySearch b;
//     b.getdata();
//     b.search();
//     b.display();
//     return 0;
// }
int main(){
    int arr[100], n, key, mid, low, high;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched: ";
    cin>>key;
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            cout<<"Element found at position: "<<mid+1;
            break;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(low>high)
    {
        cout<<"Element not found";
    }
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}