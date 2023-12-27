#include <iostream>
#include     "mycomplex.h"
using namespace std;

int main()
{
  //инициализация 
   Complex A,B(-4), C(23.0, 45.9);
  
  //вывод
   cout<<A <<","<< B<<","<<C <<endl;
  
  //сумма
    A=B+C;
    cout<<"A=B+C,A="<< A<<endl;

  //вычитание
    Complex M=B-C;
    cout<< "M = B - C, M = " << M << endl;
    cout<<"M*A="<<M*A<<endl;
    cout<<"M/4.45="<<M/4.45<<endl;

  //вывод комплексного Д
    Complex D;
    cout<<"Enter complex number D = "; cin >>D;

  //доп операции
    A+=C+D;
    cout << "D = " << D << "\nA = " << A << endl;
    
    return 0;
}
