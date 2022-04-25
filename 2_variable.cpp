#include<iostream>

int main(){
    std::cout <<"Estimate for carpet cleaning service" << std::endl;

    int small_room, large_room;
    std::cout <<"Number of small room: ";
    std::cin >>small_room;

    std::cout <<"Number of large room: ";
    std::cin >>large_room;

    int small_price = 25, large_price = 35;
    std::cout <<"Price per small room: $" << small_price<< std::endl;
    std::cout <<"Price per large room: $" << large_price<< std::endl;

    int cost = (small_room*small_price) + (large_room*large_price);
    std::cout <<"Cost: $"<< cost<< std::endl;;

    float tax = (cost * 6) / 100;
    std::cout <<"Tax: $"<< tax << std::endl;;

    float estimate = cost + tax;
    std::cout <<"Total estimate: $" << estimate << std::endl;;

    std::cout <<"This estimate is valid for 30 days."<< std::endl;;
}