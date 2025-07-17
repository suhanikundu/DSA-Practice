/*
for 1 print Monday
for 2 print Tuesday and so on for 7 print Sunday.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int day;
    cin>>day;

    switch(day) {
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thrusday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        case 7:
            cout<<"Sunday";
            break;
        default:
            cout<<"Not a Valid day";
            
    return 0;
    }
}