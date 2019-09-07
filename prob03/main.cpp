// This program calculates a person's height in feet (') and inches (").


#include <iostream>

int main()
{

  int height;
  double height2;
  double height3;

  std::cout<< "Enter the person's height in inches" << std::endl;
  std::cin >> height;

  height2= height / 12;
  height3= height % 12;

  std::cout<<" That person is " << height2 <<"\'" << height3 << "\""<< std::endl;

  return 0;

}
