#include<iostream>
using namespace std;
int arreglo[]={1,2,3,4,5};
int n=2;
int *p;
int  main ()
{
p=&arreglo[0];
cout<<"arreglo direccion " <<p<<endl;
cout<< " arreglo valor "<< *p <<endl;
p=p+1;
cout<<"arreglo valor"<< *p<<endl;
return 0;
}
