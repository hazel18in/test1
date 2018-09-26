
#include <iostream>

using namespace std;

int main()
{
    //cout<<"Hello World ";

int x []={3,2,1,2,4,5};
int b = 0;
int a,n = 5;

for(int i=0;i<6;i++)
{
a=x[i];
std::cout<< "the element of array = " << a << "\n" ;
  for(int y=i+1;y<6;y++)
  {
    std::cout<< "the element of array matched with "<<a<<"is " << x[y] << "\n" ;  
   b=a+x[y];
    if (b==n)
     {
      std::cout<<" the numbers are "<< a <<" and " <<x[y] << "\n";
     // break;
      }

  }

}
    return 0;
}
