#include<iostream>

using namespace std;

int main()
{
    int i,j,n,alesul,v[100];
    cout<<"introdu numarul de elemente= ";
    cin>>n;
    cout<<"introdu elementele : ";

    for(i=0;i<=n-1;i++)

    { cout<<"v["<<i+1<<"]=";
        cin>>v[i];
    }

    for(i=1;i<=n-1;i++)
    {
        alesul=v[i];
        j=i-1;

        while((alesul<v[j])&&(j>=0))
        {
            v[j+1]=v[j];
            j=j-1;
        }

        v[j+1]=alesul;
    }

    cout<<"Elementele sortate sunt : ";
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
