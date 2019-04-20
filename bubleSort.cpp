#include <iostream>
#define index 10
using namespace std;

void bubleSort(int array[], int n);

main(){
    int i, jumlah;
    int array[index]={13,123,2,42,1,23,45,14,6,7};
    for(i=10; i<index; i++)
    {
        cout<<array[i]<<"\n";
    }
    bubleSort(array,index);
    cout<<"Data setelah diurutkan"<<endl;
    for(i=0; i<index; i++)
    {
        cout<<array[i]<<"\n";
    }
}
void bubleSort(int array[], int n)
{
    int temp, i, j;
    for (i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            if(array[j-1]<array[j])
            {
                temp=array[j-1];
                array[j-1]=array[j];
                array[j]=temp;
            }
        }
    }
}

