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
        
        Convert(float val): mtr(3.20833F)
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
    
    c1.display();
    cout<<endl;
    float mtr = static_cast<float>(c1);
    cout<<mtr;
    
    return 0;

}