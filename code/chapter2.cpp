#include <iostream>
struct CandyBar {
  char name[50];
  float volum;
  double weight;
};
int main() {
  using namespace std;
  CandyBar snack;
  cout << "The Candybrand is " << endl;
  cin.getline(snack.name, 50);
  cout << "The weight is  " << endl;
  cin >> snack.volum;

  cout << "The caluri is  " << endl;
  cin >> snack.weight;
  cout << snack.name << " " << snack.volum << " " << snack.weight << endl;
  return 0;
}

// int main() {
//   using namespace std;
//   CandyBar snack[3]{
//       {"Mocha Munch", 2.3, 350}, {"Star", 4.5, 260}, {"Space", 1.5, 164}};
//   cout << "The Candybrand is" << snack[0].brand << "The weight is "
//        << snack[0].weight << " The caluri is " << snack[0].caluri << endl;
//   cout << "The Candybrand is" << snack[1].brand << "The weight is "
//        << snack[1].weight << " The caluri is " << snack[1].caluri << endl;
//   cout << "The Candybrand is" << snack[2].brand << "The weight is "
//        << snack[2].weight << " The caluri is " << snack[2].caluri << endl;
//   return 0;
// }

// int main() {
//   using namespace std;
//   CandyBar snack{"Mocha Munch", 2.3, 350};
//   cout << " The Candy'brand is " << snack.brand << "The weight is "
//        << snack.weight << " The caluri is " << snack.caluri << endl;
//   return 0;
// }
//  struct inflatable {
//   char name[20];
//   float volum;
//   double price;
// };
//  int main() {
//   using namespace std;
//   inflatable guests[2] = {{"Bambi", 0.5, 21.99}, {"Godzilla", 2000, 565.99}};
//   cout << " The guest " << guests[0].name << " and " << guests[1].name
//        << "\nhave a combined volume of " << guests[0].volum + guests[1].volum
//        << " cubic feet.\n";
//   return 0;
// }
//   char name[20];
//   float volume;
//   double price;
// };
//  int main() {
//   using namespace std;
//   inflatable bouquet = {"sunflowers", 0.20, 12.49};
//
//   inflatable choice;
//   cout << "bouquet: " << bouquet.name << " for $";
//   cout << bouquet.price << endl;
//   choice = bouquet;
//   cout << "choice: " << choice.name << " for $";
//   cout << choice.price << endl;
//   return 0;
// }
//  struct inflatable {
//    char name[20];
//    float volume;
//    double price;
//  };
//
//  int main() {
//    using namespace std;
//    inflatable guest = {
//
//        "Glorious  Gloria", 1.88, 29.99};
//    inflatable pal = {"Audacious Arthur", 3.12, 32.99};
//    cout << "Expand your guest list with " << guest.name;
//    cout << " and " << pal.name << "!\n";
//    cout << "You can have both for $";
//    cout << guest.price + pal.price << "\n";
//    return 0;
//  }

//
//#include <cmath>
//#include <iostream>
//
// void simon(int);  //函数声明
//
//// void simon(int n) {  //函数定义
////  using namespace std;
////  cout << "Simon says touch your toes " << n << " times." << endl;
////}
//
// int main() {
//  using namespace std;
//  simon(3);
//  cout << "Pack an integer: ";
//  int count;
//  cin >> count;
//  simon(count);
//  cout << "Done! " << endl;
//  return 0;
//}

// int main() {
//   using namespace std;
//
//   double area;
//   cout << "Enter the floor area, in square feet, of your home: ";
//   cin >> area;
//   double side;
//   side = sqrt(area);//sqrt参数里的变量.
//   cout << " That's the equivalent of a square " << side << "feet to the
//   side."
//        << endl;
//   cout << " How fascinating! " << endl;
//   return 0;
// }

// int main() {
//   using namespace std;
//
//   int carrots;
//
//   cout << " How many carrots do you have? " << endl;
//   cin >> carrots;
//   cout << " Here are two more ";
//   carrots = carrots + 2;
//   cout << " Now you have " << carrots << " carrotes " << endl;
//
//   return 0;
// }

// int main() {
//   using namespace std;
//
//   int carrots;//声明整数变量.
//
//   carrots = 25;//整数25 赋值给carrots变量.
//   cout << "I have ";//
//   cout << carrots;
//   cout << "carrots ";
//   cout << endl;
//   carrots - 1;//变量运算表达式;
//   cout << "Crunch, crunch.Now I have " << carrots << "carrots " << endl;
//   return 0;
// }

// int main() {
//   using namespace std;
//   cout << "Come up and C++ me some time ";//标准输出字符串
//   cout << endl;
//   cout << "You won't regret it! " << endl;
//   return 0;
// }