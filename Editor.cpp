#include "Editor.h"
#include "Document.h"
#include <iostream>
#include <string>

using namespace std;




void Editor::loop() {

Document doc;
  string x; 
  cin >> x; // Get user input from the keyboard

switch (x[0]) {

  case +:
    doc.runPluse();
    break;
  case -:
     doc.runMinus();
    break;
  case $:
     doc.runDollar();
    break;
  case a:
     doc.runA();
    break;
  case .:
     doc.runDot();
    break;
  case i:
     doc.runI();
    break;
  case c:
     doc.runC();
    break;
  case d:
     doc.runD();
    break;
  case /:
     doc.runSlash();
    break;
  case s:
     doc.runS();
    break;
  case j:
     doc.runJ();
    break;
  case w:
     doc.runW();
    break;
  case q:
     doc.runQ();
    break;
default:
    doc.runNum();
}