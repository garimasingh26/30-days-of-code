Write a program to calculate the area and perimeter of the rectangle.
#include <iostream> 
using namespace std;
int main() 
{ 
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    
    cout << "Area is " << a*b << endl; 	
    cout << "Perimeter is " << 2*(a+b) << endl; 	
    return 0; 
    
}
