//Converting from meter to feet between a user defined data type(Object) and float type.


#include <iostream>
using namespace std;

class Convert{
    private:
        const float mtr;
        int feet;
        float inches;
    public:
        Convert() : feet(0), inches(0.0), mtr(3.28033F)
        {             }
        
        Convert(float val): mtr(3.20833F) //Note that you need to include this constant "mtr" in your Constructor declaration.
        {
            float val1 = mtr * val;
            feet = (int)val1;
            inches = 12*(val1 - feet);
        }
        
        void display(){
            cout<<"Feet : "<<feet<<"inches : "<<inches;
        }
        
        operator float(){
            inches = inches/12;
            feet += inches;
            return feet/mtr;
        }
    
};

int main(){
    Convert c1(2.35F);
    float mtr;
    c1.display();
    cout<<endl;
    mtr = static_cast<float>(c1);
    cout<<mtr;
    Distance d2(5, 10.25);
    mtr = d2; //Note the calling of operator in a unique way.
    cout<<mtrs<< " is the distance in meters"<<endl;
    return 0;

}
