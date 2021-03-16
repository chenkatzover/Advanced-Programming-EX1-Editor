#include "Editor.h"
#include "Document.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main(int argc, char* argv[]) {
switch (argc) {
case 1:
 Editor editor;
break;
case 2:
// Document document=argv[1];
break;

 editor.loop();
}

 return 0;
}
