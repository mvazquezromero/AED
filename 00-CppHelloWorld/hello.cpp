#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("output.txt");
  myfile << "Hello, World!.\n";
  myfile.close();
  return 0;
}