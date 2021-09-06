#include <iostream>
#include <iomanip>

int main() {
    std::string name;
    int price, temperature;
    bool hasCashback;
    std::cout << "Product's name: ";
    std::cin >> name;
    std::cout << "Product's price: ";
    std::cin >> price;
    std::cout << "Is cash-back available for this product? (true/false) ";
    std::cin >> std::boolalpha >> hasCashback;
    std::cout << "Maximum storing temperature: ";
    std::cin >> temperature;

    std::cout << '\n' << "*************** OUTPUT ***************" << "\n\n";

    std::cout << name << '\n';
    using namespace std;
    cout << "Price:..........." << setfill('0') << setw(8) << uppercase << hex << price << endl;
    cout << "Has cash-back:" << setfill('.') << setw(11) << boolalpha << hasCashback << endl;
    cout <<"Max temperature:" << setfill('.') << setw(9)  << dec <<showpos << temperature << endl;

    return 0;
}