
//////////////////////////////////////
//
// This file contains classes that are helfpul in some way.
//
// Created: Chip Audette, Oct 2013
//
/////////////////////////////////////
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class dataPacket_ADS1299 {
  int sampleIndex;
  std::vector<int> values;
 public: dataPacket_ADS1299(int nValues) : values(nValues, 0){
    
  }
  int printToConsole() {
    cout <<"printToConsole: dataPacket = ";
    cout << sampleIndex;
    for (int i=0; i < values.size(); i++) {
      cout << ", " + values[i];
    }
    cout << "\n";
    return 0;
  }
  int copyTo(dataPacket_ADS1299 & target) {
    target.sampleIndex = sampleIndex;
    for (int i=0; i < values.size(); i++) {
      target.values[i] = values[i];
    }
    return 0;
  }
};


class filterConstants {
 public: 
  std::vector<double> a, b;
  string name;

 filterConstants(const std::vector<double> & b_given, const std::vector<double> & a_given, const string & name_given): b(b_given), a(a_given), name(name_given){
    
  }
};
