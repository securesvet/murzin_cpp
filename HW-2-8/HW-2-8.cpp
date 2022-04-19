//
// Created by mursv on 4/19/2022.
//
#include<iostream>
#include<string>

int main() {
    using namespace std;
    string card[13] = {
            "2", "3", "4", "5", "6",
            "7", "8", "9", "10", "J",
            "Q", "K", "A"
    };
    string cards_suit[4] = { "Hearts", "Spades", "Diamonds", "Clubs"
    };
    for (int i = 0; i < 14; i++) {
        for (int j = 0; j < 5; j++) {
            cout << card[i] << " of " << cards_suit[j];
        }
    }
    return 0;
}