#include <iostream>
using namespace std;

int main() {
    int ages[5],age;

    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
    }
    //your code goes here
    age=ages[0];

        for(int i=0;i<5;++i)
            {
                if(ages[i]<age)
                age=ages[i];
            }
            cout<<50 -(50.0 * age/100);
    return 0;
}