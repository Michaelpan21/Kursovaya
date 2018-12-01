#include<iostream>

class ShowMenu{

  public:

    void localMenu(){

        cout << endl << endl << "     1.  Create new Car";
        cout << endl << "     2.  Save Car's Config in File";
        cout << endl << "     3.  Show Cars";
        cout << endl << "     4.  Show Last Config";
        cout << endl << "     5.  Delete ONE Car";
        cout << endl << "     6.  Delete ALL Cars";
        cout << endl << "     0.  Go Back"  << endl;

        cout << "     ";

    }

    void mainMenu(){

        cout << endl << "  1.  Vaz";
        cout << endl << "  2.  Nissan";
        cout << endl << "  3.  Kia";
        cout << endl << "  4.  Toyota";
        cout << endl << "  0.  Exit"  << endl;
        cout << "  ";
    }

    void _show(int choice){
      switch(choice){
        case 1 :cout << endl << endl << "      VAZ MENU";    break;
        case 2 :cout << endl << endl << "      NISSAN MENU"; break;
        case 3 :cout << endl << endl << "      KIA MENU";    break;
        case 4 :cout << endl << endl << "      TOYOTA MENU"; break;
      }
    }

};
