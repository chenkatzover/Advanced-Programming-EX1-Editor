#include "Editor.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

 Editor::Editor(){ doc.row = -1;}

Editor::Editor(string Filename){  //constructor that gets the file name

 ifstream MyReadFile(Filename);
 if (!MyReadFile.is_open()){ cout << "Unable to open file"; }

string line;
while(getline(MyReadFile, line)){
  if(!line.empty()){
		doc.fileContents.push_back(line);
  }
	}
  MyReadFile.close();
}

void Editor::loop() {

 bool flag=true;
 char c;
 while(flag){
  cin >> c; // Get user input from the keyboard
  switch(c){

case '1':
    doc.row=0;
    cout << doc.fileContents[doc.row]<< endl;
    break;
 
 case '3':
    doc.row=2;
    cout << doc.fileContents[doc.row]<< endl;
    break;

  case '+':
    int num;
    num=getchar()-'0';
    doc.row= doc.row+num;
    cout << doc.fileContents[doc.row]<< endl;
    break;

  case '-':
    int num2;
    num2=getchar()-'0';
    doc.row= doc.row - num2-1;
    cout << doc.fileContents[doc.row]<< endl;
    break;

  case '$':
     doc.row=doc.fileContents.size()-1;
     cout << doc.fileContents[doc.row]<< endl;
    break;

  case 'a':
     doc.runA();
    break;

  case 'i':
     doc.runI();
    break;

  case 'c':
     doc.runC();
     for (int i = 0; i < doc.fileContents.size(); i++)
    {
        cout <<"////";
        cout << doc.fileContents[i] << endl;
        cout <<"////";
    } 
    break;

  case 'd':
     doc.runD();
    break;
    
  case '/':
     doc.runSlash();
    break;

  case 's':
     doc.runS();
    break;
  case 'j':
     doc.runJ();
    break;
  case 'w':
     doc.runW();
    break;
  case 'q':
     flag=false;
    break;
default:
   cout<<"?"<<endl;
}
 }
}