#include <iostream>
using namespace std;

void doMorph(string aString, string aSecondString) {
  if(aString.length() != aSecondString.length()) {
    cerr << "Cannot do the morph action. Strings must be off same length." << endl;
    exit(1);
  }
  cout << "Morphing " << aString << " to " << aSecondString << ":" << endl;
  string StringA = aString;
  string StringB = aSecondString;
  for(int i = 0; i <= StringA.length(); i++) {
    StringA[i] = StringB[i];
    cout << StringA << endl;
  }
  cout << endl;
}

int main() {
  doMorph("floor", "brake");
  doMorph("wood", "book");
  doMorph("a fall to the floor", "braking the door in");
  return 0;
}
