#include<iostream>

using namespace std;

int main()
{
    int i,j,n,alesul,v[100];
    cout<<"N = ";
    cin>>n;
    cout<<"introdu elementele : ";

    //for(i=0;i<n;i++)
    i = 0;
    while(i < n)
    {
        cout << "V[" << i << "] = ";
        cin>>v[i];
        i++;
    }
    i = 1;
    //for(i=1;i<=n-1;i++)
    while(i <= n-1)
    {
        alesul=v[i];
        j=i-1;

        while((alesul<v[j])&&(j>=0))
        {
            v[j+1]=v[j];
            j=j-1;
        }

        v[j+1]=alesul;
        i++;
    }

    i = 0;
    //for(i=0;i<n;i++)
    while(i < n)
    {
        cout<<v[i]<<" ";
        i++;
    }

    return 0;
}
