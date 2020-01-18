#include <iostream>
#include <cstring>
using namespace std;

void type1(char s[], char l[]);
void type2(char s[], char l[]);
void type3(char s[], char l[]);

int main() {
    char s[100], l[100];
    while(cin >> s) {
        if(s[0] == '0') break;
        cin >> l;
        type1(s,l);
        type2(s,l);
    }

    return 0;
}

void type1(char s[], char l[]) {
    int size = strlen(s);
    int total = 0;
    char ss[size];
    for (int i = 0; i <= strlen(l) - size; ++i) {
        for(int j = i; j < size + i; ++j){
            ss[j-i] = l[j];
        }
        if (strcmp(s, ss) == 0) {
            ++total;
        }
    }
    cout << total << endl;
}

void type2(char s[], char l[]) {
    int size = strlen(s);
    int total = 0;
    char ss[size-1];
    char ts[size-1];
    for (int i = 0; i <= strlen(l) - size; ++i) {
        for (int k = 0; k < size-1; ++k) {
            for (int j = 0; j < size; ++j){
                if(k < j) ts[j] = s[j];
                if(k > j) ts[j-1] = s[j];
            }


            for (int j = i; j < size + i; ++j) {
                ss[j - i] = l[j];
            }

            cout << ts << endl;
            if (strcmp(ts, ss) == 0) {
                ++total;
            }
        }
    }
    cout << total << endl;
}