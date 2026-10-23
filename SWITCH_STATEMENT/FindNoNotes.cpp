#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Amount to Convert it into possible no of Notes" << endl;
    int amount;
    cin >> amount;
    while (amount != 0)
    {
        int tempamount = amount;
        cout << endl << "Write Type of note you Want to see" << endl;
        int Type;
        cin >> Type;
        switch (Type)
        {
        case 100:
            if (tempamount > 99)
            {
                cout << (tempamount / 100) << " " << endl;
                tempamount = tempamount - (tempamount / 100)*100;
                amount = amount - (amount / 100)*100;
            }else cout<<"NO ";

            break;
        case 50:
            if (tempamount > 49)
            {
                cout << (tempamount / 50) << " " << endl;
                tempamount = tempamount - ((tempamount / 50)*50);
                amount = amount - (amount / 50)*50;
            } else cout<<"NO ";

            break;
        case 20:
            if (tempamount > 19)
            {
                cout << (tempamount / 20) << " " << endl;
                tempamount = tempamount - (tempamount / 20)*20;
                amount = amount - (amount / 20)*20;
            } else cout<<"No ";

            break;
        case 1:
            if (tempamount > 0)
            {
                cout << (tempamount / 1) << " " << endl;
                tempamount = tempamount - (tempamount / 1)*1;
                amount = amount - (amount / 1)*1;
            } else cout<<"No ";

            break;
        default:
            cout << "Enter Correct input" << " " << endl;
            break;
        }
    }
    cout << "You have Seen All possible Notes ThankYou" << " " << endl;

    return 0;
}
