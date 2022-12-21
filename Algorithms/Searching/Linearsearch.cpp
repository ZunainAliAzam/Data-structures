// write a program of linear search in cpp
#include <iostream>
using namespace std;
class LinearSearch
{
    int arr[100], n, key;
    public:
    void getdata();
    void search();
    void display();
};
void LinearSearch::getdata()
{
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched: ";
    cin>>key;
}
void LinearSearch::search()
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Element found at position: "<<i+1;
            break;
        }
        else if(i==n-1)
        {
            cout<<"Element not found";
        }
    }
}
void LinearSearch::display()
{
    cout<<"The array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    LinearSearch l;
    l.getdata();
    l.display();
    l.search();
    return 0;
}
