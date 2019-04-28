#include <iostream>
#include <fstream>

using namespace std;


struct MyException : public exception
{
  const char * what () 
  {
    return "C++ Exception";
  }
};


int main(){

  int v = 45;
  int *p ;
  p = &v;

  int &r = *p;

  *p = 56;

  cout << "the point is : " <<  r << endl;
    cout << "the point is : " <<  v << endl;
      cout << "the point is : " <<  *p << endl;

  char data[100] ;

  const char *file  = "file.txt";

  //  ofstream outfile;
  // outfile.open(file, ios::app);

  // cin.getline(data,100);

  //outfile << data << endl;

  // outfile.close();

  //ifstream ifile;
  // ifile.open(file);

  // ifile >> data;

  // cout << data << endl;

  try
  {
    throw MyException();
  }
  catch(MyException& e)
  {
    std::cout << "MyException caught 1 " << std::endl;
    std::cout << e.what() << std::endl;
  }
  catch(std::exception& e)
  {
    //其他的错误
  }
  
  
  return 0;

}
