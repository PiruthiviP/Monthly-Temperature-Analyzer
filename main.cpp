
#include <iostream>
using namespace std;

string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

void getData(int temp[][2], int month, int high_low)
{
        cout << "Enter temperatures of the each month:\n";
        for(int i = 0; i < month; ++i)
        {
            cout << "\nFor " << months[i] << endl;
            cout << "Enter the highest temperature: ";
            cin >> temp[i][0];

            cout << "Enter the lowest temperature: ";
            cin >> temp[i][1];
        }
}

void printData(int temp[][2], int month, int high_low)
{
        cout << "\nTemperatures of the each month:";
        for(int i = 0; i < month; ++i)
        { cout << "\nFor " << months[i] << endl;
            cout << "Highest temperature: " << temp[i][0];

            cout << "\nLowest temperature: " << temp[i][1];
        }
}

float averageHigh(int temp[][2], int month, int n)
{
        float sum = 0;
        for(int i = 0; i < month; ++i) sum += temp[i][0];
        return sum/month;
}

float averageLow(int temp[][2], int month, int n)
{
        float sum = 0;
        for(int i = 0; i < month; ++i) sum += temp[i][1];
        return sum/month;
}

int indexHighTemp(int temp[][2], int month, int n)
{
        int k, hightemp = temp[0][0];
        for(int i = 0; i < month; ++i)
        {
            if(temp[i][0] > hightemp)
            {
                hightemp = temp[i][0];
                       k = i;
            }
        }
        return k;
}

int indexLowTemp(int temp[][2], int month, int n)
{
        int k, lowtemp = temp[0][1];
        for(int i = 0; i < month; ++i)
        {
            if(temp[i][1] < lowtemp)
            {
                lowtemp = temp[i][1];
                k = i;
            }
        }
        return k;
}

int main()
{
        int temperature[12][2];

        getData(temperature, 12, 2);
        printData(temperature, 12, 2);

        cout << "\nThe Average of the high temperatures of whole year is " << averageHigh(temperature, 12, 2);
        cout << "\nThe Average og the low temperatures of whole year is " << averageLow(temperature, 12, 2);    cout << "\nThe index of the high temperature among the 12 months is " <<indexHighTemp(temperature, 12, 2);
        cout << "\nThe index of the low temperature among the 12 months is " <<indexLowTemp(temperature, 12, 2);
        return 0;
}