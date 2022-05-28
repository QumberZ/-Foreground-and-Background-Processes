//
//  120Secs.cpp
//  305Lab6
//
//  Created by Qumber Zaidi on 5/19/22.
//

#include <iostream>
#include "math.h"
#include <unistd.h>
using namespace std;
int main()
{
int Secs120=2800;
float total=0;
int i=0;
int * array;
for(i=0;i<Secs120;i++)
{
   for(int j=0;j<Secs120;j++)
   {
        array = new int[5];
        for(int k=0;k<Secs120;k++){
                total=total+((float)k*0.75);///pow(2,n);
                array[0]=total;
        }
        delete  array;
   }
}
    
return 0;
}
