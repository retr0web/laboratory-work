#include <iostream>
#include <cmath>
#include <iomanip>

double pi = 3.14159;

// 1 task
double cirarea(double r){

    return pi*(r*r);
}

// 2 task
double power_pi(double pi, int n = 2){
    return pow(pi, n);
}

// 3 task
void zeroSmaller(int &first, int &second){
    if(first < second) {
        first = 0;
    }

    else {
        second = 0;
    }
}

// 4 task
struct Distance{
    double x;
};

double biggerDistance(Distance A, Distance B){
    double res = (A.x > B.x) ? A.x : B.x;
    return res;
}

// 5 task
long hms_to_secs(int hours, int minutes, int seconds){
    return (hours*3600) + (minutes*60) + seconds;
}

// 6 task
struct Time {
    int hours;
    int minutes;
    int seconds;

    void getValues(){
        std::cout << "Enter hours\n";
        std::cin >> hours;

        std::cout << "Enter minutes\n";
        std::cin >> minutes;

        std::cout << "Enter seconds\n";
        std::cin >> seconds;

        while (minutes >= 60){
            hours+=1;
            minutes-=60;
        }

        while (seconds >= 60){
            minutes+=1;
            seconds-=60;
        }
    }

    void output(){
        std::cout << "Hours: " << hours << ", minutes: " << minutes
        << ", seconds: " << seconds << ".\n";
    }
};

long time_to_secs(Time t){
    return (t.hours*3600) + (t.minutes*60) + t.seconds;
}

Time secs_to_time(long total){
    Time t;
    t.minutes = total / 60;
    t.seconds = total % 60;
    t.hours = t.minutes / 60;
    t.minutes %= 60;
    return t;
}

// 7 task
char power(char number, int n){
    return pow(number, n);
}

int power(int number, int n){
    return pow(number, n);
}

unsigned long long power(unsigned long number, int n){
    return pow(number, n);
}

double power(double number, int n){
    return pow(number, n);
}

void unleashTheHound(){
    char first;
    int second;
    unsigned long third;
    double fourth;

    std::cout << "Enter char\n";
    std::cin >> first;

    std::cout << "Enter integer\n";
    std::cin >> second;

    std::cout << "Enter long\n";
    std::cin >> third;

    std::cout << "Enter double\n";
    std::cin >> fourth;

    std::cout << power(first, 2) << "\n";
    std::cout << power(second, 3) << "\n";
    std::cout << power(third, 5) << "\n";
    std::cout << power(fourth, 5) << "\n";
}

// 8 task
void swap(int &xp, int &yp)
{
    int temp = xp;
    xp = yp;
    yp = temp;
}

// 9 task
void swapTime(Time &t, Time &t2)
{
    int swap1 = t.hours;
    t.hours = t2.hours;
    t2.hours = swap1;

    int swap2 = t.minutes;
    t.minutes = t2.minutes;
    t2.minutes = swap2;

    int swap3 = t.seconds;
    t.seconds = t2.seconds;
    t2.seconds = swap3;
}

// 10 task
void summon(int &counter){
    counter++;
}

void summoner(int &counter, int n){
    for(int i = 0; i < n; i++){
        summon(counter);
    }
}

// 11 task
struct sterling{
    double pound;
    double shilling;
    double pens;

    void getValues(){
        std::cout << "Enter pounds\n";
        std::cin >> pound;

        std::cout << "Enter sheeling\n";
        std::cin >> shilling;

        std::cout << "Enter pens\n";
        std::cin >> pens;

        while (pens >= 100) {
            pound+=1;
            pens-=100;
        }
    }

    // where to store sum: in structure itself or in separate variable?
    sterling sum(sterling second){
        sterling first;
        first.pound = pound + second.pound;
        first.shilling = shilling + second.shilling;
        first.pens = pens + second.pens;

        while(first.pens >= 100){
            first.pound+=1;
            first.pens-=100;
        }

        return first;

    }

};

void output(sterling it){
    std::cout << it.pound << " pounds, " << it.shilling << " shillings, "
              << it.pens << " pens.\n";
}

// 12 task
struct fraction{
    int chiselnik;
    int znamennik;
};

fraction fadd(fraction first, fraction second){
    fraction t;
    t.chiselnik = (first.chiselnik * second.znamennik) + (first.znamennik * second.chiselnik);
    t.znamennik = first.znamennik * second.znamennik;
    return t;
}

fraction fsub(fraction d, fraction d2){
    fraction t;
    t.chiselnik = (d.chiselnik * d2.znamennik) - (d.znamennik * d2.chiselnik);
    t.znamennik = d.znamennik * d2.znamennik;
    return t;
}

fraction fmul(fraction d, fraction d2){
    fraction t;
    t.chiselnik = d.chiselnik * d2.chiselnik;
    t.znamennik = d.znamennik * d2.znamennik;
    return t;
}

fraction fdiv(fraction d, fraction d2){
    fraction t;
    t.chiselnik = d.chiselnik * d2.znamennik;
    t.znamennik = d.znamennik * d2.chiselnik;
    return t;
}

void output(fraction d){
    std::cout << d.chiselnik << "\n ---- \n" << d.znamennik << std::endl;
}

int main() {
    // 1 task
    std::cout << "// 1 task\n";
    double r;
    std::cout << "Enter radius\n";
    std::cin >> r;
    std::cout << cirarea(r) << "\n";

    // 2 task
    std::cout << "// 2 task\n";
    int n;
    std::cout << "Enter number of power\n";
    std::cin >> n;
    std::cout << power_pi(pi, n) << "\n";

    // 3 task
    std::cout << "// 3 task\n";
    int one = 56;
    int two = 72;
    zeroSmaller(one, two);
    std::cout << one << std::setw(4) << two << std::endl;

    // 4 task
    std::cout << "// 4 task\n";
    Distance firstDist;
    Distance secondDist;
    firstDist.x = 56;
    secondDist.x = 72;
    std::cout << biggerDistance(firstDist, secondDist) << std::endl;

    // 5 task
    std::cout << "// 5 task\n";
    std::cout << hms_to_secs(24, 26, 56) << " seconds \n";

    // 6 task
    std::cout << "// 6 task\n";
    Time t;
    t.getValues();

    long timeInSecs = time_to_secs(t);
    std::cout << timeInSecs << "\n";

    Time t2;
    t2 = secs_to_time(timeInSecs);

    t2.output();

    // 7 task
    std::cout << "// 7 task\n";
    std::cout << "Wof Wof, Unleash the HOUND!\n";
    unleashTheHound();

    // 8 task
    std::cout << "// 8 task\n";
    int uno = 99;
    int dos = 55;
    swap(uno, dos);
    std::cout << uno << std::setw(4) << dos << std::endl;

    // 9 task
    std::cout << "// 9 task\n";
    Time t3;
    Time t4;

    t3.hours = 11;
    t4.hours = 15;

    t3.minutes = 25;
    t4.minutes = 52;

    t3.seconds = 69;
    t4.seconds = 88;

    t3.output();
    t4.output();

    swapTime(t3, t4);

    t3.output();
    t4.output();

    // 10 task
    std::cout << "// 10 task\n";
    int counter = 0;
    summoner(counter, 11);
    std::cout << counter << std::endl;

    // 11 task
    std::cout << "// 11 task\n";
    sterling bankAccount;
    sterling fakeAccount;

    bankAccount.getValues();
    fakeAccount.getValues();

    output(bankAccount);
    output(fakeAccount);

    std::cout << "\n---------------------" << std::endl;

    sterling sum;
    sum = bankAccount.sum(fakeAccount);
    output(sum);

    // 12 task
    std::cout << "// 12 task\n";
    fraction d;
    d.chiselnik = 1;
    d.znamennik = 2;

    fraction d2;
    d2.chiselnik = 2;
    d2.znamennik = 3;

    fraction d3;

    std::cout << "\n---------------------" << std::endl;
    d3 = fadd(d, d2);
    output(d3);
    std::cout << "\n---------------------" << std::endl;

    std::cout << "\n---------------------" << std::endl;
    d3 = fsub(d, d2);
    output(d3);
    std::cout << "\n---------------------" << std::endl;

    std::cout << "\n---------------------" << std::endl;
    d3 = fmul(d, d2);
    output(d3);
    std::cout << "\n---------------------" << std::endl;

    std::cout << "\n---------------------" << std::endl;
    d3 = fdiv(d, d2);
    output(d3);
    std::cout << "\n---------------------" << std::endl;
}