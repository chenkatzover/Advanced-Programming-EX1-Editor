#include <iostream>
using namespace std;

class Editor {
  public:

  Document doc;
  
  Editor();
  Editor(string Filename);
  void loop();

};