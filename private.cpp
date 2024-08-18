  #include<bits/stdc++.h>
   using namespace std;
    void FOI () {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
class GeometricShape{
  public:
  GeometricShape(){

  }
 virtual  double  area() =0;
  virtual double perimeter() =0;
  virtual ~GeometricShape(){

  }
};
  class  Triangle : public GeometricShape{
  private:
  double height , base , side;
  public:
   Triangle() : height(0) , base(0) , side(0)
   {

   }
    Triangle(const double & h , const double & b ,const double &s) : height(h) , base(b) , side(s)
    {

    }
    double area(){
        return (.5*height*base);
    }
    double perimeter(){
        return (height+base+side);
    }
    void set_dimensions(double h  , double b){
  height = h ;
  base = b ;
    }
      void set_dimensions(double hy){
        side = hy ;
    }
   friend void  display_or_modify(double h , double b , double s ,  Triangle t){

    t.height = h ;
    t.base = b ;
    t.side = s;
    cout << t.height << ' ' <<t.base<< ' ' << t.side << endl;
   }
   bool operator ==(Triangle T1){
   return (T1.area()==area());
   }
    ~ Triangle(){

    }
  };
 class Ellipse : public GeometricShape{
    private:
  const double  pi = 3.141;
   double a , b ; // major& minor axes
   public : 
    Ellipse() : a(0) , b(0)
    {

    }
  Ellipse(const double &a1 , const double &b1) : a(a1) , b(b1) {

  }
  double area(){
    return (pi*.5*a*.5*b);
  }
  double perimeter(){
    double a2= a/2 , b2 = b/2;
    return (2*pi*(sqrt((a2*a2+b2*b2)/2)));
  }
  void set_get(double a1,  double b1){
      a = a1 , b = b1;
      cout << a << " " << b << endl;
  }
    void set_get(double a1){
      a = a1 ;
      cout << a << " " << b << endl;
  }
  ~Ellipse(){

  }
 };
int main (){
    FOI ();
  Triangle t(4, 5, 7) , t2(2, 7, 8) , t1;
  Ellipse e(4,5);
 cout<< "area of triangle = " <<  t.area() << endl;
 cout << "perimeter of triangle = " << t.perimeter() << endl;
 if(t.area()==t2.area())
   cout << "equal" << endl;
   else
   cout << "not equal" << endl;
    cout<< "area of ellipes = " <<  e.area() << endl;
 cout << "perimeter of ellipes = " << e.perimeter() << endl;
     display_or_modify(12, 5 , 7, t1);
return 0;
}