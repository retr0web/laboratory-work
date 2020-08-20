#include <iostream>
#include <cmath>
#include <string>
// 1 task
struct phone{
    std::string wholeNumber;
    int cityCode;
    int station;
    int subscriber;

    void getNumber(){
      std::cout << "Enter number \n";
      std::cin >> wholeNumber;

      while(wholeNumber.length() > 10 || wholeNumber.length() < 10){
          std::cout << "Incorrect number. Please type number again\n";
          std::cin >> wholeNumber;
      }

      cityCode = stoi(wholeNumber.substr(0, 3));
      station = stoi(wholeNumber.substr(3, 3));
      subscriber = stoi(wholeNumber.substr(6, 4));
    }

    void output(){
        std::cout << "The number is: (" << cityCode << " " << station << "-"
                  << subscriber << ")\n";
    }
};

// 2 task
struct point{
    double x;
    double y;

    void getValues() {
        std::cout << "Enter x of point\n";
        std::cin >> x;

        std::cout << "Enter y of point\n";
        std::cin >> y;
    }

    point merge(point that){
        point t;
        t.x = x + that.x;
        t.y = y + that.y;
        return t;
    }

    void output(){
        std::cout << "Point: x: " << x << ", y: " << y << "\n";
    }
};

// 3 task
struct Distance{
    double field;
};

struct Volume{
    Distance x;
    Distance y;
    Distance h;
    double volume;

    void getVolume(){
        volume = x.field * y.field * h.field;
    }

    void output(){
        std::cout << "The volume of room is " << volume << "\n";
    }
};

// 5 task
struct date{
    int month;
    int day;
    int year;
    std::string wholeDate;

    void getDate(){
        std::cout << "Enter date in format dd/mm/yyyy \n";
        std::cin >> wholeDate;

        while(wholeDate.length() > 8 || wholeDate.length() < 8){
            std::cout << "Incorrect number. Please type number again\n";
            std::cin >> wholeDate;
        }

        month = stoi(wholeDate.substr(0, 2));
        day = stoi(wholeDate.substr(2, 2));
        year = stoi(wholeDate.substr(4, 4));
    }

    void output(){
        std::cout << day << "/" << month << "/" << year << "\n";
    }
};

// 6 task
enum etype {laborer = 0, secretary = 1, manager = 2, accountant = 3, executive = 4, researcher = 5};
void positionCheck(etype &position){
    char input;
    std::cout << "Enter first letter of position\n";
    std::cin >> input;

    switch(input) {
        case 'l':
            position = laborer;
            break;
        case 's':
            position = secretary;
            break;
        case 'm':
            position = manager;
            break;
        case 'a':
            position = accountant;
            break;
        case 'e':
            position = executive;
            break;
        case 'r':
            position = researcher;
            break;
        default:
            std::cout <<"fuck you, hacker";
            break;
    }

    std::cout << position << "\n";
}

std::string positionSet(etype position){
    switch(position){
        case 0 : return "laborer";
        case 1 : return "secretary";
        case 2 : return "manager";
        case 3 : return "accountant";
        case 4 : return "executive";
        case 5 : return "researcher";
    }
}

//  4/7 task
struct employee{
    int id;
    double salary;
    date accept;
    etype position;
    std::string positionFull;

    void getValues(){
        std::cout << "Enter employees id\n";
        std::cin >> id;

        std::cout << "Enter employees salary\n";
        std::cin >> salary;

        std::cout << "Enter date of accept\n";
        accept.getDate();

        std::cout << "Enter position\n";
        positionCheck(position);
        positionFull = positionSet(position);
    }

    void output(){
        std::cout << "Employee id: " << id << ", salary: " << salary << "$, "
        << "date of accept: " << accept.day << "/" << accept.month << "/"
        << accept.year << ", position: " << positionFull << "\n";
    }
};


// 8 task
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

// 9 task
struct time {
    int hours;
    int minutes;
    int seconds;
    std::string fullFormat;

    void getValues() {
        std::cout << "Enter hours\n";
        std::cin >> hours;

        std::cout << "Enter minutes\n";
        std::cin >> minutes;

        std::cout << "Enter seconds\n";
        std::cin >> seconds;

        while (minutes >= 60) {
            hours += 1;
            minutes -= 60;
        }

        while (seconds >= 60) {
            minutes += 1;
            seconds -= 60;
        }
    }

};

// 10 task
struct sterling {
    double pound;
    double shilling;
    double pens;

    void getValues() {
        std::cout << "Enter pounds\n";
        std::cin >> pound;

        std::cout << "Enter sheeling\n";
        std::cin >> shilling;

        std::cout << "Enter pens\n";
        std::cin >> pens;

        while (pens >= 100) {
            pound += 1;
            pens -= 100;
        }
    }

    void add(sterling second){
        pound+=second.pound;
        shilling+=second.shilling;
        pens+=second.pens;
    }

    void subtract(sterling second){
        pound-=second.pound;
        shilling-=second.shilling;
        pens-=second.pens;
    }

    void multiply(double l){
        pound*=l;
        shilling*=l;
        pens*=l;
    }

    void percent(double per){
        pound*=per;
        shilling*=per;
        pens*=per;
        pound/=100;
        shilling/=100;
        pens/=100;
        std::cout << "The percent of sum is:" << pound << " pounds, " << shilling << " shilling, "
        << pens << " pens.\n";
    }
};

void output(sterling it){
    std::cout << it.pound << " pounds, " << it.shilling << " shillings, "
              << it.pens << " pens.\n";
}

// 11 task
void getFullTime(time &input){
    std::cout << "Enter time in a full format (hh/mm/ss)\n";
    std::cin >> input.fullFormat;

    while(input.fullFormat.length() > 6 || input.fullFormat.length() < 6){
        std::cout << "Incorrect number. Please type number again\n";
        std::cin >> input.fullFormat;
    }

    input.hours = stoi(input.fullFormat.substr(0, 2));
    input.minutes = stoi(input.fullFormat.substr(2, 2));
    input.seconds = stoi(input.fullFormat.substr(4, 2));

    while (input.minutes >= 60) {
        input.hours += 1;
        input.minutes -= 60;
    }

    while (input.seconds >= 60) {
        input.minutes += 1;
        input.seconds -= 60;
    }

}

long time_to_secs(time t){
    return (t.hours*3600) + (t.minutes*60) + t.seconds;
}

time addAndPrint(time &one, time &two, time &res){
    long long sum = time_to_secs(one) + time_to_secs(two);
    res.minutes = sum / 60;
    res.seconds = sum % 60;
    res.hours = res.minutes / 60;
    res.minutes %= 60;
    return res;
}

void outputTime(time input){
    std::cout << "The time is " << input.hours << ":"
    << input.minutes << ":" << input.seconds << "\n";
}

// 12 task
struct player{
    unsigned int level = 1;
    unsigned int XP = 0;
    unsigned int newLevel = 5 + pow(level, 2);
    unsigned int HP = 50;

    void runGame(){
        srand(0);
        int from = 1;
        int to = 3;
        int range = to - from + 1;

        std::cout << "HP " << HP << std::endl;
        std::cout << "Lvl " << level << std::endl;
        std::cout << "XP " << XP << std::endl;

        while(HP != 0){
          int input;
          int guess = rand()%range + from;

          std::cout << "Enter a number between 1 and 3\n";
          std::cin >> input;

          if(input == guess){
              std::cout << "Correct guess!\n";
              XP+=5;
              if(XP >= newLevel){
                  level+=1;
                  XP = 0;
              }
              std::cout << "HP " << HP << std::endl;
              std::cout << "Lvl " << level << std::endl;
              std::cout << "XP " << XP << std::endl;
          }

          else{
              std::cout << "Correct guess!\n";
              HP-=1;
              XP-=5;
              std::cout << "HP " << HP << std::endl;
              std::cout << "Lvl " << level << std::endl;
              std::cout << "XP " << XP << std::endl;
          }
        }
        std::cout << "Game has ended, you died, bye bye\n" << std::endl;
    }
};

int main() {

    // 1 task
    phone one;
    phone two;
    one.cityCode = 213;
    one.station = 757;
    one.subscriber = 8966;

    two.getNumber();

    one.output();
    two.output();

    // 2 task
    point a;
    point b;
    point c;

    a.getValues();
    b.getValues();

    c = a.merge(b);
    c.output();

    // 3 task
    Volume room;
    room.x.field = 15;
    room.y.field = 15;
    room.h.field = 2.3;

    room.getVolume();
    room.output();

    /*
    // 4 task
    employee first;
    employee second;
    employee third;

    first.getValues();
    second.getValues();
    third.getValues();
    */

    // 5 task
    date Date;
    Date.getDate();
    Date.output();

    // 6 task
    etype position;
    positionCheck(position);
    std::string labelOfPosition = positionSet(position);
    std::cout << labelOfPosition << "\n";

    // 4/7 task
    employee David;
    David.getValues();
    David.output();


    // 8 task
    fraction f;
    fraction f2;
    fraction f3;
    f.chiselnik = 1;
    f.znamennik = 2;
    f2.chiselnik = 3;
    f2.znamennik = 4;

    f3 = fadd(f,f2);
    output(f3);

    // 9 task
    time t;
    t.getValues();
    std::cout << time_to_secs(t) << "\n";

    // 10 task
    sterling money;
    sterling money2;

    money.getValues();
    money2.getValues();

    money.add(money2);
    output(money);

    money.subtract(money2);
    output(money);

    money.multiply(4);
    output(money);

    money.percent(67);


    // 11 task
    time firstTime;
    time secondTime;
    time result;

    getFullTime(firstTime);
    getFullTime(secondTime);

    addAndPrint(firstTime, secondTime, result);

    outputTime(result);

    // 12 task
    player Yoshimitsu;
    Yoshimitsu.runGame();
}