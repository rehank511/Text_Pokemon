//
//  main.cpp
//  Project 1 Pokemon
//
//  Created by Rehan Kedia on 9/14/17.
//  Copyright © 2017 Rehan Kedia. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {
    
    srand((unsigned)time(0));     // random number generator time 0 so that it changes the number everytime
    int type, pokemon, DP, HP, level, attype, weakns, AP, random, NHP, DPO, levelO, attypeO, weaknsO, APO, HPO, NHPO;     //Variables used for pokemon go
    cout <<"Welcome to Pokemon Go";   // start of the game
    cout <<"Which type of Pokemon would you like to choose \n1.Grass \n2.Fire \n3.Electric"<<endl;
    cout <<"Please Enter the assigned number of your desired choice:";
    cin >> type;
    switch (type)  // Choosing your pokemon
    {
    case 1:
        cout <<"You have the following options for grass pokemon \n1.Bulbasaur \n2.Seedot \n3.Gloom\n";
        cout <<"Enter your choice in numbers:\t";
        cin >> pokemon;
            switch (pokemon)
        {
            case 1:   //First choice
                cout << "You chose Bulbasaur.\n";
                DP = 3 ;
                HP = 50 ;
                level = 1 ;
                attype = 2 ;
                weakns = 1 ;
                break;
            case 2:
                cout << "You chose Seedot.\n";
                DP = 2 ;
                HP = 29 ;
                level = 1 ;
                attype = 1 ;
                weakns = 1 ;
                break;
            case 3:
                cout << "You chose Gloom.\n";
                DP = 3 ;
                HP = 30 ;
                level = 2 ;
                attype = 2 ;
                weakns = 1 ;
                break;
            default:
                cout <<"Invalid Selection.\n";
        }
            break;
    case 2:  //second choice
        cout <<"You have the following options for fire pokemon \n1.Charizard \n2.Vulpix \n3.Arcanine\n";
        cout <<"Enter your choice in numbers:\t";
        cin >> pokemon;
       switch (pokemon)
        {
        case 1:
            cout << "You chose Charizard.\n";
            DP = 4 ;
            HP = 45;
            level = 3 ;
            attype = 2 ;
            weakns = 2 ;
                break;
        case 2:
            cout << "You chose Vulpix.\n";
            DP = 2 ;
            HP = 20 ;
            level = 1 ;
            attype = 1 ;
            weakns = 2 ;
                break;
        case 3:
            cout << "You chose Arcanine.\n";
            DP = 6 ;
            HP = 40 ;
            level = 2 ;
            attype = 1 ;
            weakns = 2 ;
                break;
            default:
                cout <<"Invalid Selection.\n";
    }
            break;
    case 3:    // third choice
        cout <<"You have the following options for electric pokemon \n1.Pikachu \n2.Golem \n3.Magneton\n";
        cout <<"Enter your choice in numbers:\t";
        cin >> pokemon;
       switch (pokemon)
        {
            case 1:
                cout << "You chose Pikachu.\n";
                DP = 3 ;
                HP = 90 ;
                level = 1 ;
                attype = 1 ;
                weakns = 2 ;
                break;
            case 2:
                cout << "You chose Golem.\n";
                DP = 6 ;
                HP = 23 ;
                level = 3 ;
                attype = 2 ;
                weakns = 2 ;
                break;
            case 3:
                cout << "You chose Magneton.\n";
                DP = 3 ;
                HP = 20 ;
                level = 2 ;
                attype = 2 ;
                weakns = 2 ;
                break;
            default:
                cout <<"Invalid Selection.\n";
        }
            break;
    default:
        cout <<"Invalid Selection.\n";
            pokemon=0;
    }
    
    if (pokemon == 1 || pokemon == 2 || pokemon == 3) {   //catching pokemon     // pokemon contains only 3 values so if any other value is put there is an error
        random = 0;                                                    // so that random enters he loop
        while (random == 0) {                                         // Loop makes the user try again and again until they catch the pokemon.
    random = rand() % 3;
            if (random == 0) {
        cout << "You have failed to catch the pokemon!. You are a bad trainer!!.\n";
        }
    else
    {
        cout << "You have been successful to catch the pokemon !!!.\n";
        
    }}
        if (random !=0) {
        cout << "You are now entering the Gym, be prepared to fight !!!!.\n";
        cout << "Your possible opponent will be from the following-\n1.Typhlosion\n2.Fearow\n3.Manectric\n4.Charmandar"<<endl;
        cout << "Your final opponent is: ";
        random = rand() % 4 + 1;                                  // 4+1 so that 0 is excluded from the random generator
        switch (random)    // randomly selecting opponent
        {
            case 1:
                cout << "Typhlosion !!\n";
                DPO = 3 ;
                HPO = 20 ;
                levelO = 1 ;
                attypeO = 1 ;
                weaknsO = 2 ;
                if (attypeO == weakns) {      // for using weakness multiplyer as if they are equal the attack points get more value
                    if (level == 1) {
                        APO = DPO + (1 * DPO);   }
                        else if (level ==2){
                            APO = DPO + (0.5 * DPO); }
                        else if (level == 3) {
                            APO = DPO + (0 * DPO); }}
                else {
                     APO = DPO;
                }
                    if (attype == weaknsO) {  // for using weakness multiplyer as if they are equal the attack points get more value
                        if (level == 1) {
                            AP = DP + (1 * DP); }
                        else if (level == 2){
                            AP = DP + (2 * DP);  }
                        else if (level == 3) {
                            AP = DP + (3 * DP); }}
                    else {
                        AP = DP;}
                break;
            case 2:
                cout << "Fearow !!\n";
                DPO = 5 ;
                HPO = 30 ;
                levelO = 2 ;
                attypeO = 2 ;
                weaknsO = 3 ;
                    if (attypeO == weakns) {    // for using weakness multiplyer as if they are equal the attack points get more value
                        if (level == 1) {
                            APO = DPO + (2 * DPO);   }
                        else if (level ==2){
                            APO = DPO + (1 * DPO); }
                        else if (level == 3) {
                            APO = DPO + (0.5 * DPO); }}
                else {
                      APO = DPO;
                        }
                if (attype == weaknsO) {     // for using weakness multiplyer as if they are equal the attack points get more value
                    if (level == 1) {
                        AP = DP + (0.5 * DP); }
                    else if (level == 2){
                        AP = DP + (1 * DP);  }
                    else if (level == 3) {
                        AP = DP + (2 * DP); }}
                else {
                    AP = DP;}
                break;
            case 3:
                cout << "Manectric !!\n";
                DPO = 4 ;
                HPO = 30 ;
                levelO = 2 ;
                attypeO = 1 ;
                weaknsO = 2 ;
                        if (attypeO == weakns) {     // for using weakness multiplyer as if they are equal the attack points get more value
                            if (level == 1) {
                                APO = DPO + (2 * DPO);   }
                            else if (level ==2){
                                APO = DPO + (1 * DPO); }
                            else if (level == 3) {
                                APO = DPO + (0.5 * DPO); }}
                        else {
                                APO = DPO;
                            }
                if (attype == weaknsO) {       // for using weakness multiplyer as if they are equal the attack points get more value
                    if (level == 1) {
                        AP = DP + (0.5 * DP); }
                    else if (level == 2){
                        AP = DP + (1 * DP);  }
                    else if (level == 3) {
                        AP = DP + (2 * DP); }}
                else {
                    AP = DP;}
                break;
            case 4:
                cout << "Charmandar !!\n";
                DPO = 3 ;
                HPO = 20 ;
                levelO = 1 ;
                attypeO = 1 ;
                weaknsO = 4 ;
                            if (attypeO == weakns) {    // for using weakness multiplyer as if they are equal the attack points get more value
                                if (level == 1) {
                                    APO = DPO + (1 * DPO);   }
                                else if (level ==2){
                                    APO = DPO + (0.5 * DPO); }
                                else if (level == 3) {
                                    APO = DPO + (0 * DPO); }}
                            else {
                                    APO = DPO;
                                }
                if (attype == weaknsO) {     // for using weakness multiplyer as if they are equal the attack points get more value
                    if (level == 1) {
                        AP = DP + (1 * DP); }
                    else if (level == 2){
                        AP = DP + (2 * DP);  }
                    else if (level == 3) {
                        AP = DP + (3 * DP); }}
                else {
                    AP = DP;}
                break;
        }
            NHPO=HPO;           // to show the intial values so that it enters the loop
            NHP=HP;             // to show the intial values so that it enters the loop
            while(NHPO>0 && NHP>0)      // this loop determines the winner so as soon as one's hp is less or equal to 0 the                                      
            {
            NHPO = NHPO - AP;            // formula for new HP i.e determining the winner
            NHP = NHP - APO;
          cout << "Opponents's HP: "<<NHPO<<endl;
            cout << "Your Pokemon's HP: "<<NHP<<endl;
            }
            if (NHP > NHPO) {
            cout << "Congratulations !!!. You won the battle.\nEXIT THE GAME\n";
        }
        else {
            cout << "Sorry Try next time, you couldn't defeat your opponent this time\nEXIT THE GAME\n";
        }
        
        }}
    else {
        cout << "Exit the game!!.\n";
    }
         return 0;
}


