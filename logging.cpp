#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void log(char *msg){
  ofstream myfile;
  myfile.open ("example.txt", fstream::out|fstream::app);
  myfile << msg << "\n";
  myfile.close();
}
