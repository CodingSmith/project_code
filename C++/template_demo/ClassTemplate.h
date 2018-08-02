// ClassTemplate.h
#ifndef ClassTemplate_HH
#define ClassTemplate_HH
#include <iostream>
//declaration of the template
template<typename T1,typename T2>

class myClass{

private:
     T1 I;
     T2 J;

public:
     myClass(T1 a, T2 b);//Constructor
     void show();
};

//definitions of the member functions
//*note: all the member functions are supposed to be defined in the header(*.h) file
template <typename T1,typename T2>
myClass<T1,T2>::myClass(T1 a,T2 b):I(a),J(b){}


template <typename T1,typename T2>
void myClass<T1,T2>::show()
{
     std::cout << "I=" << I << ", J=" << J << std::endl;
}
#endif