#include <iostream>
using namespace std;
#include "Document.h"


class Editor {
  public:

  Document doc;
  
  Editor();
  Editor(string Filename);
  void loop();

};