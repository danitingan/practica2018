#include<iostream>
using namespace std;
int v[1000],n;
void citire()
{int i;
cout<<"Introduceti n:"<<endl;
  cin>>n;

cout<<"Introduceti sirul de numere:"<<endl;
for(i=1;i<=n;i++)
  cin>>v[i];
}
void afis()
{int i;
cout<<"Sirul sortat este:"<<endl;
for(i=1;i<=n;i++)
  cout<<v[i]<<" ";
cin>>i;
}
void pozitie(int p,int u,int &k)
{int i,j,di,dj,aux;
i=p;
j=u;di=0;dj=-1;
while(i<j)
{if(v[i]>v[j])
  {aux=v[i];
   v[i]=v[j];
   v[j]=aux;
   aux=di;
   di=-dj;
   dj=-aux;
   }
i=i+di;
j=j+dj;
}
k=i;
}
void quick(int p,int u)
{int k;
if(p<u)
{pozitie(p,u,k);
 quick(p,k-1);
 quick(k+1,u);
 }
}
int main ()
{citire();
 quick(1,n);
 afis();
}
