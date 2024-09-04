#include<iostream>
using namespace std;
#define ll long long 
#define el "\n"
 template<typename T>
 class Arraylist{
  private:
   T *arr , size , length;
    public:
    Arraylist(const T &size) : length(0)  //o(1) , o(n)
    {
      if(size<=1){
         cout << "invalid size" << el;
         return ;
      }
      this->size = size;
       arr = new T [size];
    }
    bool IsEmpty(){  //o(1) ,o(1)
      return (length==0);
    }
    bool IsFull(){ //o(1) , o(1)
      return (length==size);
    }
    void Display(){  // o(n) , o(1)
      if(IsEmpty()){
         return ;
      }
      for(int i=0 ; i< length;i++){
         cout << arr[i] << ' ';
      }
      cout << el;
    }
    void Append(T element){ //o(1) , o(1)
        int newsize;
      if(IsFull()){
      Resize( newsize);
      }
      arr[length++] = element;
    }
    void Insert(ll index , const T &val){ // o(n) , o(1)
        int newsize;
          if(IsFull()){
      Resize( newsize) ;
      }
      for(int i= length;i>index;i--){
         arr[i] = arr[i-1];
      }
      arr[index] = val;
      length++;
    }
    Arraylist(const Arraylist & source){
      size = source.size;
      length = source.length;
      arr = new int [size];
      assert(arr !=NULL);
      for(int i=0 ; i< length;i++){
         arr[i] = source.arr[i];
      }
    }
   
    void Resize(int newsize){ // o(n) , o(n)
         T*old = arr;
       arr = new T [size+newsize];
       for(int i=0 ; i< length ;i++){
         arr[i] = old[i];
       }
       delete [] old ;
    }
    bool ReverseArray(){ // o(n) , o(n)
      if(IsEmpty()){
         cout << "empty array" << el;
         return 0;
      }
      T*arr2 = new T [size];
      for(int i=0 ; i< length;i++){
         arr2[i] = arr[i];
      }
        for(int i=0 ; i< length;i++){
         arr[i] = arr2[lenght-i-1];
      }
      return 1;
    }
    void PrintReverse(){ // o(n)  , o(n)
    if (ReverseArray()){
      for(int i=0 ; i< lenght ; i++){
         cout << arr[i] << ' ';
      }
    }
      cout << el;
    }
    void mergeWith(const Arraylist& otherArray){ // TC o(n) SC o(1)
        for(int i=0 ; i < otherArray.length ; i++){
       Append(otherArray.arr[i]);
       }
    }
  void  Rotatearray(int pos , bool toleft = true){ // TC o(n) SC o(1)
   pos %= length;
   if(toleft){
      rotate(arr,arr+pos,arr+length);
   }
   else {
      rotate(arr, arr+length-pos , arr+length);
   }
  }
  vector<T>Duplicates(){ // TC o(n)  SC o(n^2)
   unordered_set<ll>seen;
   unordered_set<ll>duplicates;
  for(int i=0 ; i< length ;i++){
   if(seen.find(arr[i]) !=seen.end()){
      duplicates.insert(arr[i]);
   }
   else {
      seen.insert(arr[i]);
   }
  }
  return (vector<T>(duplicates.begin(), duplicates.end()));
  }
  
 };
 int main(){
      Arraylist<ll>list1(3);
  list1.Append(10);
  list1.Append(20);
   list1.Append(30);
    list1.Insert(1, 15);
   
        list1.Display() ; 
               
    list1.PrintReverse();     
    list1.Rotatearray(2);
      list1.Display() ;       
    Arraylist<ll> otherArray(5);
    otherArray.Append(40);
    otherArray.Append(50);
    list1.mergeWith(otherArray);
    list1.Display();       
      
    list1.Resize(20);
    return 0;
 }