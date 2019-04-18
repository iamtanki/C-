#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;


void reverseArray(int *array, int size);
void printArray(int *array, int size);

class Shape {
   protected:
      int width, height;
   public:
      Shape( int a=0, int b=0)
      {
         width = a;
         height = b;
      }

     virtual int area()
      {
         cout << "Parent class area :" <<endl;
         return 0;
      }
};
class Rectangle: public Shape{
   public:
  Rectangle( int a=0, int b=0):Shape() { }
      int area ()
      { 
         cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }
};
class Triangle: public Shape{
   public:
  Triangle( int a=0, int b=0) : Shape(){ }
      int area ()
      { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
};
// 程序的主函数
int main()
{
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,7);
 
   // 存储矩形的地址
   shape = &rec;
   // 调用矩形的求面积函数 area
   cout <<  shape->area() << endl;;
 
   // 存储三角形的地址
   shape = &tri;
   // 调用三角形的求面积函数 area
   cout<<  shape->area() << endl;
   
   return 0;
}

void reverseArray(int *array, int size){

  if(size>1){
    int mid = size / 2;
    for(int i = 0; i <mid ; i++ ){
      int tmp = array[i];
      array[i] = array[size  - i -1];
      array[size - i - 1] = tmp;
    }
  }

}


void printArray(int *array, int size){

  if(size >0){
    for(int i =0 ; i<size ; i++){
      cout<< array[i] << endl;
    }
  }else{
    cout << " 数目为0 " << endl;
  }
  
}
