#include <iostream>
using namespace std;

int main() {
int num1, num2;
cout <<"Enter 2 numbers, the second number must be bigger than the first.";
cin >> num1 >> num2;
if (num2 < num1)
{
   cout << "The second number must be bigger than the first.";
}
else 
{
   for (int i = num1; i <= num2; i+=5 )
   {
      cout << i << " ";
   }
}

   return 0;
}
