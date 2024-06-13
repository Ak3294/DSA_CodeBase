#include <iostream>
#include <stdlib.h>
using namespace std;

class Persondata
{
private:
    int connections, age, workexp, option;
    string month[20];
    string name1[20], name2[20], name3[20];

public:
    void setdata()
    {
        cout << "Enter the Name of the Person" << endl;
        cin >> name1[20];
        cout << "Enter the Middle name of the Person" << endl;
        cin >> name2[20];
        cout << "Enter the Surnameof the Person" << endl;
        cin >> name3[20];
        cout << "Enter the Age of the Person" << endl;
        cin >> age;
        cout << "Enter the Connection on the Linkdein" << endl;
        cin >> connections;
        cout << "Enter Your Working Experience in Years" << endl;
        cin >> workexp;
    }

    void salary()
    {

        if (workexp < 2 || age >= 20 || connections < 100)
        {
            cout << "According to Your Experience, Skills,and Other information Your Base Salary is : 46,000/month" << endl;
        }
        else if (workexp > 3 || age >= 30 || connections > 100)
        {
            cout << "According to Your Experience, Skills,and Other information Your Base Salary is : 58,000/month" << endl;
        }
        else if (workexp > 5 || age >= 40 || connections > 300)
        {
            cout << "According to Your Experience, Skills,and Other information Your Base Salary is : 78,000/month" << endl;
        }
        else
        {
            cout << "You are Connect With HR and Share Information" << endl;
        }
    }
    void Place()
    {
        cout << "If You are Satisfy with the Job in this Salary range are you select working City." << endl;

        cout << "Enter 1.- Jaipur[Rajasthan]" << endl;
        cout << "Enter 2.- Noida[Uttar Pradesh]" << endl;
        cout << "Enter 3.- Benguluru[Karnataka]" << endl;
        cout << "Enter 4.- Mumbai[Maharastara]" << endl;
        cout << "Enter 5.- Kolkata[West Bengal]" << endl;

        cout << "Enter the Option for Selection of Your Job City." << endl;
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Enter Your Joining Month" << endl;
            cin >> month[20];
            cout << "Thankyou for Selecting the Pink City Jaipur"
                 << "And Your Joining in Month of " << month[20] << endl;
            break;
        case 2:
            cout << "Enter Your Joining Month" << endl;
            cin >> month[20];
            cout << "Thankyou for Selecting Noida"
                 << "And Your Joining in Month of  " << month[20] << endl;
            break;
        case 3:
            cout << "Enter Your Joining Month" << endl;
            cin >> month[20];
            cout << "Thankyou for Selecting the Technical City of India"
                 << "And Your Joining in Month of  " << month[20] << endl;

            break;
        case 4:
            cout << "Enter Your Joining Month" << endl;
            cin >> month[20];
            cout << "Thankyou for Selecting the MayaNagri Mumbai "
                 << "And Your Joining in Month of " << month[20] << endl;

            break;
        case 5:
            cout << "Enter Your Joining Month" << endl;
            cin >> month[20];
            cout << "Thankyou for Selecting the Kolkata"
                 << "And Your Joining in Month of  " << month[20] << endl;

            break;

        default:
            cout << "Invalid Error!" << endl;
            exit(0);
            break;
        }
    }

    void alldata()
    {

        cout << "Congratulation!!-After the Varification and Selection Process are You Selecting for the SoftDogs Tech" << endl;
        cout << endl;
        cout << "Rechack All the Information" << endl;
        cout << "Your Name is : " << name1[20] << name2[20] << name3[20];
        cout << "Age is : " << age << endl;
        cout << "Connection on Linkdein is " << connections << endl;
        cout << "Your Work Experience in Previous Componey is " << workexp << endl;
        cout << "And Finally You are Select the Job City" << option << endl;
        cout << "With Joining Month" << month[20] << endl;
    }
};
int main()
{
    Persondata p1;
    p1.setdata();
    p1.salary();
    p1.Place();
    p1.alldata();

    cout << "Thankyou and Best of Luck for Upcoming Future!" << endl;

    return 0;
}
