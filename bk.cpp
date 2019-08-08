#include <iostream>
using namespace std;
int ordr[] = {0,0,0,0}; // Borger, Nuggets, Drinks, Fries
int fris[] = {0,0,0}; // Small, Medium, Large
int drink[] = {0,0,0}; // Small, Medium, Large
int nug[] = {0,0,0}; // Small, Medium, Large
int borg[] = {0,0,0,1,1}; // Pickles, onions, mayo, ketchup, mustard
//Prices
int borgr = 3;
int nuge = 1; // For small
int m_nuge = 2; 
int l_nuge = 3;
int drnk = 1; // for all
int fri = 1; // for small
int fri_m = 1.5; 
int fri_l = 2;
//Borger extras
int all = 0.2;
//Other code
int main();
int order();
int end(){
    system("clear");
    int one = borg[0]*all + borg[1]*all + borg[2]*all + borg[3]*all + borg[4]*all;
    int two = fris[0]*fri + fris[1]*fri_m + fris[2]*fri_l;
    int three = drink[0]*drnk + drink[1]*drnk + drink[2]*drnk;
    int four = nug[0]*nuge + nug[1]*m_nuge + nug[2]*l_nuge;
    int total = one + two + three+ four;
    cout << "your total is : $" << total;
} 
int borger(){
    cout << "1 = Ketchup" << endl << "2 = Mustard" << endl << "3 = Mayo" << endl << "4 = Pickles" << endl << "5 = Onions" << endl << "6 = cancel" << endl;
    int opt;
    int mult;
    char addrem;
    cin >> opt;
    if (opt == 1){
        cout << "add or remove? [a/r] :";
        cin >> addrem;
        if(addrem != 'r' && addrem != 'R' && addrem != 'a' && addrem != 'A'){   
            borger();
        }
        if(addrem = 'R'){
            borg[3] = 0;
        } else if(addrem = 'r'){
            borg[3] = 0;
        }
        if(addrem = 'A'){
            cout << "how many extras :";
            cin >> mult;
            borg[3] = mult;
        } else if(addrem = 'a'){
            cout << "how many extras :";
            cin >> mult;
            borg[3] = mult;
        }
        borger();
    }
    if (opt == 2){
        cout << "add or remove? [a/r] :";
        cin >> addrem;
        if(addrem != 'r' && addrem != 'R' && addrem != 'a' && addrem != 'A'){   
            borger();
        }
        if(addrem = 'R'){
            borg[4] = 0;
        } else if(addrem = 'r'){
            borg[4] = 0;
        }
        if(addrem = 'A'){
            cout << "how many extras :";
            cin >> mult;
            borg[4] = mult;
        } else if(addrem = 'a'){
            cout << "how many extras :";
            cin >> mult;
            borg[4] = mult;
        }
        borger();
    }
    if (opt == 3){
        cout << "add or remove? [a/r] :";
        cin >> addrem;
        if(addrem != 'r' && addrem != 'R' && addrem != 'a' && addrem != 'A'){   
            borger();
        }
        if(addrem = 'R'){
            borg[2] = 0;
        } else if(addrem = 'r'){
            borg[2] = 0;
        }
        if(addrem = 'A'){
            cout << "how many extras :";
            cin >> mult;
            borg[2] = mult;
        } else if(addrem = 'a'){
            cout << "how many extras :";
            cin >> mult;
            borg[2] = mult;
        }
        borger();
    }
    if (opt == 4){
        cout << "add or remove? [a/r] :";
        cin >> addrem;
        if(addrem != 'r' && addrem != 'R' && addrem != 'a' && addrem != 'A'){   
            borger();
        }
        if(addrem = 'R'){
            borg[1] = 0;
        } else if(addrem = 'r'){
            borg[1] = 0;
        }
        if(addrem = 'A'){
            cout << "how many extras :";
            cin >> mult;
            borg[1] = mult;
        } else if(addrem = 'a'){
            cout << "how many extras :";
            cin >> mult;
            borg[1] = mult;
        }
        borger();
    }
    if (opt == 5){
        cout << "add or remove? [a/r] :";
        cin >> addrem;
        if(addrem != 'r' && addrem != 'R' && addrem != 'a' && addrem != 'A'){   
            borger();
        }
        if(addrem = 'R'){
            borg[0] = 0;
        } else if(addrem = 'r'){
            borg[0] = 0;
        }
        if(addrem = 'A'){
            cout << "how many extras :";
            cin >> mult;
            borg[0] = mult;
        } else if(addrem = 'a'){
            cout << "how many extras :";
            cin >> mult;
            borg[0] = mult;
        }
        borger();
    }
    if (opt == 6){
        order();
    }
    return 0;
}
int order(){
    system("clear");
    char sml;
    cout << "1 = Borger" << endl << "2 = Nuggets" << endl << "3 = Fries" << endl << "4 = Drink" << endl << "5 = cancel" << endl << "6 = done" <<endl;
    int opt;
    cin >> opt;
    if(opt == 1){
        borger();
    }
    if(opt == 2){
        cout << "S/M/L?" << endl;
        cin >> sml;
        if(sml = 'S'){
            nug[0] = 1; 
        } else if(sml = 's'){
            nug[0] = 1; 
        }
        if(sml = 'M'){
            nug[1] = 1; 
        } else if(sml = 'm'){
            nug[1] = 1; 
        }
        if(sml = 'L'){
            nug[2] = 1; 
        } else if(sml = 'l'){
            nug[2] = 1; 
        }
        order();
    }
    if(opt == 3){
        cout << "S/M/L?" << endl;
        cin >> sml;
        if(sml = 'S'){
            fris[0] = 1; 
        } else if(sml = 's'){
            fris[0] = 1; 
        }
        if(sml = 'M'){
            fris[1] = 1; 
        } else if(sml = 'm'){
            fris[1] = 1; 
        }
        if(sml = 'L'){
            fris[2] = 1; 
        } else if(sml = 'l'){
            fris[2] = 1; 
        }
        order();
    }
    if(opt == 4){
        cout << "S/M/L?" << endl;
        cin >> sml;
        if(sml = 'S'){
            drink[0] = 1; 
        } else if(sml = 's'){
            drink[0] = 1; 
        }
        if(sml = 'M'){
            drink[1] = 1; 
        } else if(sml = 'm'){
            drink[1] = 1; 
        }
        if(sml = 'L'){
            drink[2] = 1; 
        } else if(sml = 'l'){
            drink[2] = 1; 
        }
        order();
    }
    if(opt == 5){
        main();
    }
    if(opt ==6){
        end();
    }
    if(opt < 1 || opt > 6){
        order();
    }
}
int main(){
    system("clear");
    cout <<
    "1 - New order" << endl << "2 - Quit" << endl;
    int opt;
    cin >> opt;
    if(opt == 1){
        order();
    }
    if(opt == 2){
        return 1;
    }
    if(opt > 2 || opt < 1){
        main();
    }
    return 0;
}
