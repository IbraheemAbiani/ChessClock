#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <Windows.h>

using namespace std;

void timer();
void displayClock();

// hours, minutes, seconds of timer
int hours = 0;
int minutes = 0;
int seconds = 0;

int main() {

    cout << "Countdown timer" << endl;
    cout << "Set starting time:" << endl;
    cout << "Minutes: ";
    cin >> minutes;
    cout << endl << "Seconds: ";
    cin >> seconds;
    

    timer();

    cout << "Time has run out!" << endl;

    return 0;
}

void displayClock()
{
    // system call to clear the screen
    system("cls");
 
    cout << setfill(' ') << setw(55) << "         CLOCK         \n";
    cout << setfill(' ') << setw(55) << " --------------------------\n";
    cout << setfill(' ') << setw(29);
    cout << "| " << setfill('0') << setw(2) << hours << " hrs | ";
    cout << setfill('0') << setw(2) << minutes << " min | ";
    cout << setfill('0') << setw(2) << seconds << " sec |" << endl;
    cout << setfill(' ') << setw(55) << " --------------------------\n";
}

void timer()
{
    while (minutes != -1) {
         
        // display the timer
        displayClock();
 
        // sleep system call to sleep
        // for 1 second
        Sleep(1000);
 
        // decrement seconds
        seconds--;
 
        // if seconds reaches -1
        if (seconds == -1) {
         
            // decrement minutes
            minutes--;
            seconds = 59;
        }
    }
}
