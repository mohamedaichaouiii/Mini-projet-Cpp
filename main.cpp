#include <iostream>
#include "date.h"

using namespace std;

    int *test(){
        int* x;
        x = new int(5);
        cout << x << endl;
        return x;
    }

int main()
{

/*
    Date d1;
    Date d2(1,-1,0, 9 ,0 , 7);
    if (d1 < d2)
    cout << "Hello world!" << endl;
    else cout << "else"<<endl;

        */

    int &y = *test();
    cout << y << endl;
    cout << &y ;
    //cout << &y :
    return 0;
}
