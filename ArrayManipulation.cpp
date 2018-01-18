// Authors: Gabriel A Carpio-Pena

#include <iostream>

using namespace std;

//char userInput[5];

void inputFunction(char input[]);
void displayInput(char input2 []);
char capital(const char caps []);
char small(const char lower[]);
char digits(const char num[]);
char symbols(const char sym[]);
void conversion(char convert[]);
void reverseOrder(char rev[]);

int main()
    {
    char YesOrNo;
    char userInput[5];
   // char r;
        do { cout << "Enter any 5 Characters, Digits, Special Symbols: ";
            inputFunction(userInput);
              cout << "The Array Contains The Following:   ";
            displayInput(userInput);
            cout << endl << endl;

            capital(userInput);
            small(userInput);
            digits(userInput);
            symbols(userInput);
              cout << "The Array in reverse Order:  ";
            reverseOrder(userInput);
             cout << endl << endl;
            cout << "The Array After Converting Capital Letters to Small Letters and Vice Versa : ";
            conversion(userInput);
            cout << endl << endl;


            cout << "Would you like to check another Array?" << endl << endl;
            cout << "Enter Y or y FOR YES" << endl << endl;
            cout << "OR" << endl << endl;
            cout << "N or n FOR NO ------->";
            cin >> YesOrNo;
                while (YesOrNo != 'Y'&& YesOrNo != 'y' && YesOrNo != 'N' && YesOrNo != 'n')
                {
                    cout << "Invalid Character, Please enter Y, or y, or N, or n    ----->";
                    cin >> YesOrNo;
                }
            }
            while (YesOrNo != 'N' && YesOrNo != 'n');
            cout << endl;
            cout << "Program Terminated";
            cout << endl;
    }


    void inputFunction( char input[])
        {
            for (int i=0;i<5;i++)
                {
                    cin >> input [i];
                }
        }

    void displayInput( char input2 [])
        {
            for(int i = 0; i<5; i++)
                {
                    cout << input2 [i];
                }
        }

    void reverseOrder( char rev [])
        {
            for (char i = 4; i>=0; i--)
            {
               cout << rev [i];
            }

        }

    char capital(const char caps [])
    {
         char a;
         bool track = false;
        for (int i=0; i<5; i++)
        {
            a = caps[i];
            if (caps [i] >= 65 && caps [i]<=90)
                {
                cout << caps [i] << " is a capital letter";
                    cout << endl;
                track = true;
               }
        }
        if(track == false)
        {
            cout << "There are no Capital Letters in this Array"<< endl << endl;
        }
        return a;
    }

char small(const char lower[])
    {
         char b;
         bool track = false;
        for (int i=0; i<5; i++)
        {
            b =lower[i];
            if (lower[i] >= 97 && lower[i]<=122)
                {
                cout << lower[i] << " is a small letter";
                    cout << endl;
                track = true;
               }
        }
        if(track == false)
        {
            cout << "There are no Small Letters in this Array"<< endl << endl;
        }
        return b;
    }

    char digits(const char num[])
    {
         char c;
         bool track = false;
        for (int i=0; i<5; i++)
        {
            c =num [i];
            if (num [i] >= 48 && num [i]<=57)
                {
                cout << num [i] << " is a digit ";
                    cout << endl;
                track = true;
               }


        }
        if(track == false)
        {
            cout << "There are no digits in this Array"<< endl << endl;
        }
        return c;
    }

char symbols(const char sym[])
    {
         char d;
         bool track = false;
        for (int i=0; i<5; i++)
        {
            d =sym [i];
            if ((sym [i] >= 33 && sym [i]<=47) || (sym [i]>=58 && sym [i]<=64)
                || (sym [i] >=91 && sym [i] <=96) || (sym [i] >= 123 && sym [i] <=126))
                {
                cout << sym [i] << " is a symbol ";
                    cout << endl;
                track = true;
               }
        }
        if(track == false)
        {
            cout << "There are no symbols in this Array"<< endl << endl;
        }
        return d;
    }

void conversion(char convert[])
    {
        char e;
        for (int i=0; i<5; i++)
        {
           if(convert [i] >= 65 && convert [i] <= 90)
           {
               e=convert [i]+32;
               cout << e;
           }
           if(convert [i] >= 97 && convert [i] <= 122)
           {
               e=convert [i]-32;
               cout << e;
           }
           else
            cout << convert[i];
        }
        cout << endl << endl;
    }







