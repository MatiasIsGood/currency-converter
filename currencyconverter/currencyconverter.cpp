#include <iostream>

int main()
{

    std::cout << "1 = euro\n";
    std::cout << "2 = dollari\n";
    std::cout << "3 = punta\n";
    std::cout << "Anna muunnettava valuutta: ";

    int ekavaluutta;
    std::cin >> ekavaluutta;
    system("cls");


    std::cout << "1 = euro\n";
    std::cout << "2 = dollari\n";
    std::cout << "3 = punta\n";
    std::cout << "Anna haluamasi valuutta: ";

    int muunnettuvaluutta;
    std::cin >> muunnettuvaluutta;
    system("cls");


    std::cout << "anna muunnettava luku: ";
    double luku;
    std::cin >> luku;

    // euro to muut
    double eurodollari = 1.04;
    double europunta = 0.87;

    //dollari to muut
    double dollarieuro = 0.96;
    double dollaripunta = 0.84;


    //punta to muut
    double puntaeuro = 1.14;
    double puntadollari = 1.19;




    if (ekavaluutta == 1) {     //euro 
        if (muunnettuvaluutta == 1) {
            std::cout << "siitähän tulee vaan sama";
            std::cout << luku << " euroa";
        }
        else if (muunnettuvaluutta == 2) {  
            std::cout << luku * eurodollari << " euroa";
        }
        else if (muunnettuvaluutta == 3) {  
            std::cout << luku * europunta << " euroa";
        }
    }

    if (ekavaluutta == 2) {     //dollari
        if (muunnettuvaluutta == 1) {  
            std::cout << luku * dollarieuro << " dollaria";
        }
        else if (muunnettuvaluutta == 2) {
            std::cout << "siitähän tulee vaan sama";
            std::cout << luku << " dollaria";
        }
        else if (muunnettuvaluutta == 3) {  
            std::cout << luku * dollaripunta << " dollaria";
        }
    }

    if (ekavaluutta == 3) {         //punta
        if (muunnettuvaluutta == 1) {
            std::cout << luku * puntaeuro << " puntaa";
        }
        if (muunnettuvaluutta == 2) {
            std::cout << luku * puntadollari << " puntaa";
        }
        if (muunnettuvaluutta == 3) {
            std::cout << "siitähän tulee vaan sama";
            std::cout << luku << " puntaa";
        }
    }
}
