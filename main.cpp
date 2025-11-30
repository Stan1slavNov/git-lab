#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string generate_password(int length) {
    const string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%";
    string password = "";
    for (int i = 0; i < length; ++i) {
        password += chars[rand() % chars.length()];
    }
    return password;
}

int main() {
    srand(time(0));
    int length;

    cout << "--- SecurePass Gen v2.0 (Branch Feature) ---" << endl;
    cout << "Vvedit dovzhynu parolya: ";
    cin >> length;
    
    string myPass = generate_password(length);
    cout << "Vash parol: " << myPass << endl;
    
    return 0;
}