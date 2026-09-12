#include <iostream>
using namespace std;

struct Contact {
    string name, phone;
};

int main() {
    Contact c[5];
    int n = 0, ch;

    do {
        cout << "\n1.Add 2.View 3.Search 4.Exit\n";
        cin >> ch;

        if (ch == 1) {
            cin >> c[n].name >> c[n].phone;
            n++;
        }

        else if (ch == 2)
            for (int i = 0; i < n; i++)
                cout << c[i].name << " " << c[i].phone << endl;

        else if (ch == 3) {
            string x;
            cin >> x;
            for (int i = 0; i < n; i++)
                if (c[i].name == x)
                    cout << c[i].phone;
        }

    } while (ch != 4);
}
