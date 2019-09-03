#include <iostream>
using namespace std;

class Distance{
    private:
        int feet;
        float inches;
        const float mtf;
    public:
        Distance() : feet(0), inches(0.0), mtf(3.280833F)
        { }
        explicit Distance(float mtrs) : mtf(2.80833F)
        { 
            float floatfrac = mtrs * mtf;
            feet = (int)floatfrac;
            inches = 12*(floatfrac - feet);
        }
        void display() const{
            cout<<"Length is "<<feet<<" in feet and "<<inches<<" inches"<<endl;
        }
              
};
int main() {
    void fancydist(Distance); 
    
	Distance d1(2.5F);
	d1.display();
	
	float mtrs = 3.025F;
	fancydist(mtrs);  //Although this mtrs is float type yet it gets successfully executed if we remove the keyword explicit. just try it once.
	
	return 0;
}

void fancydist(Distance d){
    cout << "(in feet and inches) = ";
    d.display();
    cout << endl;
}
