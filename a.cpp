#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;


void reverseArray(int *array, int size);
void printArray(int *array, int size);

int main(){


  int array[] ={1,2,3,4,5,6,7,8,9};

  int size = 9 ;

  printArray(array,size);

  reverseArray(array, size);

  cout << "the reserved array is :" << endl;

  printArray(array, size);

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
