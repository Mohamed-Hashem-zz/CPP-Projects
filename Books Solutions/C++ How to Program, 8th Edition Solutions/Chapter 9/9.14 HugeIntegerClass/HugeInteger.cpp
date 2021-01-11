#include "HugeInteger.h"


HugeInteger::HugeInteger()
    {
        for (int i = 0; i < length; i++)
            {
                arr1[i] = 0 ;
                arr2[i] = 0 ;
                arr3[i] = 0 ;
            }
    }


HugeInteger::HugeInteger(double *a1 , double *a2)  { setArrays(a1 , a2); }

void HugeInteger :: setArrays (double *a1, double *a2)    {  setArray1(a1) ; setArray2 (a2) ; }

void HugeInteger :: setArray1(double *arr)
    {
        for (int i = 0; i < length; i++)
            {
                arr1[i]  = arr[i];
            } 
    }

void HugeInteger :: setArray2(double *arr)
    {
        for (int i = 0; i < length; i++)
            {
                arr2[i]  = arr[i];
            } 
    }

double* HugeInteger :: getArray1() { return arr1 ;}

double* HugeInteger :: getArray2() { return arr2 ;}

void HugeInteger::displayArray1()
    {
    cout << setprecision(2) << setiosflags(ios::fixed | ios::showpoint ) ;

        for (int i = 0; i < length; i++)
            {
            cout <<  *(getArray1() + i) << "  " ;
            }

        cout << endl;
    }

void HugeInteger::displayArray2()
    {
        for (int i = 0; i < length; i++)
            {
                 cout << *(getArray2() + i) << "  ";
            }

        cout << endl;
    }

HugeInteger HugeInteger :: adding (HugeInteger obj )
    {
        HugeInteger temp ;

        for (int i = 0; i < length; i++)
                {  
                    temp.arr1[i] = arr1[i] + obj.arr2[i]; 
                }
  
        return temp;
    }

HugeInteger HugeInteger ::subtracting (HugeInteger obj )
    {
        HugeInteger temp ;

        for (int i = 0; i < length; i++)
                { 
                    temp.arr1[i] = arr1[i] - obj.arr2[i];  
                }

        return temp;
    }

HugeInteger HugeInteger :: multuplying (HugeInteger obj )
    {
        HugeInteger temp ;

        for (int i = 0; i < length; i++)
                {  
                    temp.arr1[i] = arr1[i] * obj.arr2[i]; 
                }
  
        return temp;
    }

HugeInteger HugeInteger ::  dividing (HugeInteger obj )
    {
        HugeInteger temp ;

        for (int i = 0; i < length; i++)
            {  
                temp.arr1[i] = (obj.arr2[i] == 0 ) ? temp.arr1[i] = 0 : arr1[i] / obj.arr2[i]  ; 
            }
  
        return temp;
    }

HugeInteger HugeInteger ::  modulusing (HugeInteger obj )
    {
        HugeInteger temp ;

        for (int i = 0; i < length; i++)
            {
                temp.arr1[i] =  fmod( arr1[i] , obj.arr2[i]) ; 
            }
  
        return temp;
    }