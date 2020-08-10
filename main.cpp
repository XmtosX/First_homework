#include <iostream>
#include <string>
using namespace std;
pair<string,string> p[102];
int main()
{
    //a list of usernames and passwords in the database
    p[0]=make_pair("Ahmad","123");
    p[1]=make_pair("Jaffar","321");
    p[2]=make_pair("Shamil","Please_Give_Me_Extra_Points");
    p[3]=make_pair("Pormhub","You_Read_It_Wrong");
    string username,password;
    bool yes=false;
    //gives the user 3 attempts to login
    for (int i=0;i<3;i++)
    {
        cout <<"Enter The Username: ";
        cin >>username;
        cout <<"Enter The Password: ";
        cin >>password;
        //checks the database for matching credentials
        for (int j=0;j<4;j++)
            if (username==p[j].first&&password==p[j].second)
                yes=true;
        //when yes==true, then the input is correct, else, we continue
        if (yes)
            break;
        else if (i!=2)
            cout <<"Try Again.\n";
    }
    if (yes)
        cout <<"Access Granted!\n";
    else
        cout <<"Access Denied.\n";
    return 0;
}
