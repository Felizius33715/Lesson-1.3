#include <iostream>

struct adress 
{
    std::string city;
    std::string street;
    int house_num;
    int home_num;
    int index;
};

static void cout(adress &a) {
    std::cout << "city: " << a.city << std::endl;
    std::cout << "street: " << a.street << std::endl;
    std::cout << "house num: " << a.house_num << std::endl;
    std::cout << "home num: " << a.home_num << std::endl;
    std::cout << "index: " << a.index << std::endl;
}

int main()
{
    adress andy;
    andy.city = "testA";
    andy.street = "testB";
    andy.house_num = 534;
    andy.home_num = 75;
    andy.index = 56467;
    cout(andy);
    return 0;
}