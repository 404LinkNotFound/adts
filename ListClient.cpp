#include <iostream>
#include "List.h"

using namespace std;

int main()
{
int i ;
int num;
 List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...
 while(i<5)
	{
	cout<< "enter num" <<endl;
	cin>>num; 
 L1.insert(num,i);
 L2.insert(num+2,i);
 
 i++;
	}
L1.display(); 
L2.display();



}

