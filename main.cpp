#include <iostream>
#include <string>
#include <iostream>
#include "queue.h"
using namespace std;

int main()
{

    startQueue myTest;

    int numCustomer;
    int escape;

     myTest.front = NULL;
     myTest.back = NULL;
     myTest.queueCounter = 0;

     int deqNum;


   do {

      cout << "Enter number: " << endl;
      cin >> numCustomer;

      enQueue(myTest, numCustomer);

      cout << "would you like to enter more? (0 to exit) ";
      cin >> escape;


   }while(escape != 0);

deqNum = deQueue(myTest);

toStrings(myTest);

cout << endl <<  "Number that is out is : " << deqNum << endl;

}
