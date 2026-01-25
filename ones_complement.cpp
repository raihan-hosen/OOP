#include <iostream>
using namespace std;

class Binary
{
    string s;

private:
public:
    void read(void);
    void check_binary(void);
    void ones_complement(void);
    void output(void);
};

void Binary::read(void)
{
    cout << "Enter a Binary Number: ";
    cin >> s;
}

void Binary ::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Format" << endl;
            exit(69);
        }
    }
    cout << "The Binary Number is: " << s << endl;
}

void Binary ::ones_complement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void Binary ::output(void)
{
    cout << "After Ones Complement The Binary Number is: ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{

    Binary n;
    n.read();
    n.check_binary();
    n.ones_complement();
    n.output();

    return 0;
}