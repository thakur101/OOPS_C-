#include<iostream>
using namespace std;

enum Suits {clubs, diamonds, heart, spades};
const int jack =11;
const int queen =12;
const int king =13;
const int ace =11;

class Card{
    private:
        int number;
        Suits suit;

    public:
        Card ()
        { }
        Card(int n, Suits s) : number(s), suit(s)
        { }

        void display();
        bool isequal(Card); 
};

bool Card:: isequal(Card card2){
        return (number == card2.number && suit==card2.suit)?true:false;
}

void Card :: display(){
        if(number>=2 && number<=10)
            cout<<number<<"of ";
        else{
            switch(number){
                case 10: cout<<"Jack"<<endl; break;
                case 11: cout<<"Queen"<<endl; break;
                case 12: cout<<"King"<<endl; break;
                case 13: cout<<"Ace"<<endl; break;
            }
        }
        switch(suit){
            case clubs: cout<<"Clubs "<<endl; break;
            case diamonds: cout<<"Diamonds "<<endl; break;
            case heart: cout<<"Heart "<<endl; break;
            case spades: cout<<"Spades "<<endl; break;
        }
}

int main(){
    Card t, ch, prize;
    Card c1(7,clubs);
    Card c2(jack, heart);
    Card c3(ace, spades);

    prize = c3;

    cout<<"Swapping card 1 & 3"<<endl;
    t=c3; c3=c1; c1=t;
    cout<<"Swapping card 2 & 3"<<endl;
    t=c3; c3=c2; c2=t;
    cout<<"Swapping card 1 & 2"<<endl;
    t=c2; c2=c1; c1=t;
    
    cout<<"Your intended card:";
    prize.display();
    cout<<"Guess where in 1/2/3 is Prize card"<<endl;
    int pos;
    cin>>pos;
    switch(pos){
        case 1: ch = c1; break;
        case 2: ch = c2; break;
        case 3: ch = c3; break;
    }

    if(ch.isequal(prize)) cout<<"Yes you're right"<<endl;
    else cout<<"Buddy you're wrong"<<endl;
    cout<<"Your Chosen Card"<<endl;
    ch.display();
    return 0;
}
