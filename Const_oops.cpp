#include<iostream>

using namespace std;

class Distance{
    private:
        int feet;
        float inches;
    public:
        Distance()
        { }
        Distance(int n, float ft): feet(n), inches(ft)
        { }
        void getdist(){
            cin>>feet;
            cin>>inches;
        }
        void show() const{
            cout<<"Length is "<<feet<<","<<inches<<"inches";
        }
        Distance add_dist(const Distance&) const;
};

Distance Distance::add_dist(const Distance& d2) const{
        Distance temp;
        temp.inches = inches + d2.inches;
        if(temp.inches > 12){
            temp.inches -= 12;
            temp.feet = feet+1;
        }
        temp.feet = temp.feet+d2.feet;
        return temp;        
}

int main(){
    Distance d1,d3;
    Distance d2(22,5.57777);
    d2.show();
    d3.getdist();
    d3 = d1.add_dist(d2);
    d3.show();
    return 0;
}
