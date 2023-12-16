//
//  main.cpp
//  Day of week
//
//  Created by tenzin choten on 16/12/23.
//

#include <iostream>
using namespace std;

class dayOfWeek {
public:

    int n;
    void input(){
        cin>>n;
    }

    void week() {

        if(n>=0 && n <=6){
            if(n == 0)
                cout<<"Sunday";
            else if(n == 1)
                cout<<"Monday";
            else if(n == 2)
                cout<<"Tuesday";
            else if(n == 3)
                cout<<"wednesday";
            else if(n == 4)
                cout<<"Thursday";
            else if(n == 5)
                cout<<"Friday";
            else if(n == 6)
                cout<<"Saturday";
        }
        else
            cout<<"out of scope";
    }
};

int main() {
    dayOfWeek obj;
    obj.input();
    obj.week();
 
    return 0;
}
