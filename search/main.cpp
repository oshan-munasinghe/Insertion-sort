//insertion Sort
//oshan malith
//2020.04.16
#include <iostream>

using namespace std;

int main()
{
    int a[20],n,temp,i,j;
    cout<<"Enter Number of Elements : ";
    cin>>n;
    cout<<endl<<"Enter the elements of Array \n";

    for(i=0;i<n;i++){
        cout<<"Enter Element "<< i<<" : ";
        cin>>a[i];
    }
    for (i=1;i<n;i++){
        temp =a[i];
        j=i-1;

        while(temp<a[j] && j>=0){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;

    }
    cout<<"\n Sorted lists  \n";
    cout<<"(dessending order ) = ";
    for(i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
        }
         cout<<"\n\n(assending order ) = " ;
        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
}
